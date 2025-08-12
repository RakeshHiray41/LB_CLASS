def CheckPerfect(iNo):
  iSum = 0
  for i in range(1 , (iNo // 2)+1):
    if( iNo % i == 0):
      iSum = iSum + i
    if(iNo == iSum):
     return True
    else:
      return False

def main():
  print("Enter Number")
  iValue = int(input())
  bRet = CheckPerfect(iValue)
  if(bRet == True):
    print(f"{iValue} is prefect number")
  else:
    print(f"{iValue} is not prefect number")

if (__name__ == "__main__"):
  main()