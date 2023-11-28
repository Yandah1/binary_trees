### 0x1D. C - Binary trees README

This project involves implementing various functions for binary trees in C. The functions cover essential operations such as creating nodes, inserting left and right children, deleting the entire tree, and performing various checks and traversals.

#### 1. Creating a Binary Tree Node

- **Function Prototype:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Creates a binary tree node with a given parent and value.
- Returns a pointer to the new node or NULL on failure.

#### 2. Inserting a Left Child

- **Function Prototype:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Inserts a node as the left child of a specified parent.
- Returns a pointer to the created node or NULL on failure or if the parent is NULL.
- Replaces the existing left child if it exists.

#### 3. Inserting a Right Child

- **Function Prototype:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Inserts a node as the right child of a specified parent.
- Returns a pointer to the created node or NULL on failure or if the parent is NULL.
- Replaces the existing right child if it exists.

#### 4. Deleting an Entire Binary Tree

- **Function Prototype:** `void binary_tree_delete(binary_tree_t *tree);`
- Deletes an entire binary tree rooted at the specified node.
- Does nothing if the tree or root node is NULL.

#### 5. Checking if a Node is a Leaf

- **Function Prototype:** `int binary_tree_is_leaf(const binary_tree_t *node);`
- Checks if a given node is a leaf.
- Returns 1 if it's a leaf, 0 otherwise. Returns 0 if the node is NULL.

#### 6. Checking if a Node is a Root

- **Function Prototype:** `int binary_tree_is_root(const binary_tree_t *node);`
- Checks if a given node is a root.
- Returns 1 if it's a root, 0 otherwise. Returns 0 if the node is NULL.

#### 7. Pre-order Traversal

- **Function Prototype:** `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Performs pre-order traversal on a binary tree, applying a function to each node's value.
- Does nothing if the tree or function is NULL.

#### 8. In-order Traversal

- **Function Prototype:** `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Performs in-order traversal on a binary tree, applying a function to each node's value.
- Does nothing if the tree or function is NULL.

#### 9. Post-order Traversal

- **Function Prototype:** `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Performs post-order traversal on a binary tree, applying a function to each node's value.
- Does nothing if the tree or function is NULL.

#### 10. Measuring the Height of a Binary Tree

- **Function Prototype:** `size_t binary_tree_height(const binary_tree_t *tree);`
- Measures the height of a binary tree.
- Returns 0 if the tree is NULL.

#### 11. Measuring the Depth of a Node

- **Function Prototype:** `size_t binary_tree_depth(const binary_tree_t *tree);`
- Measures the depth of a node in a binary tree.
- Returns 0 if the node is NULL.

#### 12. Measuring the Size of a Binary Tree

- **Function Prototype:** `size_t binary_tree_size(const binary_tree_t *tree);`
- Measures the size (number of nodes) of a binary tree.
- Returns 0 if the tree is NULL.

#### 13. Counting Leaves in a Binary Tree

- **Function Prototype:** `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Counts the number of leaves in a binary tree.
- Returns 0 if the tree is NULL.

#### 14. Counting Nodes with at Least 1 Child

- **Function Prototype:** `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Counts the number of nodes in a binary tree with at least one child.
- Returns 0 if the tree is NULL.

#### 15. Measuring the Balance Factor

- **Function Prototype:** `int binary_tree_balance(const binary_tree_t *tree);`
- Measures the balance factor of a binary tree.
- Returns 0 if the tree is NULL.

#### 16. Checking if a Binary Tree is Full

- **Function Prototype:** `int binary_tree_is_full(const binary_tree_t *tree);`
- Checks if a binary tree is full.
- Returns 0 if the tree is NULL.

#### 17. Checking if a Binary Tree is Perfect

- **Function Prototype:** `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Checks if a binary tree is perfect.
- Returns 0 if the tree is NULL.

#### 18. Finding the Sibling of a Node

- **Function Prototype:** `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Finds the sibling of a given node.
- Returns a pointer to the sibling node or NULL if the node or parent is NULL, or if there is no sibling.

#### 19. Finding the Uncle of a Node

- **Function Prototype:** `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Finds the uncle of a given node.
- Returns a pointer to the uncle node or NULL if the node is NULL or has no uncle.
