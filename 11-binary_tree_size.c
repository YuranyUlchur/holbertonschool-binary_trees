#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: Pointer binary_tree_t
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size);
}
