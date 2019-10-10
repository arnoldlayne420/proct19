#include<stdio.h>

int max(int a,int b)
{
    return(a>b?a:b);
}

int KnapSack(int W, int val[],int wt[], int n)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]>W){
        return KnapSack(W,wt,val,n-1);
    }
    else return max(val[n-1]+KnapSack(W-wt[n-1],val,wt,n-1),
                    KnapSack(W,val,wt,n-1));
}


int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int W=50;
    int n=sizeof(val)/sizeof(val[0]);
    printf("%d",KnapSack(W,val,wt,n));
}