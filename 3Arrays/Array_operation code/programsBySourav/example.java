

public class example {
    public int insertion(int arr[],int size,int element,int index,int capacity) {
        if(size>=capacity){
            return -1;
        }
        for(int i=size-1;i>=index;i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
    public void display(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int [] arr=new int[100];
        arr[0] =7;
        arr[1] =8;
        arr[2] =12;
        arr[3] =27;
        arr[4] =88;
        int size=5;
        int index=3;
        int element=45;
        int capacity=100;
        example ee=new example();
        ee.display(arr, size);
        int flag=ee.insertion(arr, size, element, index, capacity);
       
        if(flag ==1){
            ee.display(arr, size);
            System.out.println("Element inserted at index "+index);
        }
        else{
            System.out.println("it not inserted");
        }
    }
}
