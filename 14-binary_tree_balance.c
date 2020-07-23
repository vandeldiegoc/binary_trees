#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: binary tree node
 * Return: size node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return (0);

else if (tree->left != NULL && tree->right != NULL)
	return (2);
else
	return (-1);
}
