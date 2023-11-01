#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*check if tree is NULL*/
	if (tree == NULL || func == NULL)
		return;

	/*preorder traversal of the tree*/
	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);

}
