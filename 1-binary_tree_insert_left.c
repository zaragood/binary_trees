#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: parent is a pointer to the node to insert the left-child in
 * @value: value is the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	/*Check if the parent is NULL*/
	if (parent == NULL)
		return (NULL);

	/*allocate memory for newNode*/
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/*initialize the newNode*/
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;

	/*update parent->left child*/
	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
