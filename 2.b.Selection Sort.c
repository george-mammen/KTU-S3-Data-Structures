#include<stdio.h>

int arr[50], n, i, j, lowerlimit,temp;

void scanArray(int arr[],int n) {
    printf("\n Enter the elements of the set: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[],int n) {
    printf("\n The set as per input: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

void SelectionSort(int arr[],int n) {
    for (i = 0; i < n - 1; i++) {
        lowerlimit = i;
        for(j = i + 1; j < n ; j++) {
            if (arr[j] < arr[lowerlimit] ) {
                temp = arr[lowerlimit];
                arr[lowerlimit] = arr[j];
                arr[j] = temp;
                lowerlimit = j;
            }
        }
    }
    printf("\n \n The set after using Selection Sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

void main()
{
    printf("\n Enter the number of elements in the set: ");
    scanf("%d", &n);
    scanArray(arr,n);
    printArray(arr,n);
    SelectionSort(arr,n);
}
