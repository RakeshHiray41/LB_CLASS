def CountVowels(data):
  iCount = 0
  Pattern = "aeiouAEIOU"
  for ch in data:
    if(ch in Pattern):
      iCount +=1
  return iCount

def main():
  
  print("Enter string :")
  str = input()
  iret = CountVowels(str)
  print(f"Frequncy of  vowels in {str} is {iret}")
  
if (__name__ == "__main__"):
  main()