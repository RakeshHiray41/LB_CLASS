class node
{
    public int data;
    public node next;
    public node prev;
}
class DoublyLL
{
    private int iCount;
    private node first;
    

    public DoublyLL()
    {
        first = null;
        iCount = 0;
    }
    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node();

        newn.next = null;
        newn.prev = null;
        newn.data  = no;

        if(first == null )
        {
            first = newn;
        }
        else 
        {
            newn.next = first;
            first = newn;
            newn.next.prev = newn;
            
            
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node();

        newn.next = null;
        newn.prev = null;
        newn.data  = no;

        if(first == null )
        {
            first = newn;
        }
        else 
        {
            temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
            newn.prev = temp;
            
        }
        iCount++;
    }
    public void InsertAtPos(int no ,int pos)
    {
        node newn = null;
        node temp = null;

        if(pos < 1 && pos > iCount+1)
        {
            System.out.println("Invlaid position");
            return ;
        }

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            temp = first;

            newn = new node();
            newn.data = no ;
            newn.prev = null;
            newn.next = null;

            for(int i = 1 ;i < pos-1; i++)
            {
                temp = temp.next;
            }
            
            newn.next = temp.next;
            temp.next.prev = newn;
        
            temp.next = newn;
            newn.prev = temp;

            iCount++;

        }
    }

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void DeleteAtPos(int pos)
    {}

    public void Display()
    {
        node temp = null;
        
        temp = first;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |"+"<=>");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {  
        return iCount;
    }
}
class program378
{
    public static void main(String a[])
    {
        int iRet = 0;
        DoublyLL sobj = new DoublyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        
        sobj.InsertAtPos(105,5);
        
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements : "+iRet);

        //sobj.DeleteAtPos(5);

        // sobj.Display();
        // iRet = sobj.Count();
        // System.out.println("Number of elements : "+iRet);
    
    }
}