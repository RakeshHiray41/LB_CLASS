function Maximum(Brr)
{
    let max = Brr[0]

    for(let i = 0; i<Brr.length;i++)
    {
        if(max < Brr[i])
        {
            max = Brr[i]
        }
    }
    return max
}

Arr = [11,21,51,555,101,111,121]

let ret =  Maximum(Arr)


console.log("Maximum is : ",ret)
