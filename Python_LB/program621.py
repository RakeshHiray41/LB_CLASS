def Display(No):

 for i in range( 1, No+1):
   print(" * ",end="\t")



def main():
  print("Enter Number : ")
  Value= int(input())
  Display(Value)
  
if __name__ == "__main__":
  main()