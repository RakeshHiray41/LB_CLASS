def Replace(data):
  iCount = 0
  output = ""
  for ch  in data:
    if(ch == 'a'):
      output = output + '-'
    else:
      output = output + ch
  return output

def main():
  
  print("Enter string :")
  str = input()
  strx = Replace(str)
  print(f"Updated String is : {strx}")
  
if (__name__ == "__main__"):
  main()