#include<stdio.h>
#include<stdlib.h>

double e(int x, int n)
{
    static double p=1,f=1;
    double r=1;
    if(n==0)
    {
        return 1;
    }else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;

        return (r+(p/f));
    }
}

int main()
{
    int pow=0, fact=0;

    printf("Enter the power: ");
    scanf("%d",&pow);
    printf("Enter the factorial: ");
    scanf("%d",&fact);

    double ans=e(pow,fact);
    
    printf("\nThe Answer is %lf\n",ans);

    return 0;
    
}