#include<stdio.h>
int main()
{
    float a,b,c;
    int ch;
    printf("What are you want?\n");
    printf("Choice=1:(+)\n");
    printf("Choice=2:(-)\n");
    printf("Choice=3:(*)\n");
    printf("Choice=4:(/)\n");
    printf("Enter your choice number=");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter your first number= ");
        scanf("%f",&a);
        printf("Enter your second number= ");
        scanf("%f",&b);
        c=a+b;
        printf("The result is= %.2f",c);
    }
    else if(ch==2)
    {
        printf("Enter your big number= ");
        scanf("%f",&a);
        printf("Enter your small number= ");
        scanf("%f",&b);
        c=a-b;
        printf("The result is= %.2f",c);
    }
    else if(ch==3)
    {
        printf("Enter your first number= ");
        scanf("%f",&a);
        printf("Enter your second number= ");
        scanf("%f",&b);
        c=a*b;
        printf("The result is= %.2f",c);
    }
    else if(ch==3)
    {
        printf("Enter your big number= ");
        scanf("%f",&a);
        printf("Enter your small number= ");
        scanf("%f",&b);
        c=a/b;
        printf("The result is= %.2f",c);
    }
    else
    {
        printf("You are choice a wrong number. please try again!\n\n");
    }
    return 0;
}
