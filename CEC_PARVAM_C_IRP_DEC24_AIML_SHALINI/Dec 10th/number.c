#include<stdio.h>

int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 100 && n < 500)
        result = n * 5;
    else if(n > 500)
        result = n / 2;
    else if(n < 100)
        result = n % 10;
    else
        printf("Invalid Input");
    result*=result;
    if ()
        printf("Result: %d", result);


    // printf("");



    return 0;
}