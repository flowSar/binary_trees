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
	binary_tree_t *new_node, *left_child_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;


	if (parent->left != NULL)
	{
		left_child_node = parent->left;

		parent->left = new_node;
		new_node->left = left_child_node;
        
		return (new_node);
	}
	parent->left = new_node;
	return (new_node);
}
