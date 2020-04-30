# Binary Trees
## task 0
In this task we have to create an algorithm in order to create a binary tree using 
this structure
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
```
in the algorithm the user has to specify if the new node goes left or right
the user will create the tree as he wants.

Also we use a Function to print binary trees in a pretty way

```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```


# task 1
In this task we create an algorithm that follow the Max Heap Binary tree order
so, we have to use 5 functions
- heap_insert: this one reads if the tree is empty or not, if it is empty create the node and return the node as root
if not it send the tree to insert_order
- insert_order: this function creates the binary tree, without any sort, just the form. Because we have to create a binary tree in a specific way, deep level by deep level for example:
```
# first we have to complete a deep level to go to the next level

   .--(008)--.
 (007)    

   .--(008)--.
 (007)     (009)
 
# once complete we can continue

      .--(008)--.
  .--(007)     (009)
(002)

         .--(008)--.
  .--(007)--.     (009)
(002)      (050)


          .--(008)--.
  .--(007)--.     .--(009)
(002)     (050) (087)


          .--(008)--.
  .--(007)--.     .--(009)--.
(002)     (050) (087)      (256)

# once complete we can continue and so on

              .--(008)--.
      .--(007)--.     .--(009)--.
  .--(002)     (050) (087)      (256)
(078)
```
- deep: return the deep level
- change: is a function that we have to use to change nodes depending if the actual->right->n or actual->left->n is less that actual->n
- sort: this function sorts the tree that we create, and we have to be careful with the root of the tree because it can change
```
Inserted: 0
(000)
Inserted: 1
  .--(001)
(000)
Inserted: 1
  .--(001)--.
(000)     (001)
Inserted: 2
       .--(002)--.
  .--(001)     (001)
(000)
Inserted: 2
       .-------(002)--.
  .--(002)--.       (001)
(000)     (001)
Inserted: 3
       .-------(003)-------.
  .--(002)--.         .--(002)
(000)     (001)     (001)
Inserted: 3
       .-------(003)-------.
  .--(002)--.         .--(003)--.
(000)     (001)     (001)     (002)
Inserted: 4
            .-------(004)-------.
       .--(003)--.         .--(003)--.
  .--(002)     (001)     (001)     (002)
(000)
Inserted: 4
                 .-------(004)-------.
       .-------(004)--.         .--(003)--.
  .--(003)--.       (001)     (001)     (002)
(000)     (002)
```
## how to compile the program?
task 0 : gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
task 1: gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-heap_insert.c 0-binary_tree_node.c -o 1-heap_insert
