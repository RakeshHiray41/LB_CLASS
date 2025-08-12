def RevesreArray(Brr):
  i = 0
  Crr= []
  for i in range(len(Brr)-1, -1,-1):
    Crr.append(Brr[i])
  return Crr

def main():
  print("Enter the Number of Element : ")
  iLength = int(input())
  Arr = []
  print("Enter the Element :")
  for i in range(1,iLength+1):
    no = int(input())
    Arr.append(no)
  data = RevesreArray(Arr)
  print(data)
  
if (__name__ == "__main__"):
  main()