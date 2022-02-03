#include<stdio.h>
int main()
{
    int i,b,ar,c,A,a,w;
    scanf("%d%d%d%d",&i,&b,&w,&c);
    if(i<=2*w||b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        A=i*b;
        ar=2*w*(i+b-2*w);
        ar=ar*c;
        printf("%d",ar);
        }
        return 0;
}