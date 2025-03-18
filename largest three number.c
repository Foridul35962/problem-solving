#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three number= ");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("%d is big number",x);
    }
    else if(y>z)
    {
        printf("%d is big number",y);
    }
    else
    {
        printf("%d is big number",z);
    }
    return 0;
}
