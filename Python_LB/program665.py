def StrUpr(data):

  output = ""
  for ch in data:
    if(ch >= 'a' and ch<='z'):
     output = output + (ch - 32)  #Error == no typecasting 
    else :
      output += ch
  return output
    
def main():
  
  print("Enter string :")
  str = input()
  strx = StrUpr(str)
  print(f"Updated String is : {strx}")
  
if (__name__ == "__main__"):
  main()