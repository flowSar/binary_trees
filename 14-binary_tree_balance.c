#include "binary_trees.h"
/**
 * binary_tree_balance - calculate balance of power number of chldren
 * for each parent
 *
 * @tree: root of the tree
 * Return: balance of power 2 or 1 or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int right = traverse_right_tree(tree);
	int left = traverse_left_tree(tree);

	return (left - right);
}
/**
 * traverse_left_tree - traverse the right of the tree
 * and return height of the left side.
 *
 * @tree: root of the tree
 * Return: height of the left side
 */
int traverse_left_tree(const binary_tree_t *tree)
{
	int node_num = 0;

	if (tree == NULL)
		return (0);

	node_num = traverse_left_tree(tree->left);
	return (node_num + 1);
}
/**
 * traverse_right_tree - traverse the right of the tree
 * and return height of the right side.
 *
 * @tree: root of the tree
 * Return: height of the right side
 */
int traverse_right_tree(const binary_tree_t *tree)
{
	int node_num = 0;

	if (tree == NULL)
		return (0);

	node_num = traverse_right_tree(tree->right);
	return (node_num + 1);
}
