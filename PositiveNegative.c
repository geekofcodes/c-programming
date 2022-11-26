//This is a program to display whether a number is positive or negative.

#include<stdio.h>
int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         printf("The number is positive");
    else if (num < 0)
        printf("The number is negative");
    else
        printf("Zero");
    
    return 0;
}