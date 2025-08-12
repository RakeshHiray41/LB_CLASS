def CountVowels(Brr):
  iCount = 0
  for ch in data:
    if(ch == 'a' or ch == 'e'or ch == 'i' or ch == 'o' or ch == 'u'):
      iCount +=1
  return iCount

def main():
  
  print("Enter string :")
  str = input()
  iret = CountVowels(str)
  print(f"Frequncy of a in {str} is {iret}")
  
if (__name__ == "__main__"):
  main()