def CountSmall(data):
  iCount = 0
  
  for ch  in data:
    if(ch >= 'a' and ch <= 'z'):
      iCount +=1
  return  iCount

def main():
  
  print("Enter string :")
  str = input()
  iret = CountSmall(str)
  print(f"Frequncy of  small charcters in {str} is {iret}")
  
if (__name__ == "__main__"):
  main()