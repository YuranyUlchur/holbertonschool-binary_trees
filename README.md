# Binary trees

## What is Binary Tree Data Structure?

<img src="https://i.imgur.com/AMON8kG.jpg" alt="img" align="right" width="300px">

Binary Tree is defined as a tree data structure where each node has at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

A Binary tree is represented by a pointer to the topmost node (commonly known as the “root”) of the tree. If the tree is empty, then the value of the root is NULL. Each node of a Binary Tree contains the following parts:

* Data
* Pointer to parent
* Pointer to left child
* Pointer to right child

> *[geeksforgeeks.org](https://www.geeksforgeeks.org/binary-tree-data-structure/)*

<br>

<img src="https://i.imgur.com/SE13ZbO.jpg" alt="Binary-tree">

<hr>

## Description

* [`tests/`](./tests) - Main functions provided by Holberton School to test the files.
* [`binary_trees.h`](./binary_trees.h) - Header file with function prototypes and with libraries.

## Code Style

[Betty Style](https://github.com/holbertonschool/Betty) was implemented for all files.

## Tasks

Files | Description
----- | -----------
[binary_tree_print.c](./binary_tree_print.c) | Function that prints a binary tree
[0-binary_tree_node.c](./0-binary_tree_node.c) | Function that creates a binary tree node
[1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c) | Function that inserts a node as the left-child of another node
[2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c) | Function that inserts a node as the right-child of another node
[3-binary_tree_delete.c](./3-binary_tree_delete.c) | Function that deletes an entire binary tree
[4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c) | Function that checks if a node is a leaf
[5-binary_tree_is_root.c](./5-binary_tree_is_root.c) | Function that checks if a given node is a root
[6-binary_tree_preorder.c](./6-binary_tree_preorder.c) | Function that goes through a binary tree using pre-order traversal
[7-binary_tree_inorder.c](./7-binary_tree_inorder.c) | Function that goes through a binary tree using in-order traversal
[8-binary_tree_postorder.c](./8-binary_tree_postorder.c) | Function that goes through a binary tree using post-order traversal
[9-binary_tree_height.c](./9-binary_tree_height.c) | Function that measures the height of a binary tree
[10-binary_tree_depth.c](./10-binary_tree_depth.c) | Function that measures the depth of a node in a binary tree
[11-binary_tree_size.c](./11-binary_tree_size.c) | Function that measures the size of a binary tree
[12-binary_tree_leaves.c](./12-binary_tree_leaves.c) | Function that counts the leaves in a binary tree
[13-binary_tree_nodes.c](./13-binary_tree_nodes.c) | Function that counts the nodes with at least 1 child in a binary tree
[14-binary_tree_balance.c](./14-binary_tree_balance.c) | Function that measures the balance factor of a binary tree
[15-binary_tree_is_full.c](./15-binary_tree_is_full.c) | Function that checks if a binary tree is full
[16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c) | Function that checks if a binary tree is perfect
[17-binary_tree_sibling.c](./17-binary_tree_sibling.c) | Function that finds the sibling of a node
[18-binary_tree_uncle.c](./18-binary_tree_uncle.c) | Function that finds the uncle of a node

## Authors

* Yurany Ulchur <a href="https://github.com/YuranyUlchur" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Felipe Villamizar <a href="https://github.com/felipevcc" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
