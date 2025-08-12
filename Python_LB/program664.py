def Replace(data):

  i = 0
  for i in range(len(data)):
    if(data[i] == 'a'):
     data[i] =  '_'                   # error becouse string is inmuteble
    
def main():
  
  print("Enter string :")
  str = input()
  Replace(str)
  print(f"Updated String is : {str}")
  
if (__name__ == "__main__"):
  main()