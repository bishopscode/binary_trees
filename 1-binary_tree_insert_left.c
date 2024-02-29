#include "binary_trees.h"

/**
 * binary_tree_insert_left - short description
 *
 * Description: long description
 *
 * @parent: arg_1 description
 * @value: arg_2 description
 *
 * Return: return description
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *N_node, *old_node;

	if (parent == NULL)
		return (NULL);
	N_node = malloc(sizeof(binary_tree_t));
	if (N_node == NULL)
		return (NULL);
	N_node->n = value;
	N_node->right = NULL;
	N_node->parent = parent;
	if (parent->left != NULL)
	{
		old_node = parent->left;
		old_node->parent = N_node;
		N_node->left = old_node;
	}
	else
	{
		N_node->left = NULL;
	}
	parent->left = N_node;

	return (N_node);
}
