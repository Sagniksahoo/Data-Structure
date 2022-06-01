import java.util.*;
public class hello2 {
    public static void findMax(int arr[],int max){
        for(int i=0;i<arr.length;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        System.out.println("The largest number inh the array is:"+max);
    }
    public static int FINDMAX(int arr[],int size){
        Arrays.sort(arr);
        return arr[size-1];
    }
    public static void main(String[] args) {
        int []arr={2,333,44,5,66,7777,66,445,555,4,554};
        int max=arr[0];
        int size=arr.length;
        // hello2 hh=new hello2();
        // findMax(arr,max);

        System.out.println("THe largest number in the array is:"+FINDMAX(arr,size));
}
}
