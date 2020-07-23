#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: binary tree node
 * Return: height node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
	return (0);
if (tree->left != NULL)
count += 1;
if (tree->right != NULL)
count += 1;
return (count);
}
