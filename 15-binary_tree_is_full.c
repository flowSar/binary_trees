#include "binary_trees.h"

int traverse_tree(const binary_tree_t *tree);
/**
 * binary_tree_is_full - check if the tree is full
 *
 * @tree: root of the tree
 * Return: 1 of tree is full and 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int result;

	result = traverse_tree(tree);
	if (result % 2 == 0)
		return (0);
	return (1);
}
/**
 * traverse_tree - traverse the tree and calculate number of
 * node is the tree
 *
 * @tree: root of the tree
 * Return: number of nodes in the tree.
 */
int traverse_tree(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	left = traverse_tree(tree->left);
	right = traverse_tree(tree->right);
	return (left + right + 1);
}
