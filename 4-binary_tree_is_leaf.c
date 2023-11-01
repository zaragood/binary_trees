#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node is a pointer to the node to check
 * Return: If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*check if node is NULL*/
	if (node == NULL)
	{
		return (0);
	}

	/*check if bothe the left and right child of node is null*/
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
