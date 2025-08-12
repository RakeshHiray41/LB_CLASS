# input HELLO
'''
    H E L L O
    H E L L O
    H E L L O
    H E L L O
    H E L L O
'''

def Display(data):
  for i in range(len(data)):
   for ch in data: 
    print(ch,end="\t")
   print()
  
def main():
  
  print("Enter the String :")
  Str = input()
  Display(Str)

if (__name__ == "__main__"):
  main()