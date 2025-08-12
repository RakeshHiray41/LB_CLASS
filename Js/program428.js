function Addition(No1 ,No2)
{
    return No1 + No2
}

function Demo(No1 ,No2)
{
    return Addition
}

let ret = Demo()

let Ans = 0

Ans = ret(11,10)

console.log(Ans)