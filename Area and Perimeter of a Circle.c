//Area and Perimeter of a circle
#include<stdio.h>
#define PI 3.1416
int main()
{
    int a;
    float r,area,perimeter;
    printf("1: Area of a circle\n");
    printf("2: Perimeter of a circle\n");
    printf("What is your choice number= ");
    scanf("%d",&a);
    if(a==1||a==2)
        {
            printf("Enter a radius= ");
            scanf("%f",&r);
        }
    if (a==1)
        {
            area=PI*r*r;
            printf("The area of circle is= %f\n",area);
        }
    else if (a==2)
        {
           perimeter=2*PI*r;
           printf("The perimeter of circle is= %f\n",perimeter);
        }
    else
        {
            printf("You choice wrong number. Try again later.");
        }
    return 0;
}
