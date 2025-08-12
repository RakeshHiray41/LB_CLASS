function ChkPerfect(No)
{
    let sum = 0

    for(let i = 0; i<=  (No/2);i++)
    {
        if((No % i) == 0)
        {
            sum += i
        }
    }
    if(sum == No)
    {
        return true
    }
    else
    {
        return false
    }
}

let Value = 28

let ret = false

ret = ChkPerfect(Value)

if(ret == true)
{
    console.log("Pefect no")

}
else
{
    console.log("Not Perfect")
}

