Algorithm : 


#  Accept the number of boys n, their dancing skills, the number of girls m, and their dancing skills.

#  Initialize a 2D array dp of size (n+1) x (m+1) to store the maximum possible number of pairs for each subproblem. 
   Initialize all values in dp to -1 to mark them as not yet calculated.

#  Define a recursive function recur that takes the following parameters:
    Two vectors representing the dancing skills of boys and girls (v1 and v2 respectively).
    Integers n and m representing the current sizes of the boy and girl arrays respectively.
    The dp array to store previously calculated results.

#  If either n or m becomes 0 (i.e., there are no more boys or girls respectively), return 0.

#  Check if the current subproblem (n, m) has been calculated before. If yes, return the stored result from dp.

#  Recursive Steps:
    * If the absolute difference between the dancing skills of the current boy and girl is at most 1, 
    it's possible to form a pair. Recur with one less boy and one less girl, and increment the count by 1.
    * Otherwise, skip forming a pair between the current boy and girl and recur with either one less
    boy or one less girl, taking the maximum of both possibilities.

#  Store the calculated result for the current subproblem (n, m) in the dp array.

#  Print the result obtained from the recursive function call with the initial parameters.