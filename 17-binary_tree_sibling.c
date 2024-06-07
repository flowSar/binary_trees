#include "binary_trees.h"
/**
 * binary_tree_sibling - check the node has siblings
 *
 * @node: node
 * Return: return node sibligns otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}
