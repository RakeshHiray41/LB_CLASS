def Addition(Brr):
  iSum = 0
  for no in Brr:
    iSum += no
  return iSum
def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  iRet = Addition(Arr)
  print(f"Addition of all element :{iRet}")
if (__name__ == "__main__"):
  main()