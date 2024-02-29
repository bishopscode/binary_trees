#include "binary_trees.h"

/**
 * binary_tree_preorder - short description
 *
 * Description: long description
 *
 * @tree: arg_1 description
 * @func: arg_2 description
 *
 * Return: returns description
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
