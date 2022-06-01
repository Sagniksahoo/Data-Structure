import java.util.*;
public class find2ndLargest {
    public static  int get2ndLargest(int arr[],int total) {
        Arrays.sort(arr);
        return arr[total-2];
    }
    // public static int get2ndLargestnew(int[] arr,int total) {
    //     for(int i=0;i<total;i++){
    //         for(int j=i+1;j<total;j++){
    //             if(arr[i]>arr[j]){
    //                 int temp=arr[i];
    //                 arr[i]=arr[j];
    //                 arr[j]=temp;
    //             }
    //         }
    //     }
    //     return arr[total-2];
    // }
    public static void main(String[] args) {
        int [] arr={5,77,2,1,4,66,9,6,22,51,6,77,8,99,8};
        int total=arr.length;
        System.out.println("The 2nd Largest element in the array is:"+get2ndLargest(arr,total));   
    }
}
