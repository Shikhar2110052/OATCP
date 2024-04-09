Algorithm

# Read the integer k representing the size of the vector v.
# Read the elements of the vector v.
# Read the integer n representing the target sum.
# Initialize variables sum to keep track of the current sum, cnt to count the number of elements selected, and i to iterate over elements of the vector.
# While the current sum is less than n:
# If there are more elements in the vector v (i < v.size()) and the current element v[i] can be added to the sum without exceeding sum+1, add v[i]
#  to the sum and increment i.
# Otherwise, increment cnt to indicate that a new element needs to be added, and update the sum by doubling it and adding 1.
# Output the value of cnt as the minimum number of elements required.