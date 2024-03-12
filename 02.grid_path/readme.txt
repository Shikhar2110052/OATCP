Algorithm : 

# Initialize a 2D vector grid of size n x n to represent the grid.

# Initialize another 2D vector dp of the same size to store the number of unique paths to reach each cell.	

# If the starting cell (grid[0][0]) is an obstacle, print 0 and exit.

# Traverse the grid from the top-left corner to the bottom-right corner. For each cell (i, j):

	1.) If it's the starting cell (i == 0 and j == 0), set dp[i][j] = 1.
	2.) If it's in the first row (i == 0) or the first column (j == 0), update dp[i][j] based on the previous cell's value 	    if the current cell is not an obstacle.
	3.) Otherwise, update dp[i][j] as the sum of unique paths from the cell above and from the cell to the left, if the 	    current cell is not an obstacle. Use modulo M to avoid overflow.
	4.) Output the value of dp[n-1][n-1], which represents the number of unique paths to reach the bottom-right corner.

Time Complexity : O(n^2)
Space Complexity : O(n^2)
