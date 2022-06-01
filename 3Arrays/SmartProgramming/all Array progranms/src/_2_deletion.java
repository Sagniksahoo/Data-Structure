public class _2_deletion {
    public static void display(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        }
        public static void Deletion(int arr[],int index,int size){
            for(int i=index;i<size-1;i++){
                arr[i]=arr[i+1];
            }
        }
    
    public static void main(String[] args) {
        int []arr=new int[100];
        arr[0]=10;
        arr[1]=20;
        arr[2]=30;
        arr[3]=40;
        arr[4]=50;
        int capacity=arr.length;
        int index=2;
        int size=5;
        display(arr,size);
        Deletion(arr,index,size);
        size=size-1;
        display(arr,size);

    }
}
