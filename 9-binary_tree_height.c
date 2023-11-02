#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Base case: If tree is NULL, height is 0 */
	if (tree == NULL)
		return (0);

	/*check if the node is a leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	/*Recursively calculate height of left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/*Return the height of the taller subtree, plus 1 for the current node*/
	return (1 + (left_height > right_height ? left_height : right_height));
}
