#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent is a pointer to the parent node of the node to create
 * @value: value is the value to put in the new node
 * Return: eturn a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
