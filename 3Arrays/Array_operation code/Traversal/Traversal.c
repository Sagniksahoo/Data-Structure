#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        printf("Enter the elements :");
        scanf("%d",&arr[i]);
    }
    printf("The elements of the Array are:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

  return 0;
}