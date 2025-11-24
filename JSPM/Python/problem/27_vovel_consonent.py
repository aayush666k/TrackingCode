a = input("Enter : ").lower()
vowels='aeiou'
c=0
v=0
for ch in a:
    if ch in vowels:
        v+=1
    else:
        c+=1
print(f"There are {v} vowels and {c} consonants in given string")


# a = input("Enter : ").lower()
# vowels = 'aeiou'
# c = 0
# v = 0

# for ch in a:
#     if 'a' <= ch <= 'z':   # check if it's a letter
#         if ch in vowels:
#             v += 1
#         else:
#             c += 1

# print(f"There are {v} vowels and {c} consonants in given string")
