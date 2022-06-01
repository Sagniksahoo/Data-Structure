public class deletion{
    public static int Inddeletion(int arr[],int size,int index) {
        for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        return 0;
    }
    public static void display(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]);
            System.out.print(" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int []arr=new int[5];
        arr[0]=7;
        arr[1]=8;
        arr[2]=9;
        arr[3]=10;
        arr[4]=11;
        int size=arr.length;
        int index=1;
        display(arr,size);
        Inddeletion(arr,size,index);
        size=size-1;
        display(arr,size);
    }
}