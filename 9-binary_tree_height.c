#include "binary_trees.h"
/**
 * binary_tree_height - calculate the size of the tree
 *
 * @tree: root of the tree
 * Return: height of the tree
 */
int traverse_tree(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree)
{
	int edges;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	edges = traverse_tree(tree);
	return ((edges + 1) / 2);
}
/**
 * traverse_tree - traverse the tree and get number of edges
 * by using recursive function
 *
 * @tree: root of the tree
 * Return: return number of edge
 */
int traverse_tree(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	l = 1 + traverse_tree(tree->left);
	r = 1 + traverse_tree(tree->right);

	if (l > r)
		return (l);
	return (r);
}
