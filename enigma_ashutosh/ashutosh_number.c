
// Write a program that takes a number as input and checks whether it is positive, negative or zero. 
#include<stdio.h>
int main() 
{
    int number;
    printf("please enter your number: ");
    scanf("%d",&number);
    if(number > 0)
    {
        printf("given number is positive.");
    }
    else if(number < 0)
    {
        printf("given number is negative.");
    }
    else
    {
        printf("given number is zero.");
    }
    return 0;
}