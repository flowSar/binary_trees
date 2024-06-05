#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of the tree
 *
 * @tree: root of the tree
 * Return: depth of the tree
 */
int traverse_tree_backward(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int n_node;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	n_node = traverse_tree_backward(tree);
	return (n_node);
}
/**
 * traverse_tree_backward - traverse the tree backward
 * to get the number of edge you will pass to reach the
 * giving node
 *
 * @tree: root of the tree
 * Return: return number of edge you traverse from the giving node
 */
int traverse_tree_backward(const binary_tree_t *tree)
{
	int edge;

	if (tree == NULL)
		return (-1);
	edge = 1 + traverse_tree_backward(tree->parent);
	return (edge);
}
