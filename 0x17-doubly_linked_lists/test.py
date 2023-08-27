def is_palindrome(num):
    return str(num) == str(num)[::-1]

max_palindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        prod = i * j
        if is_palindrome(prod) and prod > max_palindrome:
            max_palindrome = prod

with open('102-result', 'w') as f:
    f.write(str(max_palindrome))
