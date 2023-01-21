#include<stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int nCr(int n,int r)
{
    int num,deno;

    num=fact(n);
    deno=fact(n-r)*fact(r);

    return num/deno;
}

int NCR(int n,int r)
{
    if(r==0 || r==n)
    {
        return 1;
    }else{
        return NCR(n-1,r-1)+NCR(n-1,r);
    }
} 

int main()
{
    printf("%d\n",nCr(4,2));
    printf("%d\n",NCR(4,2));
    return 0;
}