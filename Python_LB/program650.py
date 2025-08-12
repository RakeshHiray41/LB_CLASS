def ArrayReverse(Brr):
  i = 0
  iStart = 0
  iEnd = len(Brr)-1

  while(iStart < iEnd):
      Brr[iStart],Brr[iEnd] = Brr[iEnd],Brr[iStart]
      iStart += 1
      iEnd -= 1

def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  ArrayReverse(Arr)
  print(Arr)
  
if (__name__ == "__main__"):
  main()