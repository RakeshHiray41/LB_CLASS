def CountEven(iNo):
  iDigit = 0
  iCount = 0

  while(iNo > 0):
    iDigit = iNo % 10
    if(iDigit % 2 == 0):
      iCount = iCount + 1
    iNo = iNo // 10

  return iCount

def main():
 print("Enter Number")
 iValue = int(input())

 iRet = 0
 iRet = CountEven(iValue)

 print(f"Number of even digit in {iValue} are {iRet}")

if (__name__ == "__main__"):
  main()