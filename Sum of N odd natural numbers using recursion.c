#include<stdio.h>
int Oddsum(int);
int Oddsum(int n)
{
    int s=0;
    if(n==0)return;
    s=(2*n-1)+Oddsum(n-1);
    return s;
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe sum is:%d\n\n",Oddsum(a));
    return 0;
}
