#include "binary_trees.h"
size_t traverse_tree(const binary_tree_t *tree, const binary_tree_t *parent);
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

	node_number = traverse_tree(tree, tree);
	if (node_number > 1 && (tree->left != NULL || tree->right != NULL))
		return (node_number + 1);
	return (node_number);
}
/**
 * traverse_tree - traverse the tree and calculate number of nodes
 * with a least one child except the root of the tree
 *
 * @tree: root of the tree
 * @parent: root of the tree to keep
 * Return: return number of nodes with at least one child
 */
size_t traverse_tree(const binary_tree_t *tree, const binary_tree_t *parent)
{
	int node_number = 0;

	if (tree == NULL)
	{
		if (parent->left != NULL || parent->right != NULL)
			return (1);
		return (0);
	}
	node_number += traverse_tree(tree->left, tree);
	node_number += traverse_tree(tree->right, tree);
	return (node_number);
}
