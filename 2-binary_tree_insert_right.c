#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert new node in the right of parent node;
 *
 * @parent: parent of the new node in the tree
 * @value: node value
 * Return: return new node or null if creation fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *right_child_node;
	
	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	if (parent->right != NULL)
	{
		right_child_node = parent->right;
		parent->right = new_node;
		new_node->right = right_child_node;
		return (new_node);
	}
	parent->right = new_node;
	return (new_node);
}
