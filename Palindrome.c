#include<stdio.h>
int main()
{
    int n,sum=0,d,i,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
    if(temp==sum)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}