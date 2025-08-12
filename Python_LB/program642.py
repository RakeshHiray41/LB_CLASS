def minimum(Brr):

  imin = Brr[0]

  for no in Brr:
    if(no < imin):
      imin = no
  return imin
def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  iRet = minimum(Arr)
  print(f"minimum element is : {iRet}")
if (__name__ == "__main__"):
  main()