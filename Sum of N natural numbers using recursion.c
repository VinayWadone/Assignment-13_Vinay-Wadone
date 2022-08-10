#include<stdio.h>
int sum(int);
int sum(int n)
{
    int s=0;
    if (n==0)return;
    s=n+sum(n-1);
    return s;
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    sum(a);
    printf("\n\nThe sum is: %d\n\n", sum(a));
    return 0;
}


