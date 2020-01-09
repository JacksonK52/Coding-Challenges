#include<stdio.h>
void fizzbuzz()
{
    for(int i=1; i <= 100; i++)
    {
        if((i%3 == 0) && (i%5 == 0))
            printf("FizzBuzz, ");
        else if((i%3) == 0)
            printf("Fizz, ");
        else if((i%5) == 0)
            printf("Buzz, ");
        else
            printf("%d, ",i);
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