#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	arv *r = NULL;        
	r = insere(r, 15);
	r = insere(r, 10);
	r = insere(r, 8);
	r = insere(r, 20);
	r = insere(r, 12);

	printa_com_indices_a(r);
	printf("\n\n");
	printa_com_indices_b(r);
}
