#include<stdio.h>
int main()
{
    int i=0,n,e[100],o[100],t=0,p;
    for(n=1;n<=100;n++)
    {
        if(n%2==0)
        {
            e[i]=n;
            i++;
        }
        else
        {
            o[t]=n;
            t++;
        }
    }
    printf("All Even numbers: ");
    for(p=0;p<i;p++)
    {
        printf("%d ",e[p]);
    }
    printf("\n\nAll Odd numbers: ");
    for(p=0;p<t;p++)
    {
        printf("%d ",o[p]);
    }
    return 0;
}
