#include "binary_trees.h"
size_t traverse_tree(const binary_tree_t *tree, const binary_tree_t *parent);
/**
 * binary_tree_leaves - calcultae number of leaves in the tree
 *
 * @tree: root of the tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_number;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaf_number = traverse_tree(tree, tree);
	return ((leaf_number + 1) / 2);
}
/**
 * traverse_tree - traverse the tree cand calculate leaf_number
 * of leafs in the tree
 *
 * @tree: root of the tree
 * @parent: root of the tree to keep
 * Return: return size of tree that
 */
size_t traverse_tree(const binary_tree_t *tree, const binary_tree_t *parent)
{
	int leaf_number = 0;

	if (tree == NULL)
	{
		if (parent->left == NULL && parent->right == NULL)
			return (1);

		return (0);
	}
	leaf_number += traverse_tree(tree->left, tree);
	leaf_number += traverse_tree(tree->right, tree);
	return (leaf_number);
}
