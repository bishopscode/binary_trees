#include "binary_trees.h"

/**
 * binary_tree_inorder - short description
 *
 * Description: long description
 *
 * @tree: arg_1 description
 * @func: arg_2 description
 *
 * Return: returns description
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
