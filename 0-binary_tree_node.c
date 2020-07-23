#include "binary_trees.h"

/**
 * binary_tree_node- function that insert a  node
 * @parent: parent node of nodo to create
 * @value: nodo value
 * Return: inserted nodo
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

binary_tree_t *temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
	return (NULL);
temp->n = value;
temp->parent = NULL;
temp->left = NULL;
temp->right = NULL;
if (parent == NULL)
{
	parent = temp;
	return (parent);
}
temp->parent = parent;
return (temp);
}
