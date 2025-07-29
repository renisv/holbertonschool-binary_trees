#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t edges = 0;
    size_t depth = 0;
    
    if (tree == NULL || tree->parent == NULL)
        return (0);
    
    edges = binary_tree_depth(tree->parent);

    depth = edges + 1;

    return (depth);

}