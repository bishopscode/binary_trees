#include "binary_trees.h"

/**
 * binary_tree_depth - short description
 *
 * Description: long description
 *
 * @tree: arg_1 description
 *
 * Return: returns description
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *cur_node;
	size_t depth = 0;

	if (tree == NULL)
		return (depth);
	cur_node = (binary_tree_t *) tree;
	while (cur_node->parent)
	{
		depth++;
		cur_node = cur_node->parent;
	}
	return (depth);
}
