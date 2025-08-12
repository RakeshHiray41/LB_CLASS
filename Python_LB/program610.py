def CheckDivisible(no):
  if((no % 3 ==0) and (no % 5 ==0)):
    return True
  
  else:
    return False

def main():
  print("Enter number : ")
  Value = int(input())

  bRet = CheckDivisible(Value)

  if(bRet == True):
    print(f"{Value} is Divisible 3 & 5")

  else:
    print(f"{Value}  not is Divisible 3 & (or) 5")

if __name__ == "__main__":
  main()