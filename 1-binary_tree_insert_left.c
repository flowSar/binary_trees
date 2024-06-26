#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert new node in the left of parent node;
 *
 * @parent: parent of the new node in the tree
 * @value: node value
 * Return: return new node or null if creation fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
		return (new_node);
	}
	new_node->left = NULL;
	parent->left = new_node;
	return (new_node);
}
