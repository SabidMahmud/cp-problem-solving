n = int(input("Enter the value of n : "))

def fib( n ) :
    if n == 0 or n == 1 :
        return 1
    else :
        return (fib(n-1) + fib(n-2))

series = fib(n)

print("The value of f(n) :", series)
