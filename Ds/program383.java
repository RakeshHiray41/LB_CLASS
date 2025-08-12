class node
{
    public char data;
    public node next;
}

class QueueX
{
    private node first;
    private int iCount;

    public QueueX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void enqueue(char no)//InsertLast
    {
        node newn =  new node();
        node temp = null;
        
        newn.next = null;
        newn.data = no;

        if(this.first == null)
        {
            this.first = newn;
        }
        else
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
    public char dequeue()   //DeleteFIrst
    {
        node temp = first;
        
        if(this.first == null)
        {
            System.out.println("Unable to pop as queue is empty");
            return (char)-1;
        }
        else
        {
            first = first.next;
            iCount--;
            return temp.data;
        }
    }
    public void Display()
    {
        node temp = null;

        temp = this.first;

        while(temp.next != null)
        {
            System.out.print("| "+temp.data+" |-");
            temp = temp.next;
        }
        System.out.println();
    }
    public int Count()
    {
        return iCount;
    }
}
class program383
{
    
    public static void main(String A[])
    {
        char iRet = '\0';

        QueueX sobj = new QueueX();
        
        sobj.enqueue('A');
        sobj.enqueue('B');
        sobj.enqueue('C');
        sobj.enqueue('D');
        sobj.enqueue('E');

        sobj.Display();

        System.out.println("Number of element in queue : "+sobj.Count());

        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);
       
        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);

        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);

        sobj.Display();
        
        System.out.println("Number of element in queue : "+sobj.Count());

    }
}