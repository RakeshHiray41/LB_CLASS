def Addition(No):
  isum = 0
  for i in range( 1, No+1):
   isum = isum + i
  return isum


def main():
  print("Enter Number : ")
  Value= int(input())
  iret = Addition(Value)
  print(f"Addition is : {iret}")
if __name__ == "__main__":
  main()