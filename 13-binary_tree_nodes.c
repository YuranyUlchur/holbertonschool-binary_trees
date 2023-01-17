#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: Pointer binary_tree_t
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
