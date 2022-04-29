def factorial ( num ):
    if num == 1 or num == 0 :
        return 1
    else :
        return num * factorial(num-1)

n = int(input())
r = int(input())
ncr = factorial(n) / ( factorial(n-r) * factorial(r) )

print( int(ncr) )
