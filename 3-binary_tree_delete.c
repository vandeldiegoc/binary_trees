#include "binary_trees.h"

/**
 * binary_tree_delete- function that insert a  node
 * @tree: binary tree node
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
	return;

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
