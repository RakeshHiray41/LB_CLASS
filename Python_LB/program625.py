#721
# 1 2 7 -> 10
def SumDigit(No):
  iDgit = 0
  isum = 0
  while(No != 0):
    iDgit =   No % 10
    No = No // 10
    isum = isum +iDgit
  return isum


def main():
  print("Enter Number : ")
  Value= int(input())
  iret =  SumDigit(Value)
  print(f"Summition  of Digit : {iret}")
  
if __name__ == "__main__":
  main()