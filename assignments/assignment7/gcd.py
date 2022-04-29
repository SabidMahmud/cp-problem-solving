def f( n1, n2 ) :
    if n2 != 0 :
        return f( n2, n1%n2 )
    else :
        return n1

n1 = int( input() )
n2 = int( input() )

gcd = f( n1, n2 )

print( "GCD(" + str(n1) + ", " + str(n2) + ") =", gcd )

