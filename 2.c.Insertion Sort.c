#include <stdio.h>

int arr[50], n, i, j,temp;

void scanArray(int arr[], int n)
{
    printf("\n Enter the elements of the set: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    printf("\n The set as per input: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}


void InsertionSort(int arr[], int n) {
    for (i = 1;i < n;i++) {
        temp = arr[i];
        j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }


    printf("\n \n The set after using Insertion Sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}


void main()
{
    printf("\n Enter the number of elements in the set: ");
    scanf("%d", &n);
    scanArray(arr, n);
    printArray(arr, n);
    InsertionSort(arr, n);
}
