#include "binary_trees.h"


/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	if (tree->left && !tree->right)
		return (0);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l + r == 1)
		return (0);
	return (1);
}
