/*cp.h*/

typedef struct BinaryTree Binarytree;

Binarytree* createNewNode(int value);

Binarytree* insertNode(Binarytree *bt, Binarytree *newNode);

void printBinaryTree(Binarytree *bt);

int searchNode (Binarytree *bt, int value, int *x);


/*  AVL */
typedef struct node node;

void dispose(node* t);

int find(int e, node *t, int *y);

node* find_min( node *t );

node* find_max( node *t );

node* insert( int data, node *t );

node* delete( int data, node *t );

void display_avl(node* t);

int get( node* n );

void printAVL(node *bt);

/* Lista encadeada*/
typedef struct node Node;

int subconj(Node *l1, Node *l2);

Node* createLinkedList();

Node* insertNodeList(Node *node, int item);

void printLinkedList(Node *first);

int search(Node *first, int item);
