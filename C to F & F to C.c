#include<stdio.h>
int main()
{
    float F, C;
    int Ch;
    printf("Press 1: C to F\n");
    printf("Press 2: F to C\n");
    printf("Enter your chose number= ");
    scanf("%d",&Ch);
    if(Ch==1)
    {
        printf("Enter the Celsius value= ");
        scanf("%f",&C);
        F=9*C/5+32;
        printf("Fahrenheit is= %f",F);
    }
    else if(Ch==2)
    {
        printf("Enter the Fahrenheit value= ");
        scanf("%f",&F);
        C=(F-32)*5/9;
        printf("Celsius is= %f",C);
    }
    else
    {
        printf("\nYou press wrong number.\nPlease try again");
    }
    return 0;
}
