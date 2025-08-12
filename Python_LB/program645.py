def RevesreArray(Brr):
  i = 0
  for i in range(len(Brr)-1, -1,-1):
    print(Brr[i])

def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  RevesreArray(Arr)
if (__name__ == "__main__"):
  main()