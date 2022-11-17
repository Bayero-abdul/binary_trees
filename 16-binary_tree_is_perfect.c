#include "binary_trees.h"

int num_of_nodes(const binary_tree_t *tree);
int power(int x, int n);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = num_of_nodes(tree);

	if (nodes == (power(2, height + 1) - 1))
		return (1);

	return (0);
}


/**
 * power - calculates the power of a x raised to the power of n
 * @x: number
 * @n: number
 *
 * Return: power of a x raised to the power of n
 */
int power(int x, int n)
{
	int y;

	if (n == 0)
		return (1);

	return (x * power(x, n - 1));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * num_of_nodes - Counts the nodes in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
int num_of_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + num_of_nodes(tree->left) + num_of_nodes(tree->right));
}
