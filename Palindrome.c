#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Input string: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    if (strcmp(str1,str2)==0)
        printf("%s is palindrome\n",str2);
    else
        printf("%s is not palindrome\n",str2);
    return 0;
}
