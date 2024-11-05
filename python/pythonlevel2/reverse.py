def reverse_number(num):
    num_str = str(num)  # Convert the number to a string
    reversed_str = num_str[::-1]  # Reverse the string using slicing
    return int(reversed_str)  # Convert back to integer

# Input from the user
num = int(input("Enter a number: "))

# Perform the reversal and print the result
result = reverse_number(num)
print(f"Reversed number: {result}")

