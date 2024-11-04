#include <stdio.h>

void InputArr(int size,int arr[]){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int LinearSearch(int arr[], int size, int x){
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            return i;  
        }
    }
    return -1; 
} 
//O(n)

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: ");
    InputArr(size,arr);
    printArr(arr,size);

    printf("\nEnter the element to search: ");
    int x;
    scanf("%d",&x);
    int result = LinearSearch(arr,size,x);

    if(result==-1){
        printf("Element not found");
    }else{
        printf("Element found at index %d",result);
    }

    return 0;
}