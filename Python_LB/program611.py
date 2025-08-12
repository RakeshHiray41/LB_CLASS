def Maximum(no1 , no2, no3):

  if(no1 > no2 and no1 > no3):
    return no1
  
  elif(no2 > no1 and no2 > no3):
    return no2
  
  else:
    return no3
  
def main():
  print("Enter First number : ")
  Value1 = int(input())

  print("Enter Second number : ")
  Value2 = int(input())

  print("Enter Third number : ")
  Value3 = int(input())

  iRet = Maximum(Value1,Value2,Value3)

  print(f"{iRet} is  maximum number")

if __name__ == "__main__":
  main()