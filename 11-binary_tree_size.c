#include "binary_trees.h"
/**
 * binary_tree_size - calculate the size of the tree
 *
 * @tree: root of the tree
 * Return: size of the tree
 */
int traverse_tree(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	size = traverse_tree(tree);
	return (size - 1);
}
/**
 * traverse_tree - traverse the tree cand calculate the size of
 * tree and the tree will start with giving node
 *
 * @tree: root of the tree
 * Return: return size of tree that
 */
int traverse_tree(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (1);
	size += traverse_tree(tree->left);
	size += traverse_tree(tree->right);
	return (size);
}
