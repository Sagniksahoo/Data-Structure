#include <stdio.h>
#include<stdlib.h>

struct myArray {
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray* a,int tSize, int uSize){
    // (*a).total_size=tSize;
    // (*a).used_size=uSize;
    // (*a).ptr=(int *)malloc(tSize*sizeof(int));
    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr=(int *)malloc(tSize*sizeof(int));
};
void show(struct myArray *a){
 for(int i=0;i<a->used_size;i++){
     printf("%d\n",a->ptr[i]);
 }
};
void setValue(struct myArray *a){
    int n;
     for(int i=0;i<a->used_size;i++){
         printf("Enter the values: ");
         scanf("%d\n",&n);
         a->ptr[i]=n;
 }
}
void get(struct myArray *a,int index){
    int n;
    printf("Enter the index: ");
    scanf("%d\n",&n);
    printf("%d\n",a->ptr[n]);
};
void insert(struct myArray *a,int n){
    int i;
    for(i=a->used_size;i>0;i--){
        a->ptr[i]=a->ptr[i-1];
    }
    a->ptr[0]=n;
    a->used_size++;
};
void delete(struct myArray *a,int n){
    int i;
    for(i=n;i<a->used_size;i++){
        a->ptr[i]=a->ptr[i+1];
    }
    a->used_size--;
};
void search(struct myArray *a,int n);
void max(struct myArray *a);
void min(struct myArray *a);
void sort(struct myArray *a);
int main(){
    struct myArray marks;
    createArray(&marks,100,2);
    setValue(&marks);
    show(&marks);
   return 0;
}