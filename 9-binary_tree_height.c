#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree structur
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	while (tree->left || tree->right)
	{
		if (tree->left)
			tree = tree->left;
		else
			tree = tree->right;
		height++;
	}

	return (height);
}
