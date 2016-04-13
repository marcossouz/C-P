/* list.c */
#include <stdlib.h>
#include <stdio.h>
#include "cp.h"

struct node
{
    int item;
    struct node *nextNode;
};

int subconj(Node *l1, Node *l2)
{
    int a;
    Node *p, *pp;
    for(p = l1; p != NULL; p = p->nextNode)
    {
        a = 0;
        for(pp = l2; pp != NULL; pp = pp->nextNode)
        {

            if( p->item == pp->item)
            {
                a = 1;
            }
        }
    }
    return a;
}

Node* createLinkedList()
{
    return NULL;
}

int isEmpty(Node *first)
{
    return(first == NULL);
}

Node* insertNodeList(Node *first, int item)
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->item = item;
    newNode->nextNode = first;
    return newNode;
}

void printLinkedList(Node *first)
{
    Node *p;
    for(p = first; p != NULL; p = p->nextNode)
    {
        printf("%d ", p->item);
    }
}

int search(Node *first, int item)
{
	int x = 0;
	while (first != NULL)
	{
		x++;
		if (first->item == item)  return x;
		first = first->nextNode;
    }
	return x;
}

int main()
{
    int i, j, x, interv, qtest;
    srand( (unsigned)time(NULL) );

    Node *list = NULL;

    printf("Intervalo de sorteio( 1 ~ N )\nN: ");
    scanf("%d", &interv);
    printf("Quantidade de teste: ");
    scanf("%d", &qtest);
    printf("---------------------\n");

    for(j=1; j <= qtest; j++ )
    {

        for(i=1 ; i <= j ; i++)
        {
            //x = 1 + rand() % interv ;
            x = i;
            //x = j; //caso extremo

            list = insertNodeList(list, x);
        }


        int  r = 0;

        x = 1 + rand() % interv ;
        r = search(list, x);

        printLinkedList(list);
        printf("\nx: %d\n", x);
        printf("comparacoes linkedList: %d\n\n", r);


    }


    return 0;
}
