function CountSmall(Arr)
{
    let iCount = 0
    for(let i = 0; i <= Arr.length ; i++)
    {
        if((Arr[i] >= 'a') && (Arr[i] <='z'))
        {
            iCount++;
        }
    }
    return iCount
}

let ret = 0

ret = CountSmall("India")

console.log("Number of small character are : ",ret)