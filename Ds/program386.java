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
class program386
{
    
    public static void main(String A[])
    {
        int iRet = 0;
        StackX<Integer> sobj1 = new StackX<>();
        
        sobj1.push(10);
        sobj1.push(20);
        sobj1.push(30);
        sobj1.push(40);
        sobj1.push(50);
        sobj1.Display();

        System.out.println("Number of element in stack : "+sobj1.Count());

        iRet = sobj1.pop();
        System.out.println("Removed element : "+iRet);

        iRet = sobj1.pop();
        System.out.println("Removed element : "+iRet);

        iRet = sobj1.pop();
        System.out.println("Removed element : "+iRet);    
        sobj1.Display();

        System.out.println("Number of element in stack : "+sobj1.Count());

        ////////////////////////////////////////////////////////////////////

        
        StackX<String> sobj2 = new StackX<>();

        String str = null;

        sobj2.push("C");
        sobj2.push("C++");
        sobj2.push("java");
        sobj2.push("Python");
        sobj2.push("javascript");
        sobj2.Display();

        System.out.println("Number of element in stack : "+sobj2.Count());

        str = sobj2.pop();
        System.out.println("Removed element : "+str);

        str = sobj2.pop();
        System.out.println("Removed element : "+str);

        str = sobj2.pop();
        System.out.println("Removed element : "+str);    
        sobj2.Display();

        System.out.println("Number of element in stack : "+sobj2.Count());

    
    }
}