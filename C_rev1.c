#include <stdio.h>
#include "C_functions.c"


void PrintMyName(void);
int factorial_number(int num);
void fibonacci_series(int order);
void bubble_sort(int *arr, int size);
int binary_search(const int *arr,int size,int value);

int main()
{   
    /* PrintM4yName();
    int num= factorial_number(5);
    fibonacci_series(4);
     */

    // take array from user.
    /* int arr[50];
    int size;
    printf(" enter the size of array : ");
    scanf("%d",&size);  
    printf(" enter the elements: ");  
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    } */
    

    // binary research example:
    /* int arr[10]={5,55,87,10,32,100,200,9,3,150};
    int size=10,value=150;
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf(" element %d  : %d\n",i+1,arr[i]);
    }    
    printf("index is %d ",binary_search(arr,size,value));
     */

    
};
