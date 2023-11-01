#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*check if tree is NULL*/
	if (tree == NULL || func == NULL)
		return;

	/*preorder traversal of the tree*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);

}
