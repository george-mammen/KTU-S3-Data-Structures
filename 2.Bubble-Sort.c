#include<stdio.h>

void main(){
    int n,a ;
    
    printf("\n Enter the number of elements in the array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("\n Enter the elements of the array :");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
        
    printf("\n The Unsorted array is : ");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
        
    printf("\n The Sorted array is : ");    
    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d ",arr[i]);
    }
