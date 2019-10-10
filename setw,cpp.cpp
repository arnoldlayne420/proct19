//Implementing setw

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	long pop1=2441235,pop2=47,pop3=243;
	//w/o using setw
	cout<<"POINTS  "<<"POP"<<endl;
	cout<<"Point 1 "<<pop1<<endl;
	cout<<"Point 2 "<<pop2<<endl;
	cout<<"Point 3 "<<pop3<<endl;
	//now let us use setw
	cout<<setw(8)<<"LOCATION"<<setw(12)<<"POPULATION"<<endl<<setw(8)<<"PortCity"<<setw(12)<<pop1<<endl;
	cout<<setw(8)<<"Hull city"<<setw(12)<<pop2<<endl;
	
	return 0;
}


