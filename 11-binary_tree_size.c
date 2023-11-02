#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure the size
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/*check if tree is NULL*/
	if (tree == NULL)
		return (0);

	/*Recursively calculate the size of the left and right node*/
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	/*return the  sum of all node + the current node*/
	return (1 + left_size + right_size);
}
