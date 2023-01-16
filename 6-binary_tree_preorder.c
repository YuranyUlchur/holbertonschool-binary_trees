#include "binary_trees.h"

/**
 * binary_tree_preorder - function that checks if a given node is a root
 * @tree: tree pointer structure
 * @func: function (print)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
