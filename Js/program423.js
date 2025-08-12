function CountDigit(No)
{
    let iCount = 0

    while(No != 0)
    {
        No = Math.floor(No / 10)
        console.log(No)
        iCount++
    }
    return iCount
}

let Value = 123

let ret = 0

ret = CountDigit(Value)

console.log("NUmber of Digits : ",ret)


