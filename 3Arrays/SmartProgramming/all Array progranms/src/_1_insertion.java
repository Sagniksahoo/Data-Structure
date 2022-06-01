public class _1_insertion {
    public static void display(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        }
        public static void Insertion(int arr[],int index,int capacity,int element){
            if(capacity>arr.length){
                System.out.println("Array is full");
            }
            for(int i=arr.length-1;i>index;i--){
                arr[i]=arr[i-1];
            }
            arr[index]=element;
        }
    public static void main(String[] args) {
        int []arr={10,20,30,40,50};
        int index=2;
        int element=60;
        int capacity=arr.length;
        display(arr);
        Insertion(arr,index,capacity,element);
        display(arr);
        
    }
}