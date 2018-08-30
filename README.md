# posist_test
Assumptions:
1. adding new node requires sum condition to be checked. If new node can not be added error message is displayed.
2. cyphering used is ceaser cypher.
3. nodeId and nodeNumber are considered same.

Working :
1. new Owner is asked to enter key , his name , an owner id and value;
2. nodenumber is auto-incremented on addition of new user.
3. To add a new node following is being done recursively
3a. sum of all child values of current node is taken and if new user can be fitted with the childs of current node then it is inserted        and height of current node is increased and all the ancestors recursively.
3b. if it cannot be fitted with the childs of current node then current node is changed to its child who can fit this new node.
3c. if both the above cannot proceed then new node cannot be inserted.
