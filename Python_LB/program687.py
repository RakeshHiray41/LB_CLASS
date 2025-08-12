# input  Row : 5

'''
          *               1
        *   *             2
      *   *   *           3
    *   *   *   *         4
  *   *   *   *   *       0
    *   *   *   *         1
      *   *   *           2
        *   *             3
          *               4
'''

def Display(iRow ):
  for i in range(1,iRow+1,1):
    print(" "* (iRow-i),end ="")
    print("* "*i)
  for i in range(iRow-1,0,-1):
    print(" "* (iRow-i),end ="")
    print("* "*i)
   
  
def main():
  
  print("Enter the Row :")
  iVlaue1 = int(input())

  Display(iVlaue1)

if (__name__ == "__main__"):
  main()