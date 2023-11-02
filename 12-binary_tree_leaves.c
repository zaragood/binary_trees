#include "binary_trees.h"
/**
 * binary_tree_leaves - function that measures the size of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure the size
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/*check if tree is NULL*/
	if (tree == NULL)
		return (0);

	/*check if the node is a leaf node*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Recursively calculate the leaves of the left and right node*/
	left_size = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);

	/*return the number of leaves in the tree*/
	return (left_size + right_size);
}
