#include "binary_trees.h"

/**
 * binary_tree_leaves -i function that counts the leaves in a binary tree
 * @tree: binary tree node
 * Return: size node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return (1);
count += binary_tree_leaves(tree->left);
count += binary_tree_leaves(tree->right);
return (count);
}
