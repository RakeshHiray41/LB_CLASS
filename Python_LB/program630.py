def DisplayFactors(iNo):
  print(f"Factors of {iNo} are :")
  for i in range(1 , (iNo // 2)+1):
    if( iNo % i == 0):
      print(i,end="\t")

def main():
  print("Enter Number")
  iValue = int(input())
  DisplayFactors(iValue)

if (__name__ == "__main__"):
  main()