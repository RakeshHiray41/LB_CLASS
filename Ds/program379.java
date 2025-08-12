class node
{
    public int data;
    public node next;
    public node prev;
}
class DoublyCLL
{
    private int iCount;
    private node first;
    private node last;

    public DoublyCLL()
    {
        first = null;
        last = null;
        iCount = 0;
    }
    public void InsertFirst(int no)
    {}
    public void InsertLast(int no)
    {}
    public void InsertAtPos(int no ,int pos)
    {}

    public void DeleteFirst()
    {}
    public void DeleteLast()
    {}
    public void DeleteAtPos(int pos)
    {}

    public void Display()
    {}
    public int Count()
    {return 0;}
}
class program379
{
    public static void main(String a[])
    {
        DoublyCLL sobj = new DoublyCLL();
    }
}