#include<stdio.h>

void main(){
    int n ;
    int arr[n];
    int a;
    int flag = -1;
    
    printf("\n Enter the number of elements in the array :");
    scanf("%d",&n);
    
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
    
    printf("\n Enter the element to be searched : "); 
    scanf("%d",&a);
    for(int i = 0;i < n;i++) {
        if(arr[i] == a) {
            flag = 1;
            printf("\n The element %d is at the %dth position",a,i);
        }
        }
        if(flag == -1) {
            printf("\n The element %d is does not exist in the array",a);
    }
}
