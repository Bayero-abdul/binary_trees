#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 * the number of leaves
 *
 * Return: number of leaves and returns 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r, l, is_leaf;

	if (tree == NULL)
		return (0);

	is_leaf = !tree->right && !tree->left ? 1 : 0;
	if (is_leaf)
		return (is_leaf);

	l =  binary_tree_leaves(tree->left);
	r =  binary_tree_leaves(tree->right);
	return (l + r);
}
