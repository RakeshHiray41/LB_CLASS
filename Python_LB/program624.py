#721
# 1 2 7
def DisplayDigit(No):
  iDgit = 0
  while(No != 0):
    iDgit =   No % 10
    No = No // 10
    isum = isum +iDgit
  return isum


def main():
  print("Enter Number : ")
  Value= int(input())
  DisplayDigit(Value)
  
if __name__ == "__main__":
  main()