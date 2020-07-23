#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: binary tree node
 * Return: size node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
	return (1);
else
	return (0);
}
