def Factorial(iNo):
    iFact = 1

    for i in range(1,iNo+1):
        iFact *= i
    return iFact

def main():
    iValue = int(input("Enter number : "))
    iRet = Factorial(iValue)
    print("factorial is ",iRet)

if __name__ =="__main__":
    main()        