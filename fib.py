fibArr = [0,0,1,1]
def fib(n):
    if n<len(fibArr):
        return fibArr[n]
    else:
        temp = fib(n-1) + fib(n-2)
        fibArr.append(temp)
        return temp

print(fib(6))