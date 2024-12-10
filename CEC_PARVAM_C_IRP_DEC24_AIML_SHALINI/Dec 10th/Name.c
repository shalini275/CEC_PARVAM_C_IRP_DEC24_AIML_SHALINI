#include<stdio.h>
// #include<string.h>

int main()
{

    char name[20];
    int count;
    printf("Enter your name: ");
    scanf("%s", &name);

    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
        }

                          
    if (count%2 == 0)
        printf("Your name has an even number of characters.\n");
    else
        printf("Your name has an odd number of characters.\n");
    // size = strlen(name);
    // printf("%d",size);

    // if(size%2 == 0)
    //     printf("\n Name Has Even Characters.");
    
    // else
    //     printf("\n Name Has Odd Characters.");


    return 0;
}