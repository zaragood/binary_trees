#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree using pre-order traversal
 * @tree: tree is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*check if tree is NULL*/
	if (tree == NULL || func == NULL)
		return;

	/*preorder traversal of the tree*/
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
