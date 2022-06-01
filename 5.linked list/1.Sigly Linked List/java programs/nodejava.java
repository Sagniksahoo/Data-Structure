public class nodejava{
    public  int data;
    public nodejava next;
    public nodejava(int data){
        this.data = data;
        this.next = null;
    }
    public static void main(String[] args) {
        nodejava node=new nodejava(3);
        int c=node.data;
        System.out.println(c);
        nodejava d=node.next;
        System.out.println(d);
    }
}