#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: tree is a pointer to the node to measure the depth
 * Return: f tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/*check if tree is NULL*/
	if (tree == NULL)
		return (0);

	/*check if tree->parent is NULL*/
	if (tree->parent == NULL)
		return (0);

	/*Recursivly calculate the depth of the node*/
	depth = binary_tree_depth(tree->parent);

	/*return depth + 1*/
	return (depth + 1);
}
