#include<stdio.h>
#include<ctype.h>
main()
{
    char a;
    printf("Press any Key\n");
    a=getchar();
    if(isalpha(a)>0)
    {
        printf("This is a alphabet");
    }
    else if(isdigit(a)>0)
    {
        printf("This is a digit");
    }
        else
        {
            printf("The charecter is not alphanumeric.");
        }
    return 0;
}
