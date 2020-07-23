#include "binary_trees.h"

/**
 * binary_tree_inorder - function that in-order traversal
 * @tree: binary tree node
 * @func: pointer to a funtion
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
