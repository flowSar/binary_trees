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
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	else if (tree->left != NULL && tree->right != NULL)
		return (2);
	else if (tree->right == NULL || tree->left == NULL)
		return (1);

	return (0);
}
