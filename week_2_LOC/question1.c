// Write a program to count the number of occurrences of a number in an array using function

#include<stdio.h>
int read(int arr[]);
int occourance(int arr[],int n);
int main()
{
    int arr[10];
    int n;
    printf("enter the number");
    read(arr);
    
    printf("enter a number which you want to occour");
    scanf("%d",&n);
    int c;
    c=occourance(arr,n);
    printf("the number is %d",c);
    return 0;

}
int occourance(int arr[],int n) //counting the occurence.
{
    int k=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {           k++;
        }
    }
    return k;



}
int read(int arr[]) //reading the array.
{
    for(int j=0;j<10;j++){
        scanf("%d",&arr[j]);
    }
    return 0;
}