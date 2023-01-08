#include <stdio.h>
#include "C_functions.c"
void PrintMyName(void);
int factorial_number(int num);
void fibonacci_series(int order);
void bubble_sort(int *arr, int size);
int main()
{   
    /* PrintM4yName();
    int num= factorial_number(5);
    fibonacci_series(4);
     */
    int arr[50];
    int size;
    printf(" enter the size of array : ");
    scanf("%d",&size);  
    printf(" enter the elements: ");  
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &arr[i]);
    }
    
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf(" element %d  : %d\n",i+1,arr[i]);
    }
    
};
