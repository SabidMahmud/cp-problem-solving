word = input()

vowels = ['a', 'e', 'i', 'o', 'u']
count_vowel = 0
count_const = 0

for letter in word.lower() :
    if letter in vowels :
        count_vowel += 1
    else :
        count_const += 1

print("Vowel =", count_vowel)
print("Consonent =", count_const)

