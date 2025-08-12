# input  Row : 5  col : 4
'''
      *   *  *   *
      *   *  *   *
      *   *  *   *
      *   *  *   *
      *   *  *   *
'''

def Display(iRow , iCol):
  for i in range(1,iRow+1,1):
   for j in range(1,iCol+1,1): 
    print(" * ",end="\t")
   print()
  
def main():
  
  print("Enter the Row :")
  iVlaue1 = int(input())

  print("Enter the columns :")
  iVlaue2 = int(input())
 
  Display(iVlaue1,iVlaue2)

if (__name__ == "__main__"):
  main()