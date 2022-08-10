#include<stdio.h>
int fib(int);
int fib(int n)
{
    //int m;
    if (n<0)return;
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);

}
int main()
    {
    int a,i;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe series is: ");
    for (i=1; i<=a; i++)
        printf("\n%d",fib(i));
    return 0;
    }
