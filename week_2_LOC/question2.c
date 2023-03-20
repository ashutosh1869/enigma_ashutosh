// Take two array as input, merge them and print it in reverse order using loop.
#include <stdio.h>
int main(){
printf("Enter size of your 1st Array : ");
int size1;
scanf("%d", &size1);
printf("Enter size of your 2nd Array : ");
int size2;
scanf("%d", &size2);
int Array1[size1];
int Array2[size2];

// input of 1st array
printf("enter elements of first array: \n");
for(int i = 0; i < size1; i++){
    scanf("%d", &Array1[i]);
  }

// input of 2nd array
printf("enter elements of second array: \n");
for(int i = 0; i < size2; i++){
    scanf("%d", &Array2[i]);
  }
// merging 2 arrays.
int size = size1+size2;
int newArray[size];
int j=0;
  for(int i=0;i<size1;i++)
    {   
        newArray[j]=Array1[i];
        j++;
    }
    
    for(int i=0;i<size2;i++)
    {   
        newArray[j]=Array2[i];
        j++;
    }

    printf("elements of new merged array:\n");

    int reversedArray[size];
    int i=0;
    for(int j=size-1;j>=0;j--)
    {
        reversedArray[i]=newArray[j];
        printf("%d",reversedArray[i]);
        i++;
    }

    return 0;

}

