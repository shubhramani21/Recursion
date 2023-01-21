#include<stdio.h>


int fibo(int n)//usual method using recursion
{
    if(n==0 || n==1)
    {
        return n;
    }else
    {
        return fibo(n-2)+fibo(n-1);
    }
}

int fiboLoop(int n)//using for loop
{
    int t0=0,t1=1,s=0,i;

    if(n==0 ||n==1)
    {
        return n;
    }else
    {
        for(i=2;i<=n;i++)
        {
            s=t0+t1;
            t0=t1;
            t1=s;
        }
    }
    return s;
}

int arr[10]={[0 ... 9] = -1};

int fiboMemo(int n)//by memoization
{
    
    if(n==0 || n==1)
    {
        arr[n]=n;
        return n;
    }else
    {
        if(arr[n-1]==-1)
        {
            arr[n-1]=fibo(n-1);
        }
        if(arr[n-2]==-1)
        {
            arr[n-2]=fibo(n-2);
        }
        return arr[n-2]+arr[n-1];
    }
}

int main()
{
    int n=5;
    
    printf("fibonacci of %d is %d\n",n,fibo(n));
    printf("fibonacci of %d is %d\n",n,fiboLoop(n));
    printf("fibonacci of %d is %d\n",n,fiboMemo(n));

    return 0;
}