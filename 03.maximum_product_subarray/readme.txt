Algorithm : 

# Receive the size of the array n and the elements of the array v.

#  If the array is empty (i.e., n == 0), output 0 and terminate.

#  Initialize variables maxEndingHere, minEndingHere, and maxSoFar to the first element of the array v[0].

#  Iterate over the array starting from the second element (i = 1):
    1.) If the current element v[i] is negative, swap maxEndingHere and minEndingHere.
    2.) Update maxEndingHere to be the maximum of the current element and the product of maxEndingHere and v[i].
    3.) Update minEndingHere to be the minimum of the current element and the product of minEndingHere and v[i].
    4.) Update maxSoFar to be the maximum of maxSoFar and maxEndingHere.

#  Output the value of maxSoFar, which represents the maximum product of a subarray within the array.