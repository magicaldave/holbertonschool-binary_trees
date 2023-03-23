#include "binary_trees.h"

/**
*binary_tree_insert_left-binary_tree_insert_left
*@parent:parent
*@value:value
*Return:0
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	node->left = parent->left;
	parent->left = node;

	if (node->left)
		node->left->parent = node;

	return (node);
}
