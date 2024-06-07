#include "binary_trees.h"
binary_tree_t *traverse_tree_backward(const binary_tree_t *first,
									  const binary_tree_t *second);
/**
 * binary_tree_uncle - get the ancestor of the nodes or null
 * if doesn't exist
 *
 * @first: first node.
 * @second: second node.
 * Return: return the ancestor node or NULL otherwise
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	ancestor = traverse_tree_backward(first, second);
	return (ancestor);
}
/**
 * traverse_tree_backward - with this function wi traverse backward the tree
 * until we find the ancestors of the two nodes
 *
 * @first: first node.
 * @second: second node.
 * Return: return the ancestor node or NULL otherwise
 */
binary_tree_t *traverse_tree_backward(const binary_tree_t *first,
									  const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	ancestor = traverse_tree_backward(first->parent, second);
	if (first->parent == second->parent)
		return (first->parent);
	ancestor = traverse_tree_backward(first, second->parent);
	return (ancestor);
}
