class node
{
    public int data;
    public node next;
}
class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        first = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null) // LL empty
        {
            first = newn;
        }
        else        // LL coontain Atleast 1 node
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null) // LL empty`  
        {
            first = newn;
        }
        else        // LL coontain Atleast 1 node
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
            
        }
        iCount++;

    }
    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }
        iCount--;
    }
    
    public void DeleteLast()
    {
        node temp = null;

        if(first == null)
        {
            System.out.println("Invalid position");
            return;
        }
        else if(first.next == null)
        {
            first = null;
        }
        else
        {
            temp = first;
            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        iCount--;
    }

   

    
    public void Display()
    {
        node temp = null;
        
        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |"+"->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public int Count()
    {
        return iCount;
    }
}
class program375
{
    public static void main(String A[])
    {
        int iRet = 0;

        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        

        sobj.DeleteFirst();

        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);

        sobj.DeleteLast();
        sobj.Display();
        
        iRet = sobj.Count();
        System.out.println("Number of elements in the LinkedList are : "+iRet);


    }
}