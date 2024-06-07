#include "binary_trees.h"
int traverse_left_tree(const binary_tree_t *tree);
int traverse_right_tree(const binary_tree_t *tree);
/**
 * binary_tree_is_full - check if the tree id binary
 *
 * @tree: root of the tree
 * Return: 1 of tree is full and 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);
	left = traverse_left_tree(tree);
	right = traverse_right_tree(tree);

	if (left != right)
		return (0);
	else if (left == 0 && right == 0)
		return (0);
	else
		return (1);
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
	int node_num;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	node_num = traverse_left_tree(tree->left);
	return (node_num);
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
	int node_num;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	node_num = traverse_right_tree(tree->right);
	return (node_num);
}
