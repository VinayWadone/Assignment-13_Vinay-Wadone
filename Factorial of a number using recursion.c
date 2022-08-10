#include<stdio.h>
int fact(int);
int fact (int n)
{
    int a;
    if(n==0)return 1;
    a=n*fact(n-1);
    return a;
}
int main()
    {
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe factorial of your number is: %d\n\n",fact(a));
    return 0;
    }
