#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse the tree and print each node value
 *
 * @tree: root of the tree
 * @func: function pointer for printing node value
 */
void traverse_tree_and_print(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		traverse_tree_and_print(tree, func);
	}
}
/**
 * traverse_tree_and_print - traverse the tree and print each node value
 * by using recursive function
 *
 * @tree: root of the tree
 * @func: pointer to function for printing node value
 */
void traverse_tree_and_print(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	traverse_tree_and_print(tree->left, func);
	func(tree->n);
	traverse_tree_and_print(tree->right, func);

}
