public class insertion{
    public static void display(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.println(arr[i]+" ");
        }
        System.out.println();
    }
    public static int Insertion(int arr[],int capacity,int index,int size,int element){
        if(size>=capacity){
            return -1;
        }
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
         arr[index]=element;
         return 1;
    }
    public static void main(String[] args) {
        int []arr=new int[100];
        arr[0]=56;
        arr[1]=67;
        arr[2]=58;
        arr[3]=89;
        arr[4]=56;
        int capacity=arr.length;
        int size=5;
        int index=2;
        int element=45;
        display(arr,size);
        int flag=Insertion(arr,capacity,index,size,element);
        size+=1;
        if(flag==1){
            display(arr,size);
            System.out.println("the"+element+"is inserted at "+index);
        }
        else{
            System.out.println("The array is full");
        }
    }
}