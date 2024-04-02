Algorithm : 

# Accept the number of available ice bar prices n, the prices of each ice bar, and the number of coins available.

# Sort the ice bar prices in non-decreasing order.

# Initialize a variable ans to store the count of ice bars that can be bought. Set it initially to 0.

# Iterate through each ice bar price:
    1.) If the number of coins available is greater than or equal to the current ice bar price, increment the ans variable and
        subtract the ice bar price from the available coins.
    2.) Repeat this process until either all ice bars are considered or the available coins are not sufficient to buy the next ice bar. 

# Print the value of ans, which represents the maximum number of ice bars that can be bought with the given number of coins.