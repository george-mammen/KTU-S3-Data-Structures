#include<stdio.h>

int main(){
    int n,a,flag = -1;
    int arr[n];
   
    printf("\n Enter the number of elements in the array :");
    scanf("%d",&n);
    
    printf("\n Enter the elements of the array :");
    for(int i = 0;i < n;i++) {
        scanf("%d",&arr[i]);
    }
        
    printf("\n The Array is : ");
    for(int i = 0;i < n;i++) {
        printf("%d ",arr[i]);
    }
        
    printf("\n\n Enter the element to be searched : "); 
    scanf("%d",&a);
    
    for(int i = 0;i < n;i++) {
        if(arr[i] == a) {
            flag = 1;
            printf("\n The element %d is at the %dth position",a,i);
        }
    }
    if(flag == -1) {
            printf("\n The element %d  does not exist in the array",a);
    }
}
