#include<stdio.h>
void fizzbuzz()
{
    for(int i=0; i <= 100; i++)
    {
        if(i == 0)
            printf("%d, ", i);
        else if((i%3) == 0)
        {
            printf("Fizz, ");
        }
        else if((i%5) == 0)
        {
            printf("Buzz, ");
        }
        else
        {
            printf("%d, ",i);
        }
    }
    printf("\n");
}
void main()
{
    printf("==============================\n");
    printf("Code by Jackson Konjengbam\n");
    printf("==============================\n");
    printf("Fizz Buzz program\n");
    fizzbuzz();
}