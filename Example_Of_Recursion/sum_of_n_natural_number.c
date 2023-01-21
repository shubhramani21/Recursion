#include<stdio.h>

//not very efficent because of time and space complexity 
//O(n)-Time
//O(n)-Space
//better way to do this is using mathematical formula because of O(1) for both time and space complexity
//with loops its time complexity is O(n) and space complexity is O(1) still better than recursion

int Sum(int n)
{
    if(n>0)
    {
        return Sum(n-1)+n;
    }
    return 0;
}

int main()
{
    printf("%d ",Sum(5));
    return 0;
}