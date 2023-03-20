// Write a program to print the numbers from 1 to 100, but replacemultiples of 3 with "Fizz" and multiples of 5 with "Buzz".
#include<stdio.h>
int main() 
{
   
    for (int i = 1; i<=100;i++)
    {
        if (i%3==0)
        {
            printf("fizz\n");
        }
        else if(i%5==0){
            printf("buzz\n");
        }
        else 
            printf("i\n");
        
    }
    return 0;
}