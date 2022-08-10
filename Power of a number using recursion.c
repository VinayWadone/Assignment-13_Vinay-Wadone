#include<stdio.h>
int power(int, int);
int power(int x, int y)
{
    static int m=1,n;
    //n=y;
    if (y<0)return;
    if (y==0) return 1;
    if (y>0)
    {
    m=m*x;
    power(x, (y-1));
    }
    //else return m;
    return m;
}
int main()
    {
    int m,n;
    printf("\n\nEnter two numbers\n\n");
    scanf("%d" "%d",&m, &n);
    if (n>=0)
    printf("\n\n%d to the power %d is: %d\n\n",m,n,power(m,n));
    else
    printf("2\n\nEnter a positive power value\n\n");
    return 0;
    }

