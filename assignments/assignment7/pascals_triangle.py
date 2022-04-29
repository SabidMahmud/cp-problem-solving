num = int(input("Enter the number of rows: "))
numbers = []
for n in range(num):
    numbers.append([])
    numbers[n].append(1)
    for m in range(1, n):
        numbers[n].append(numbers[n - 1][m - 1] + numbers[n - 1][m])
    if(num != 0):
        numbers[n].append(1)
for n in range(num):
    print(" " * (num - n), end = " ", sep = " ")
    for m in range(0, n + 1):
        print('{0:5}'.format(numbers[n][m]), end = " ", sep = " ")
    print()
