Algorithm : 

# Receive the number of test cases t. For each test case, receive the target number n.

# If n is less than or equal to 0, output 0 and move to the next test case.

# Initialize a vector dp of size n+1 to store the number of ways to generate each target number.
Initialize dp[0] to 1 as there's one way to generate 0 (by not throwing any dice).

#  Iterate through all numbers from 1 to n. For each number i, iterate through all possible outcomes of throwing a dice. 
For each outcome j, update dp[i] by adding the number of ways to generate i-j.

#  Output the value of dp[n], which represents the number of ways to generate the target number n using one or more throws of a dice.