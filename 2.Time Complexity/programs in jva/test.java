public class test{
    public void func(int n){
        int sum=0;
        int product=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.println(i+" "+j);
            }
        }
    }
    public static void main(String[] args) {
        test t=new test();
        t.func(3);
    }
}