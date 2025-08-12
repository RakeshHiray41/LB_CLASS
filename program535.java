import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.Arr = new int[a][b];
    }

}

class program535
{
    public static void main(String a[])
    {
        //Scanner sobj = new Scanner(System.in);

        Matrix mobj = new Matrix(4,3);

        System.out.println(mobj.Arr.length);
        System.out.println(mobj.Arr[0].length);

    }
}