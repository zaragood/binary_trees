#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: tree is a pointer to the root node of the tree to delete
 * Return: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*check if tree is empty*/
	if (tree == NULL)
	{
		return;
	}

	/*using in-order traversal to delete nodes*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
