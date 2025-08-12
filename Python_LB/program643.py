def CountEvenOdd(Brr):

  iEven = 0
  iOdd = 0

  for no in Brr:
    if(no % 2 == 0):
      iEven +=1
    else:
      iOdd +=1
  return iEven ,iOdd
def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  iRet1,iRet2 = CountEvenOdd(Arr)
  print(f"number of Even  element  : {iRet1} & odd element : {iRet2} ")
if (__name__ == "__main__"):
  main()