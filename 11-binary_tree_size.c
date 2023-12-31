#include "binary_trees.h"
/*BY CHARIFA MASBAHI*/
/**
 * binary_tree_size - size of a BT
 * @tree: Pointer to root
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
