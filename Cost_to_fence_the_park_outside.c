#include<stdio.h>
int main()
{
    int i,b,w,ar,c,A,a;
    scanf("%d%d%d%d",&i,&b,&w,&c);;
    
    A=i*b;
    a=(i+2*w)*(b+2*w);
    ar=a-A;
    ar=ar*c;
    printf("%d",ar);
    return 0;
}