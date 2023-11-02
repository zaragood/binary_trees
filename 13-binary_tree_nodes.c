#include "binary_trees.h"
/**
 * binary_tree_nodes - unction that counts the nodes with at least
 * 1 child in a binary tree
 * @tree: tree is a pointer to the root node of the tree
 * to count the number of nodes
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	/*check if tree is NULL*/
	if (tree == NULL)
		return (0);

	/*check if the node is a leaf node*/
	if (tree->left != NULL || tree->right != NULL)
	{
		/* If the node has at least one child, return 1 */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	/* If the node has no children, return 0 */
	return (0);
}
