#include<stdio.h>
int dig(int);
int dig(int n)
{
    static int k=1,m; //static int is the key here, for just "int" its not working. I got a similar code in https://www.includehelp.com/c-programs/count-digits-recursion.aspx, only diff was the static int.
    n=n/10;
    if(n>0)
    {
    k++;
    dig(n);
    }
    else
    {
       return k;
    }

}
int main()
    {
    int a,i;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    //for(i=1;dig(a)>0;i++)
   // a=a/10;
    //dig(a);

    printf("\n\nThe count is: %d\n\n",dig(a));
    return 0;
    }

//The below one is another iteration 
    /*#include<stdio.h>
int dig(int);
int dig(int n)
{
    int k=1,m;
    m=n/10;
    //if(m==0)return 1;
    //k++;
    //dig(m);
    return m;
}
int main()
    {
    int a,i;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    for(i=1;dig(a)>0;i++)
    a=a/10;
    dig(a);

    printf("\n\nThe count is: %d\n\n",i);
    return 0;
    }*/
