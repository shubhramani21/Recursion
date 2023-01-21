#include<stdio.h>

void e(int x, int n)//by using loop
{
    double s=1;
    for(double i=n;i>0;i--)
    {
        s=1+((x/i)*s);
    }
    printf("%f\n",s);
}

double eR(int x, int n)
{
    static double s=1;
    double a=x,b=n;
    if(n==0)
    {
        return s;
    }else{
        s=1+((a/b)*s);
        return eR(x,n-1);
    }
}

int main()
{
    e(1,10);
    printf("\n%f",eR(1,10));

    return 0;
}