def check_polindrome(string) :
    reverse_string = string[ : : -1 ]
    if string == reverse_string :
        flag = 1
    else :
        flag = 0
    return flag

string = input()

is_it_polindrome = check_polindrome(string)

if is_it_polindrome == 1 :
    print("YES")
else :
    print("NO")

