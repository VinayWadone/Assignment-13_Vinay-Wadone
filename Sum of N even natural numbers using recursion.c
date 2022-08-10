#include<stdio.h>
int evensum(int);
int evensum(int n)
{
    int s=0;
    if(n==0)return;
    s=2*n+evensum(n-1);
    return s;
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe sum is: %d\n\n",evensum(a));
    return 0;
}
