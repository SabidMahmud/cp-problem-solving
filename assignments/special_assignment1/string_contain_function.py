def find_in( string2 ) :
    if string2 in string1:
        return "YES"
    else :
        return "NO"

string1 = input()
string2 = input()
result = find_in( string2 )
print(result)
