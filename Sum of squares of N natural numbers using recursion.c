#include<stdio.h>
int squaresum(int);
int squaresum(int n)
{
    int s=0;
    if(n==0)return;
    s=n*n+squaresum(n-1);
    return s;
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\nThe sum is: %d\n\n",squaresum(a));
    return 0;

}
