#include "binary_trees.h"
/*BY CHARIFA MASBAHI*/
/**
 * binary_tree_delete - Del a BT.
 * @tree: Pointer to the root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}