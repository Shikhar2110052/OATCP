Algorithm : 

# Accept a sequence of strings.

# Store the input strings in a vector.

# Sort the strings in non-increasing order based on the concatenation of two strings. To achieve this, use a custom comparator function:
Compare two strings by concatenating them in two different orders (s1 + s2 and s2 + s1), and return true if the concatenation s1 + s2 is greater than s2 + s1. 
This ensures that when sorted, strings with higher concatenated values come first.

# Concatenate the sorted strings to form the largest number.

# Print the concatenated string, which represents the largest number that can be formed from the given strings.