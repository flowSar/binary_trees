#include "binary_trees.h"
int traverse_left_tree(const binary_tree_t *tree, int number);
int traverse_right_tree(const binary_tree_t *tree, int number);
/**
 * binary_tree_is_perfect -check if the tree is perfect
 *
 * @tree: root of the tree
 * Return: return 0 if tree not perfect and 1 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	left = traverse_left_tree(tree, 0);
	right =  traverse_right_tree(tree, 0);
	if (left == right)
		return (1);
	return (0);
}
/**
 * traverse_left_tree - traverse the left of the tree
 * and return number of nodes in the left
 *
 * @tree: root of the tree
 * @number: numder of nodes
 * Return: number of nodes in the right
 */
int traverse_left_tree(const binary_tree_t *tree, int number)
{
	int node_num = number;

	if (tree == NULL)
		return (node_num);
	if (tree->left != NULL && tree->right != NULL)
		node_num += 2;
	else if (tree->left != tree->right)
		node_num += 1;
	node_num = traverse_left_tree(tree->left, node_num);
	return (node_num);
}
/**
 * traverse_right_tree - traverse the right of the tree
 * and return number of nodes in the right
 *
 * @tree: root of the tree
 * @number: numder of nodes
 * Return: height of the right side
 */
int traverse_right_tree(const binary_tree_t *tree, int number)
{
	int node_num = number;

	if (tree == NULL)
		return (node_num);
	if (tree->left != NULL && tree->right != NULL)
		node_num += 2;
	else if (tree->left != tree->right)
		node_num += 1;
	node_num = traverse_right_tree(tree->right, node_num);
	return (node_num);
}
