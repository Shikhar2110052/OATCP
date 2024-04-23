Algorithm

#Initialization: Initialize the residual graph rGraph with the capacities of the original graph. Also, initialize max_flow to 0.
#BFS: Implement a breadth-first search (BFS) to find an augmenting path from the source s to the sink t in the residual graph.
 This is done by maintaining a boolean array visited to keep track of visited vertices and a parent array to store the path.
#Augmenting Path: If an augmenting path is found, calculate the path flow by finding the minimum capacity along the path.
#Update Residual Capacities: Update the residual capacities of the edges along the augmenting path. Subtract the path flow
 from the forward edges and add it to the backward edges.
#Repeat: Repeat steps 2-4 until no augmenting paths exist.
#Termination: When no augmenting path is found, the algorithm terminates, and the max_flow value represents the maximum flow
 from the source to the sink in the graph.