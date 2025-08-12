class node<T>
{
    public T data;
    public node<T> next;
}

class QueueX<T>
{
    private node first;
    private int iCount;

    public QueueX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void enqueue(T no)//InsertLast
    {
        node<T> newn =  new node();
        node<T> temp = null;
        
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
    public T dequeue()   //DeleteFIrst
    {
        node<T> temp = first;
        
        if(this.first == null)
        {
            System.out.println("Unable to pop as queue is empty");
            return null;
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
        node<T> temp = null;

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
class program386
{
    
    public static void main(String A[])
    {
        int iRet = 0;

        QueueX sobj = new QueueX();
        
        sobj.enqueue(10);
        sobj.enqueue(20);
        sobj.enqueue(30);
        sobj.enqueue(40);
        sobj.enqueue(50);

        sobj.Display();

        System.out.println("Number of element in queue : "+sobj.Count());

        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);
       
        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);

        iRet = sobj.dequeue();
        System.out.println("remove of element in queue : "+iRet);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of element in queue : "+iRet);

    }
    ////////////////////////////////////////////////////////////////

        double dRet = 0.0;

        QueueX sobj2 = new QueueX();
        
        sobj2.enqueue(10);
        sobj2.enqueue(20);
        sobj2.enqueue(30);
        sobj2.enqueue(40);
        sobj2.enqueue(50);

        sobj2.Display();

        System.out.println("Number of element in queue : "+sobj2.Count());

        dRet = sobj2.dequeue();
        System.out.println("remove of element in queue : "+dRet );
       
        dRet = sobj2.dequeue();
        System.out.println("remove of element in queue : "+dRet);

        dRet = sobj2.dequeue();
        System.out.println("remove of element in queue : "+dRet);

        sobj.Display();
        iRet = sobj2.Count();
        System.out.println("Number of element in queue : "+dRet);

    
}