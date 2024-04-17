Algorithm : 

# Input:

Read an integer n from input, representing the number of integers in the vector v.
Read n integers into the vector v.

# Binary Conversion:

Define a function f(int n) to convert each integer in v into its binary representation as a string.
Iterate over each bit position (from 31 to 0) in the binary representation of each integer using bitwise shifting.
Append '1' or '0' to a string temp based on whether the current bit is set or unset.
Add the binary string temp to the vector Bin.

# Pairwise Difference Calculation:

Iterate over each bit position (from 31 to 0) in the binary representation.
Count the number of set bits ('1's) at the current position across all integers in v.
Calculate the count of unset bits ('0's) as n - one, where one is the count of set bits.
Add (one * (n - one)) to the answer ans for each bit position.

# Output:

Output the final answer ans.