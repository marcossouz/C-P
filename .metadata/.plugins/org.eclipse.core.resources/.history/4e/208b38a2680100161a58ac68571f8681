#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cp.h"
#define INTERV 400
#define COMP 200

int main()
{
    int i, x;
    //printf("intervalo da rand: [0,%d]\n", RAND_MAX);
    srand( (unsigned)time(NULL) );
    
    Binarytree *newNode = NULL;
    Binarytree *bt = NULL;
    node *treeAVL = NULL;
    Node *list = NULL;
   
    
    FILE *f = fopen("inR.txt", "w");
    if(f == NULL)
    {
        printf("ERRO AO TENTAR CRIAR ARQUIVO\n");
        exit(1);
    }


    int j;
    for(j=1; j <= COMP; j++ )
    {

        for(i=1 ; i <= j ; i++)
        {
            //x = 1 + rand() % INTERV ;
        	//x = i;
        	x = j; //caso extremo
            newNode = createNewNode(x);
            bt = insertNode(bt, newNode);
            treeAVL = insert(x, treeAVL);
            list = insertNodeList(list, x);
        }


    //printBinaryTree(bt);
   // printf("\n");
    //printAVL(treeAVL);

		//x = 1 + rand() % INTERV ;
        x = 500;

		int s = 0, q = 0, r = 0;

		s = searchNode(bt, x, &s);
		q = find(x, treeAVL, &q);
		r = search(list, x);

		fprintf(f, "%d %d %d %d\n", j, s, q, r);
		//printf("\nx: %d\ncomparacoes BinaryTree: %d\n", x, s);
		//printf("comparacoes AVL: %d\n", q);
		//printf("comparacoes linkedList: %d\n", r);


    }

    printf("Arquivo gerado com sucesso!...\n");
    return 0;
}
