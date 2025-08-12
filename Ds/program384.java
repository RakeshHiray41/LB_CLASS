class node<T>
{
    public T data;
    public node<T> next;
}

class StackX<T>
{
    private node<T> first;
    private int iCount;

    public StackX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void push(T no)//InsertFirst
    {
        node<T> newn =  new node<T>();

        newn.next = null;
        newn.data = no;

        newn.next = first;
        first = newn;

        iCount++;
    }
    public T pop()   //DeleteFIrst
    {
        node<T> temp = first;
        
        if(this.first == null)
        {
            System.out.println("Unable to pop as stack is empty");
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
            System.out.println("| "+temp.data+" |");
            temp = temp.next;
        }
    }
    public int Count()
    {
        return iCount;
    }
}
class program384
{
    
    public static void main(String A[])
    {
    //     double iRet = 0.0;
    //     StackX sobj = new StackX();
        
    //     sobj.push(10);
    //     sobj.push(20);
    //     sobj.push(30);
    //     sobj.push(40);
    //     sobj.push(50);
    //     sobj.Display();

    //     System.out.println("Number of element in stack"+sobj.Count());

    //     iRet = sobj.pop();
    //     System.out.println("Removed element : "+iRet);

    //     iRet = sobj.pop();
    //     System.out.println("Removed element : "+iRet);

    //     iRet = sobj.pop();
    //     System.out.println("Removed element : "+iRet);    
    //     sobj.Display();

    //     System.out.println("Number of element in stack"+sobj.Count());

    // 
    }
}