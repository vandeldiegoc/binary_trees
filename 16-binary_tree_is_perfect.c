#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
int count = 0;
int deep_r = 0;
int deep_l = 0;

if (tree == NULL)
	return 0;
if (tree->left != NULL && tree->right != NULL)
{
	count = 2;
	count += binary_tree_is_perfect(tree->left);
	if (tree->parent != NULL)
		deep_l += 1;
	count += binary_tree_is_perfect(tree->right);
	if (tree->parent != NULL)
		deep_r += 1;
	if (deep_r == deep_l) 
			return count;
}
return 0;
}
