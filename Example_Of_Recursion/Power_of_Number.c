#include<stdio.h>

int PowerL(int num,int pow)
{
    //using for loop
    int ans=1;
    for(int i=1;i<=pow;i++)
    {
        ans=ans*num;
    }
    return ans;
}
int PowerR(int num, int pow)
{
    //using recursion
    if(pow>0)
    {
        return PowerR(num,pow-1)*num;
    }
    return 1;
}

int main()
{
    printf("%d\n",PowerL(4,5));
    printf("%d\n",PowerR(2,10));

    return 0;
}