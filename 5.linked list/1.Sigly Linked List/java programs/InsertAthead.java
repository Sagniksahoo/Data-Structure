public class InsertAthead {
    public int data;
    public InsertAthead next;
    public InsertAthead(int data){
        this.data=data;
        this.next=null;
    }
    public static void Insert(InsertAthead Head,int data){
        InsertAthead newnode=new InsertAthead(data);
        newnode.next=Head;
        Head=newnode;
    }
    public static void Print(InsertAthead head){
        while(head!=null){
            System.out.println(head.data);
            head=head.next;
        }
    }
    public static void main(String[] args) {
        InsertAthead node=new InsertAthead(4);
        // int c=node.data;
        // System.out.println(c);
        // InsertAthead d=node.next;
        // System.out.println(d);
        InsertAthead head=node;
        Print(head);
        Insert(head,5);
        Print(head);
        Insert(head,6);
        Print(head);

    }
    
}

