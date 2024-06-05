#include "binary_trees.h"
/**
 * binary_tree_delete - delete the entire tree
 *
 * @tree: root of the tree that we're suppose to delete
 */
void travel_and_delete(binary_tree_t *tree);

void binary_tree_delete(binary_tree_t *tree)
{
	travel_and_delete(tree);
}
/**
 * travel_and_delete - A recursive function for traversing
 * through all branches of the tree, both left and right.
 *
 * @tree: root of the tree that we're suppose to delete
 */
void travel_and_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	travel_and_delete(tree->left);
	travel_and_delete(tree->right);
	free(tree);
}
