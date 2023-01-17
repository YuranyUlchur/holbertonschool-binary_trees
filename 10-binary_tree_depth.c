#include "binary_trees.h"

/**
 * _depth - function that measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: integer
 */
int _depth(const binary_tree_t *tree)
{

	int depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		depth = _depth(tree->parent);
		depth++;
	}

	return (depth);
}
/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	depth = _depth(tree);

	return (depth);
}
