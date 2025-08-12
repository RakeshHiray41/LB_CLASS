def CountNonVowels(data):
  iCount = 0
  Pattern = "aeiouAEIOU"
  for ch in data:
    if(ch in Pattern):
      iCount +=1
  return len(data) - iCount

def main():
  
  print("Enter string :")
  str = input()
  iret = CountNonVowels(str)
  print(f"Frequncy of  vowels in {str} is {iret}")
  
if (__name__ == "__main__"):
  main()