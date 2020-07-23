#include "binary_trees.h"

/**
 * binary_tree_nodes -i function that counts the node in a binary tree
 * @tree: binary tree node
 * Return: size node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
	return (0);

if (tree->left != NULL || tree->right != NULL)
	count += 1;
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (count);
}
