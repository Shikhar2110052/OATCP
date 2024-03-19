Algorithm : 

# Receive the size of the array n and the elements of the array v.

# Initialize two variables:
    1.) 'sum_of_product' to store the sum of products of each element with its index.
    2.) 'sum' to store the sum of all elements in the array.
    3.) Initialize ans with the initial value of sum_of_product.

# Iterate through each element of the array. For each element v[i]:
    Update sum_of_product by subtracting v[n-i-1]*n and adding sum.
    Update ans to be the maximum of ans and sum_of_product.

# Output the final value of ans.