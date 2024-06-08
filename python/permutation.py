import math

def calculate_permutations(n, r):
    if n < r:
        return "Invalid: Number of people cannot be less than number of seats"
    else:
        permutations = math.factorial(n) // math.factorial(n - r)
        return permutations


n = int(input("Enter the number of people: "))
r = int(input("Enter the number of seats: "))
result = calculate_permutations(n, r)
print("Number of permutations:", result)