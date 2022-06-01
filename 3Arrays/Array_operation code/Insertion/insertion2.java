import java.util.*;
public class insertion2 {
    public int intsertion(int arr[],int size,int capacity,int element,int index){
        if(size>=100){
            System.out.println("The Array is Full");
            return -1;
        }
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
    public  void Diaplay(int arr[],int size){
        for(int i=0;i<size;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of the array:");
        int l=sc.nextInt();
        int [] arr=new int[l];
        arr[0]=56;
        arr[1]=67;
        arr[2]=58;
        arr[3]=89;
        arr[4]=56;
        int used_size=5;
        int element=45;
        int index=2;


        insertion2 i=new insertion2();
        //i.Display(arr,used_size);
        i.Diaplay(arr, used_size);
        int flag=i.intsertion(arr, used_size, l, element, index);
        used_size++;
        if(flag==1){
            i.Diaplay(arr, used_size);
            System.out.println("the"+element+"is inserted at "+index);
        }
        else{
            System.out.println("The array is full");
        }
        
    }
}
