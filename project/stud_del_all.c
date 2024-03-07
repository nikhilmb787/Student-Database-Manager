#include "student.h"

void stud_del_all(SLL **ptr){

	if(*ptr == 0){
	
		printf("\nNo records found\n");

		return;	
	}

	SLL *del = *ptr;

	while(del){
	
		*ptr = del -> next;

		success("Node deleted");

		free(del);

		del = *ptr;	
	}

	success("All the records deleted");
}
