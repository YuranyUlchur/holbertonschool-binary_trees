#include "binary_trees.h"

/**
 * _height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t _height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
		return (0);

	height_l = _height(tree->left);
	height_r = _height(tree->right);

	if (height_l >= height_r)
		return (height_l + 1);

	return (height_r + 1);
}
/**
 * binary_tree_balance -function that measures the balance
 * @tree: Pointer binary_tree_t
 * Return: integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance1 = 0, balance2 = 0;

	if (!tree)
		return (0);

	if (tree->left)
		balance1 = _height(tree->left);
	if (tree->right)
		balance2 = _height(tree->right);
	return (balance1 - balance2);
}
