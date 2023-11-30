#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;
	binary_tree_t *parent = (node != NULL ? node->parent : NULL);

	if (parent != NULL && parent->parent != NULL)
	{
		left = parent->parent->left;
		right = parent->parent->
	}
	return (left == parent ? right : left):
		
}
