#include "binary_trees.h"
/*BY CHARIFA MMASBAHI*/
/**
 * binary_tree_postorder - post-order traversal
 * @tree: Pointer to root
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
