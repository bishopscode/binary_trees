#include "binary_trees.h"

/**
 * binary_tree_node - short description
 *
 * Description: long description
 *
 * @parent: arg_1 description
 * @value: arg_2 description
 *
 * Return: return description
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *N_node;

	N_node = malloc(sizeof(binary_tree_t));
	if (N_node == NULL)
		return (NULL);
	N_node->n = value;
	N_node->left = NULL;
	N_node->right = NULL;
	N_node->parent = parent;
	return (N_node);
}
