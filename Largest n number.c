#include<stdio.h>
int main()
{
    int a[100],n,big=0,i;
    printf("Enter the number of n= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    printf("The biggest number is= %d",big);
    return 0;
}
