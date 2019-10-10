import numpy as np 
import pandas as pd 
from subprocess import check_output
#print(check_output(['ls','../input']).decode('utf8'))

import matplotlib.pyplot as plt
import tensorflow as tf 

data=pd.read_csv('data.csv')
dataframe=data.drop(['Labels'])
dataframe=dataframe[:10]

dataframe.loc[:,("y1")]=[1,1,1,0,0,1,0,1,1,1]

dataframe.loc[:,("y2")]=dataframe["y1"]==0
dataframe.loc[:,("y2")]=dataframe["y2"].astype(int)

inputX = dataframe.loc[:, ['Area', 'Bathrooms']].as_matrix()
inputY = dataframe.loc[:, ["y1", "y2"]].as_matrix()

learning_rate = 0.000001
training_epochs = 2000
display_step = 50
n_samples = inputY.size

x=tf.placeholder(tf.float32,[None,2])

W=tf.placeholder(tf.zeros([2,2]))
b=tf.Variable(tf.zeros([2]))

y_values=tf.add(tf.matmul(x,W),b)

y=tf.nn.softmax(y_values)

y_=tf.placeholder(tf.float32,[None,2])
