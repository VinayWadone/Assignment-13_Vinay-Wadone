#include<stdio.h>
int sd(int);
int sd(int n)
{
    int s;
    if(n==0)return;
    s=(n%10)+sd(n/10);
    return s;
}
int main()
    {
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe sum is: %d\n\n",sd(a));
    return 0;
    }
