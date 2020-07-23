#include "binary_trees.h"

/**
 * binary_tree_insert_left- function that insert a  node
 * @parent: parent node of nodo to create
 * @value: nodo value
 * Return: inserted nodo
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

if (parent == NULL)
	return (NULL);

binary_tree_t *node_left = malloc(sizeof(binary_tree_t));
if (!node_left)
	return (NULL);

node_left->parent = parent;
node_left->left = NULL;
node_left->right = NULL;
node_left->n = value;
if (parent->left != NULL)
{
	node_left->left = parent->left;
	parent->left->parent = node_left;
}

parent->left = node_left;
return (node_left);
}
