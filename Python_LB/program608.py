def Addition(no1,no2):
  Sum = 0
  Sum = no1 + no2
  return Sum

def main():
  print("enter first number :")
  Value1 = int(input())

  print("enter second number :")
  Value2 = int(input())
  Ans = 0
  Ans = Addition(Value1,Value2)

  print(f"Addition of {Value1} & {Value2} is : {Ans}")


if __name__ == "__main__":
  main()