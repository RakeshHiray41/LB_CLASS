# input HELLO
'''
    H E L L O
'''

def Display(data):
  for ch in data:
    print(ch,end="\t")
  
def main():
  
  print("Enter the String :")
  Str = input()
  Display(Str)

if (__name__ == "__main__"):
  main()