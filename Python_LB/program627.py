def Reverse(iNo):
  iRev = 0
  while(iNo != 0):
    iRev = (iRev * 10) + (iNo % 10)
    iNo = iNo // 10
  return iRev

  return iCount

def main():
 print("Enter Number")
 iValue = int(input())

 iRet = 0
 iRet = Reverse(iValue)


 print(f" Reverse Number of  {iValue} are {iRet}")

if (__name__ == "__main__"):
  main()