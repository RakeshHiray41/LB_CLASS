function SumFactor(No)
{
    let sum = 0

    for(let i = 0; i<=  (No/2);i++)
    {
        if((No % i) == 0)
        {
            sum += i
        }
    }
    return sum
}

let Value = 12

let ret =  SumFactor(Value)


console.log("Summmation of factor  is : ",ret)
