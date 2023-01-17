#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int perfect;

	root = NULL;

	perfect = binary_tree_is_perfect(root);
	printf("Is the tree with root node (%p) perfect? %d\n", (void *)root, perfect);

	return (0);
}
