class program51
{
    public static void main(String A[])
    {
        System.out.println("Jay Ganesh!!");
       
      Pattern pobj = new Pattern();
      pobj.PatternPrint(5);
    }
}

class Pattern
{
    public void PatternPrint(int iNo)
    {
        int iCnt = 0;int jCnt=0;
        for(iCnt = iNo; iCnt <= 1;iCnt--)
        {
            for(jCnt = 1;jCnt <= iCnt;jCnt++)
            {
                System.out.print("*");
                System.out.println();
            }
        }
    }
}