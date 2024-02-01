#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: a size_t value of the amount of node non leaves, if tree is NULL
 * return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left)
		left_node = binary_tree_nodes(tree->left);
	if (tree->right)
		right_node = binary_tree_nodes(tree->right);

	return (1 + left_node + right_node);
}
