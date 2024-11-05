def swap_digits(num):
    num_str = str(num)  # Convert the number to a string for easy manipulation
    if len(num_str) == 1:
        return num  # If the number has only one digit, return it as-is
    
    # Swap the first and last digits
    swapped_str = num_str[-1] + num_str[1:-1] + num_str[0]
    
    return int(swapped_str)  # Convert back to integer

# Input from the user
num = int(input("Enter a number: "))

# Perform the swap and print the result
result = swap_digits(num)
print(f"Result after swapping first and last digits: {result}")
