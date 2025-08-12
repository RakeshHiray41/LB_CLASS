def CountDigitX(iNo):
  iDigit = 0
  iCount = 0
  while(iNo != 0):
    iDigit = iNo % 10
    if(iDigit == 5):
      iCount += 1
    iNo = iNo // 10
  return iCount

  return iCount

def main():
 print("Enter Number")
 iValue = int(input())

 iRet = 0
 iRet = CountDigitX(iValue)


 print(f" Frequency  of 5 is {iRet}")

if (__name__ == "__main__"):
  main()