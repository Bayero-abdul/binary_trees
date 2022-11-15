#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
=======
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (binary_tree_depth(tree->parent) + 1);

	return (-1);
>>>>>>> e63794a334e09db74752d05a2fdc9a104eb95d02
}
