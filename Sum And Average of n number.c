#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100];
    float average;
    printf("Input value of n: ");
    scanf("%d",&n);
    printf("Input %d numbers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    average = (float)sum/n;
    printf("Sum = %d\nAverage = %f",sum,average);
    return 0;
}
