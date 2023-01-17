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
 * _height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * is_perfect - function if the tree is perfect
 * @tree: Pointer binary_tree_t
 * @height: integer
 * Return: integer
 */
int is_perfect(const binary_tree_t *tree, int height)
{
	int depth = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = _depth(tree);
		if (depth == height)
			return (1);
		return (0);
	}

	return (is_perfect(tree->left, height) && is_perfect(tree->right, height));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: Pointer binary_tree_t
 * Return: integer
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);

	height = _height(tree);

	return (is_perfect(tree, height));
}
