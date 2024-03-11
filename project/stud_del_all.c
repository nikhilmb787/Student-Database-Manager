#include "student.h"

void stud_del_all(SLL **ptr){

	if(*ptr == 0){
	
		printf("\033[31;1m\nNo records found\n\033[0m");

		return;	
	}

	SLL *del = *ptr;

	while(del){
	
		*ptr = del -> next;

		free(del);

		del = *ptr;	
	}

	success("All the records deleted");
}
