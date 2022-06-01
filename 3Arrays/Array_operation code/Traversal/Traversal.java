package Traversal;
import java.util.*;
public class Traversal{
    public void display(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the lengtyh of the ArrayList: ");
        int n=sc.nextInt();
        int [] arr=new int[n];
        for (int i=0;i<n;i++){
            System.out.println("Enter the element:");
            arr[i]=sc.nextInt();
        }
        // System.out.println("The elements are:");
        // for (int a: arr){
        //     System.out.print(a);
        //     System.out.print("");
        // }

        Traversal t=new Traversal();
        t.display(arr,n);
    }
}