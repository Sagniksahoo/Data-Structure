#include <stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    if(arr[mid]>element){
        high=mid-1;
    }
    }
    return -1;
}
int main(){
    //unsort array for linier search
//   int arr[]={1,3,5,56,4,3,23,5,4,455,56,34}; 
//   int size=sizeof(arr)/sizeof(int);
//sorted array for binary search
  int arr[]={1,3,5,56,64,73,123,225,444};
  int size=sizeof(arr)/sizeof(int);
  int element=56;
  //int index=linearSearch(arr,size,element);
  int index=binarySearch(arr,size,element);
  printf("the element %d is found at index %d \n",element,index);
  return 0;
}