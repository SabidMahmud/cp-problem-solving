n = int( input( "Enter the size of the Array: " ) )
array = []

for i in range(n) :
    element = int( input() )
    array.append(element)

position = int( input( "Enter the index to delete: " ) )
array.pop(position)
print( array )
