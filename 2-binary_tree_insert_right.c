#include "binary_trees.h"

/**
 * binary_tree_insert_right- function that insert a  node
 * @parent: parent node of nodo to create
 * @value: nodo value
 * Return: inserted nodo
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
	return (NULL);

binary_tree_t *node_right = malloc(sizeof(binary_tree_t));
node_right->parent = parent;
node_right->left = NULL;
node_right->right = NULL;
node_right->n = value;

if (parent->right != NULL)
{
	node_right->right = parent->right;
	parent->right->parent = node_right;
}

parent->right = node_right;
return (node_right);
}
