#include <stdio.h>
//insertion Function
// int  indInsertion(int arr[],int size,int element,int capacity,int index){
//     if(size>=capacity){
//         printf("The array is full");
//         return -1;
//     }
//     for(int i=size-1;i>=index;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[index]=element;
//     return 1;
// }
int indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        // printf("The array is Full");
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];//5=4,4=3,
    }
    arr[index]=element;
    return 1;
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int element=45;
    int index=3;
    display(arr,size);
    int flag=indInsertion(arr,size,element,100,index);
    size +=1;
    if(flag==1){
        display(arr,size);
        printf("the element is inserted at index %d",index);
    }
    else{
        printf("The array is full");
    }
  return 0;
}