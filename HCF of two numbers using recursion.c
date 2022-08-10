#include<stdio.h>
int HCF(int, int);
int HCF(int a, int b)
{
    int rem;
    rem = a%b;
    if(rem==0)return b;
    a=b;
    b=rem;
    HCF(a,b);
}
int main()
    {
    int m,n;
    printf("\n\nEnter two numbers\n\n");
    scanf("%d" "%d",&m, &n);
    if (m>n)
    printf("\n\nThe HCF is: %d\n\n",HCF(m,n));
    else
    printf("\n\nThe HCF is: %d\n\n",HCF(n,m));
    return 0;
    }

