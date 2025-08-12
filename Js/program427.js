

function Calculator(fun1,fun2)
{
    console.log(fun1(10,11))
    console.log(fun2(11,10))
}

function Addition(No1 ,No2)
{
    return No1 + No2
}

function Subtraction(No1 ,No2)
{
    return No1 - No2
}

Calculator(Addition,Subtraction)