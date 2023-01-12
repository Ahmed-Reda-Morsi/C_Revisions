#include<stdio.h>
#include "C_functions.c"

// standard types (each company has it standard types names )
typedef unsigned char u8;
typedef signed char   s8;
typedef unsigned int u16;
typedef signed int s16;
typedef float f32;
typedef double  f64;
typedef long double f80;

int factorial_number(int num);
void fibonacci_series(int order);
void bubble_sort(int *arr, int size);
int binary_search(const int *arr,int size,int value);


int main()
{   

    int (*ptr_fact)(int)=factorial_number;
    /* PrintM4yName();
     */
    int num= ptr_fact(5);
    printf("%x \n",num);


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
