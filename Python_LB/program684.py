# input  Row : 5
'''
  *
  *   *
  *   *   *
  *   *   *   *
  *   *   *   *   *
'''

def Display(iRow ):
  for i in range(1,iRow+1,1):
    print(" *\t "*i)
  
def main():
  
  print("Enter the Row :")
  iVlaue1 = int(input())

  Display(iVlaue1)

if (__name__ == "__main__"):
  main()