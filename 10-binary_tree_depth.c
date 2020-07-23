#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: binary tree node
 * Return: depth node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
const binary_tree_t *temp = tree;
size_t count = 0;
if (tree == NULL)
	return (0);
while (temp->parent != NULL)
{
	count += 1;
	temp = temp->parent;
}
return (count);
}
