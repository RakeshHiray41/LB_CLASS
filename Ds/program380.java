class node
{
    public int data;
    public node next;
}

class StackX
{
    private node first;
    private int iCount;

    public StackX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void push(int no)//InsertFirst
    {
        node newn =  new node();

        newn.next = null;
        newn.data = no;

        newn.next = first;
        first = newn;

        iCount++;
    }
    public int pop()   //DeleteFIrst
    {
        node temp = first;
        
        if(this.first == null)
        {
            System.out.println("Unable to pop as stack is empty");
            return -1;
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
            System.out.println("| "+temp.data+" |");
            temp = temp.next;
        }
    }
    public int Count()
    {
        return iCount;
    }
}
class program380
{
    int iRet = 0;
    public static void main(String A[])
    {
        StackX sobj = new StackX();
        
        sobj.push(10);
        sobj.push(20);
        sobj.push(30);
        sobj.push(40);
        sobj.push(50);
        sobj.Display();

        System.out.println("Number of element in stack"+sobj.Count());

        sobj.pop();
        sobj.pop();
        sobj.pop();
        sobj.Display();

        System.out.println("Number of element in stack"+sobj.Count());

    }
}