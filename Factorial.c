#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Input integer value: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d\n",fact);
    return 0;
}
