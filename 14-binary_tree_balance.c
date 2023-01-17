#include "binary_trees.h"

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
 * binary_tree_nodes - function that measures the balance
 * @tree: Pointer binary_tree_t
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance1, balance2;

	if (tree == NULL)
		return (0);

	balance1 = _height(tree->left);
	if (balance1 == -1)
	{
		return (-1);
	}

	balance2 = _height(tree->right);
	if (balance2 == -1)
	{
		return (-1);
	}
	if (abs(balance1 - balance2) > 1)
	{
		return (-1);
	}
	return ((balance1 - balance2) + 1);
}
