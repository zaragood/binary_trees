#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: node is a pointer to the node to check
 * Return: return 1 if node is a root, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*check if node is NULL*/
	if (node == NULL)
	{
		return (0);
	}

	/*check if node has a parent node*/
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
