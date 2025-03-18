#include<stdio.h>
int main()
{
    float n,f;
    int integer;
    printf("Enter a floating point number: ");
    scanf("%f",&n);
    integer=(int)n;
    f=n-integer;
    printf("Integer part: %d\n",integer);
    printf("Fractional part: %.2f\n",f);
    return 0;
}
