#include <stdio.h>
#include <stdlib.h>

struct NODE {
	int number;
	struct NODE *next;
	struct NODE *prev;
};


int  search_value(struct NODE *llist, int num);
void append_node_next(struct NODE *llist, int num);
void append_node_prev(struct NODE *llist, int num);
void display_list(struct NODE *llist);
void delete_node(struct NODE *llist, int num);
void join_list(struct NODE *llist1, struct NODE *llist2);



int main(void) {
	int num = 0;
	int input = 1;
	int retval = 0;
	struct NODE *llist1;
	struct NODE *llist2;
	int nlist;


	llist1 = (struct NODE *)malloc(sizeof(struct NODE));
	llist1->number = 0;
	llist1->next = NULL;
	llist1->prev=NULL;
    llist2 = (struct NODE *)malloc(sizeof(struct NODE));
	llist2->number = 0;
	llist2->next = NULL;
	llist2->prev=NULL;

	while(input != 0) {
		printf("\n-- Menu Selection --\n");
		printf("0) Quit\n");
		printf("1) Insert at END\n");
		printf("2) Delete\n");
		printf("3) Search\n");
		printf("4) Display\n");
		printf("5) Insert FIRST\n");
		scanf("%d", &input);

		switch(input) {
			case 0:
			default:
				printf("Goodbye ...\n");
				input = 0;
				break;
			case 1:
				printf("Your choice: `Insertion END'\n");
				printf("Enter the value which should be inserted: ");
				scanf("%d", &num);
				printf("En cual lista quieres hacer la inserccion(en la lista 1 o 2?\n");
				scanf("%d", &nlist);
				if(nlist==1){append_node_next(llist1, num);}else{
				if(nlist==2){append_node_next(llist2, num);}else {printf("\nLa lista %d no existe",nlist);}}
				break;
			case 2:
				printf("Your choice: `Deletion'\n");
				printf("Enter the value which should be deleted: ");
				scanf("%d", &num);
                printf("En cual lista quieres hacer la eliminacion de un nodo?(en la lista 1 o 2)\n?");
				scanf("%d", &nlist);
				if(nlist==1){delete_node(llist1, num);}
				if(nlist==2){delete_node(llist2, num);}else {printf("\nLa lista %d no existe",nlist);}
				break;
			case 3:
				printf("Your choice: `Search'\n");
				printf("Enter the value you want to find: ");
				scanf("%d", &num);

                printf("En cual lista quieres hacer la busqueda de un nodo?(en la lista 1 o 2)\n?");
				scanf("%d", &nlist);
				if(nlist==1)
				{   if((retval = search_value(llist1, num)) == -1)
					printf("Value `%d' not found\n", num);
                    }else
                    {printf("Value `%d' located at position `%d'\n", num, retval);}
				if(nlist==2)
				{	if((retval = search_value(llist1, num)) == -1)
					printf("Value `%d' not found\n", num);
                    }else
                    {printf("Value `%d' located at position `%d'\n", num, retval);}
				break;
			case 4:
				printf("You choice: `Display'\n");
                printf("En cual lista quieres hacer la inserccion(en la lista 1 o 2?\n");
				scanf("%d", &nlist);
				if(nlist==1){display_list(llist1);}else{
				if(nlist==2){display_list(llist2);}else {printf("\nLa lista %d no existe",nlist);}}
				break;
			case 5:
				printf("Your choice: `Insertion FIRST'\n");
				printf("Enter the value which should be inserted: ");
				scanf("%d", &num);

                printf("En cual lista quieres hacer la inserccion(en la lista 1 o 2?\n");
				scanf("%d", &nlist);
				if(nlist==1)
                {append_node_prev(llist1, num);
				llist1=llist1->prev;
				printf("Primer elemento:%d\n",llist1->number);}
				if(nlist==2)
				{append_node_prev(llist2, num);
				llist2=llist2->prev;
				printf("Primer elemento:%d\n",llist2->number);}else {printf("\nLa lista %d no existe",nlist);}
				break;
            case 6:
                join_list(llist1,llist2);
                break;

		} /* switch */
	} /* while */

	free(llist1); //Esta mal la liberación de la memoria
	free(llist2); //Con ese codigo solo eliminas un nodo no
	return(0);	  //Toda la lista
}

/*En esta funcion tienes un paso de parametros por referencia
por lo que si en tu while le cambias algo a ese parametro, 
tambien lo cambias en el resto de tu programa, por lo que ya
perdiste el puntero a tu promer nodo de la lista.*/

void display_list(struct NODE *llist) {
	while(llist->next != NULL) {
		printf("%d ", llist->number);
		llist = llist->next;
	}

	printf("%d", llist->number);
}

void append_node_next(struct NODE *llist, int num) {
	while(llist->next != NULL)
		llist = llist->next;

	llist->next = (struct NODE *)malloc(sizeof(struct NODE));
	llist->next->number = num;
	llist->next->next = NULL;
	llist->next->prev = llist;
}

void append_node_prev(struct NODE *llist, int num){
	llist->prev = (struct NODE *)malloc(sizeof(struct NODE));
	llist->prev->number = num;
	llist->prev->next = llist;

	//printf("Primer elemento:%d\n",llist->number);
	//printf("Segundo elemento:%d\n",llist->next->number);
}


/*Tu función es redundante y de verdad funcionó? porque al menos en el if el temp
esta incompleto y en el while lo mandas a un nodo que no es.*/
void delete_node(struct NODE *llist, int num) {
	struct NODE *temp;
	temp = (struct NODE *)malloc(sizeof(struct NODE));

	if(llist->number == num) {
		/* remove the node */
		temp = llist->next;
		free(llist);
		llist = temp;
		llist->prev=NULL;
	} else {
		while(llist->next->number != num)
			llist = llist->next;

		temp = llist->next->next;
		temp->prev=llist;
		free(llist->next);
		llist->next = temp;
	}
}

/*Volvemos a lo mismo de que pierdes la dirección del primer nodo*/
int search_value(struct NODE *llist, int num) {
	int retval = -1;
	int i = 1;

	while(llist->next != NULL) {
		if(llist->next->number == num)
			return i;
		else
			i++;

		llist = llist->next;
	}

	return retval;
}
void join_list(struct NODE *llist1, struct NODE *llist2)
{
    /*int num=0;
    llist1->prev = (struct NODE *)malloc(sizeof(struct NODE));
	llist1->prev->number = llist2->number;*/
	struct NODE *ptr;
	ptr = llist1;			//Se crea el auxiliar para no perder la direccion del primer nodo
	while(ptr -> next != NULL)
	{
		ptr = ptr -> next;	//Recorremos hasta el final de la lista SIN perder la dirección del primer nodo
	}
	ptr -> next = llist2;	//Actualizamos valores
	llist2 -> prev = ptr;	//Actualizamos valores

	return;
}

