#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf("Enter the number= ");
    scanf("%d",&n);
    if(n==0|| n==1)
    {
        p=0;
    }
    for (i=2;i<=n/2;++i)
    {
        if (n%i==0)
        {
            p=0;
            break;
        }
    }
    if (p==1)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}
