#include "student.h"

void stud_reverse(SLL **ptr){

	if(*ptr == 0){
	
		printf("\nNo records found\n");
	
		return;
	}


int c = count_node(*ptr);

	if(c > 1){

		SLL **p, *t = *ptr;

		p = malloc(sizeof(SLL *)*c);

		int i = 0;

		while(t){
	
			p[i++] = t;

			t = t -> next;	
		}

		for(i = 0; i < c; i++)

			p[i] -> next = p[i - 1];

		p[0] -> next = 0;

		*ptr = p[c - 1];
	}

}
