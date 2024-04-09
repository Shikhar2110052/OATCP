Algorithm : 

# Define a function removeKdigits that takes a string num representing the number and an integer k representing the number of digits to remove.

# Initialize a stack pq to store digits.

# Iterate through each digit of the input number:

# If the stack is empty, push the current digit onto the stack.

# If the stack is not empty and the current digit is less than the top of the stack, pop elements from the stack until either the stack is empty,
  the current digit is greater than or equal to the top of the stack, or the number of removals k becomes 0.

# Push the current digit onto the stack.

# After iterating through all digits, if there are still digits to be removed (k > 0), pop elements from the stack.

# Construct the smallest number from the remaining digits in the stack by popping elements from the stack and appending them to the answer string.

# Reverse the answer string to get the correct order of digits.

# Remove leading zeros from the answer string.

# If the resulting string is empty, return "0"; otherwise, return the resulting string.
