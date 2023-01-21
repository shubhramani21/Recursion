#include<stdio.h>

//It's time and space complexity is O(n)

int Fact(int n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return n*Fact(n-1);
    }
}

int main()
{
    int num=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    int ans=Fact(num);

    printf("The factorial of %d is %d\n",num,ans);

    return 0;
}