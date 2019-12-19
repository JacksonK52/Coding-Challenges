#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void palindrome(char str[])
{
    int len = 0;
    int rev = strlen(str) - 1;
    while (rev > len) 
    { 
        if (str[len++] != str[rev--]) 
        { 
            printf("%s is Not Palindrome\n", str); 
            exit(0);
        }
    }
    printf("%s is palindrome\n", str);
}

void main()
{
    char str[20];
    printf("==============================\n");
    printf("Code by Jackson Konjengbam\n");
    printf("==============================\n");
    printf("Enter a number or word: ");
    scanf("%s", str);
    palindrome(str);
}
