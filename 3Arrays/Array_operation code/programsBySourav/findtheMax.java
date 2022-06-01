public class findtheMax{
    public void findMax(int arr[],int max){
        for(int i=0;i<arr.length;i++){
            if(max<arr[i]){
                max=arr[i];
            }
             
        }
        System.out.println("Largest number present in the array is:"+max);
    }
    public static void main(String[] args) {
        int []arr={6,9,1,4,10,2,8,15};
        int max=arr[0];
        findtheMax fm=new findtheMax();
        fm.findMax(arr, max);
    }
}