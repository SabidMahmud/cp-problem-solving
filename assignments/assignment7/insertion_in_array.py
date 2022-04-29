n = int(input("Enter the size of an arry : "))
array = []

count = 0
while count < n :
    element = int(input())
    array.append(element)
    count += 1

# print("The array is :", array)

position = int(input("Enter the position to insert a new element : "))
element = int(input("Enter the element to insert : "))

array.insert(position, element)

print(array) 
