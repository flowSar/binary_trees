#include "binary_trees.h"
int traverse_tree(const binary_tree_t *tree, int number);
/**
 * binary_tree_nodes - calculate number of nodes with at least one child
 *
 * @tree: root of the tree
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_number;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	node_number = traverse_tree(tree, 0);
	return (node_number);
}
/**
 * traverse_tree - traverse the tree and calculate number of nodes
 * with a least one child except the root of the tree
 *
 * @tree: root of the tree
 * @number: number of node with at least 1 child
 * Return: return number of nodes with at least one child
 */
int traverse_tree(const binary_tree_t *tree, int number)
{
	int node_num = number;

	if (tree == NULL)
		return (node_num + 0);
	if (tree->left != NULL || tree->right != NULL)
		node_num += 1;
	node_num = traverse_tree(tree->left, node_num);
	node_num = traverse_tree(tree->right, node_num);
	return (node_num);
}
