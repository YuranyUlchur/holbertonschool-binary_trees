#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: Pointer binary_tree_t
 * Return: type binary_tree_t
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandpa = node->parent->parent;

	if (grandpa->left && grandpa->left != node->parent)
		return (grandpa->left);
	else if (grandpa->right && grandpa->right != node->parent)
		return (grandpa->right);
	return (NULL);
}
