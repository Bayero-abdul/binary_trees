#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node:  is a pointer to the node to check
 *
 * Return: return 1 if node is a leaf, otherwise 0 and
 * returns 0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
