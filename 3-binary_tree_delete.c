#include "binary_trees.h"

/**
 * binary_tree_delete - short description
 *
 * Description: long description
 *
 * @tree: arg_1 description
 *
 * Return: returns description
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
