#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * @parent: parent node
 * @value: value to store in the new node
 * Return: binary_tree_t *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (!node || !parent)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (parent);
}
