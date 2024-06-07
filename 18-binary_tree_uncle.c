#include "binary_trees.h"
/**
 * binary_tree_uncle - get the unclde of the node or null
 * if doesn't exist
 *
 * @node: root of the tree
 * Return: return the unclde node or NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandfather;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandfather = parent->parent;
	if (grandfather == NULL)
		return (NULL);
	if (grandfather->right == parent)
		return (grandfather->left);
	else if (grandfather->left == parent)
		return (grandfather->right);
	return (NULL);
}
