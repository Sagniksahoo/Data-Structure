import java.util.*;
class myArray {
    public int total_size;
    public int used_size;
    public int[] array;
    public myArray(int total_size, int used_size, int[] array) {
        this.total_size = total_size;
        this.used_size = used_size;
        this.array = array;
        System.out.println("helllooooooo");

    }
    public void createArray(int [] arr, int total_size) {
        arr=new int[total_size];
    }
    public void setValues(int [] arr, int used_size) {
       System.out.println("Enter the values");
        for(int i=0;i<used_size;i++) {
            arr[i]=array[i];
        }
    }
    public void printArray(int [] arr, int used_size) {
        System.out.println("The array is");
        for(int i=0;i<used_size;i++) {
            System.out.println(arr[i]);
        }
    }
}

public class ArrayJava {
    public static void main(String[] args) {
        ArrayList<myArray> list = new ArrayList<myArray>(10);
        list.add(new myArray(10,5,new int[]{1,2,3,4,5}));
        
    


    }
}