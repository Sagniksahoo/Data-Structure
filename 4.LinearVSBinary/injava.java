import java.util.*;
public class injava {
    public static int binarySearch(int arr[],int n,int size){
        int low,high,mid;
        low=0;
        high=size-1;
        while(low<=high){
            mid=(high+low)/2;
            if(arr[mid]==n){
                return mid;
            }
            else if(arr[mid]<n){
                low=mid+1;
            }
            else if(arr[mid]>n){
                high=mid-1;
            }
        }
        return -1;
    }
    public static int linearSearch(int arr[],int element,int size){
        for(int i=0;i<size-1;i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of the array: ");
        int n=sc.nextInt();
        int []arr=new int[n];
        System.out.println("Enter the elements of the array: ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        // for(int ar:arr){
        //     System.out.println("number:"+ar);
        // }
        System.out.println("Enter the element you want to Search:");

        int a=sc.nextInt();
        //int b=binarySearch(arr,a,n);
        int b=linearSearch(arr,a,n);
        System.out.println("the elemnt "+a+"is found at index"+b);        
    }
    
}
