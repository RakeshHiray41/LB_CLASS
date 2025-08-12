class node
{
    public int data;
    public node next;

}
class SinglyCLL
{
    private int iCount;
    private node first;
    private node last;

    public SinglyCLL()
    {
        first = null;
        last = null;
        iCount = 0;
    }
    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node();

        newn.next = null;
        newn.data  = no;

        if(first == null && last == null)
        {
            first = newn;
            last = first;
        }
        else 
        {
            newn.next = first;
            first = newn;
            
            last.next = first;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        node temp = null;
        node newn = null;
        newn = new node();

        newn.next = null;
        newn.data  = no;


        if(first == null && last == null)
        {
            first = newn;
            last = first;
        }
        else 
        {
            temp = first;

            while(temp.next != last.next)
            {
                temp = temp.next;
            }
            temp.next = newn;
            last = newn;
            last.next = first;
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
            newn.next = null;

            for(int i = 1 ;i < pos-1; i++)
            {
                temp = temp.next;
            }
            
            newn.next = temp.next;

            temp.next = newn;

            iCount++;

        }
    }


    public void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }
        else if(last == first)
        {
            last = null;
            first = null;
        }
        else
        {
            first = first.next;
            last.next = first;
        }
        iCount--;
    }
    public void DeleteLast()
    {
        node temp = null;

        if(first == null && last == null)
        {
            return;
        }
        else if(last == first)
        {
            last = null;
            first = null;
        }
        else
        {
            temp = first;

            while(temp.next.next != last.next)
            {
                temp = temp.next;
            }
            last = temp ;
            last.next = first;
        }
        iCount--;
    }
    public void DeleteAtPos(int pos)
    {
        node temp = null;

        if(pos < 1 && pos <iCount)
        {
            System.out.println("Invalid position");
            return;
        }
        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;
            for(int i = 1 ; i < pos-1 ; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iCount--;
        }
    }

    public void Display()
    {
        node temp = null;
        temp = first;
        
        do
        {
            System.out.print("| "+temp.data+" |->");
            temp = temp.next;
        }while(temp != last.next );

        System.out.println();
    }
    public int Count()
    { return iCount;}
}
class program377
{
    public static void main(String a[])
    {
        int iRet = 0;

        SinglyCLL sobj = new SinglyCLL();

        sobj.InsertFirst(12);
         sobj.InsertFirst(22);
         sobj.InsertFirst(132);

        sobj.InsertLast(150);
        sobj.InsertLast(200);

        sobj.InsertAtPos(1001,5);
        sobj.InsertAtPos(1002,5);
        
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements : "+iRet);

        sobj.DeleteAtPos(5);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of elements : "+iRet);
    }
}