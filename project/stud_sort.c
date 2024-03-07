#include "student.h"

int count_node(SLL *ptr){

	int c = 0;

	while(ptr){
	
		c++;

		ptr = ptr -> next;	
	}

	return c;
}

void stud_sort(SLL *ptr){

	if(ptr == 0){
	
		printf("\nNo records found\n");

		return;	
	}



	SLL *p1 = ptr, *p2, t;

	int i, j, c = count_node(ptr);
	
	char choice;

	printf("\033[34;1m\nE/e : sort with name\n\nP/p : sort with percentage\n\nEnter your choice : \033[0m");
	
	scanf(" %c", &choice);

	for(i = 0; i < c - 1; i++){
	
		p2 = p1 -> next;

		for(j = 0; j < c - 1 - i; j++){

			if(choice == 'P' || choice == 'p'){
		
				if(p1 -> marks < p2 -> marks){
			
					t.rollno = p1 -> rollno;
	
					strcpy(t.name, p1 -> name);

					t.marks = p1 -> marks;


					p1 -> rollno = p2 -> rollno;

					strcpy(p1 -> name, p2 -> name);

					p1 -> marks = p2 -> marks;

				
					p2 -> rollno = t.rollno;

					strcpy(p2 -> name, t.name);

					p2 -> marks = t.marks;
			
				}

				success("Sorting completed");

			}

			else if(choice == 'E' || choice == 'e'){

				if((strcmp(p1 -> name, p2 -> name) > 0)){

                                        t.rollno = p1 -> rollno;

                                        strcpy(t.name, p1 -> name);

                                        t.marks = p1 -> marks;


                                        p1 -> rollno = p2 -> rollno;

                                        strcpy(p1 -> name, p2 -> name);

                                        p1 -> marks = p2 -> marks;


                                        p2 -> rollno = t.rollno;

                                        strcpy(p2 -> name, t.name);

                                        p2 -> marks = t.marks;		

				}	
			}
			
			else{
			
				printf("\033[31;5m\nInvalid option\033[0m\n");

				return;
			
			}

			p2 = p2 -> next;
		}	
		
		p1 = p1 -> next;
			
	}

	 success("Sorting completed");
}
