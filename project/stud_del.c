#include "student.h"

void del_roll(SLL **ptr, int rollno){

	SLL *del = *ptr, *prev;

	if(del != 0 && del -> rollno == rollno){
	
		*ptr = del -> next;

		free(del);

		success("Data Deleted");

		return;	
	}

	while(del != 0 && del -> rollno != rollno){
		
		prev = del;

		del = del -> next;	
	}

	if(del == 0){
	
		printf("\033[31;1m\nNo record found that with that roll number \n\033[0m");
		
		return;
	}

	prev -> next = del -> next;

	free(del);

	success("Data deleted");

}


void stud_del(SLL **ptr){

	if(*ptr == 0){
	
		printf("\033[31;1m\nNo records found\n\033[0m");
		
		return;
	}

	char c;

	char name[20];

	printf("\n\033[32;1mR/r Enter rollno to delete  \n\nN/n Enter name to delete  \n\n\033[0m");

	printf("\n\033[33mEnter your choice : \033[0m");

	scanf(" %c", &c);

	if(c == 'r' || c == 'R'){
	
		int rollno;

		printf("\n\033[33;1mEnter the roll number to delete : \033[0m");

		scanf(" %d", &rollno);

		del_roll(ptr, rollno);
	}

	else if(c == 'n' || c == 'N'){
	
		printf("\033[33;1m\nEnter the name to delete : \033[0m");

		scanf(" %[^\n]", name);

		SLL *del = *ptr;

		int count = 0;

		while(del != 0){
		
			if(strcmp(del -> name, name) == 0){
			
				count++;
			}

			del = del -> next;
		
		}

		del = *ptr;

		if(count == 0){
		
			printf("\033[31;1m\nNo record found with that name\n\033[0m");

			return;
		}

		else if(count == 1){
		
			while(del != 0){
			
				if(strcmp(del -> name, name) == 0){
				
					del_roll(ptr, del -> rollno);			
				}

			del = del -> next;

			}
		}


		else if(count > 1){

			del = *ptr;

			while(del != 0){

                        	if(strcmp(del -> name, name) == 0){

                                printf("\033[35;2m\n%d\t%s\t%f\n\033[0m", del -> rollno, del -> name, del -> marks);

                                count++;

                        	}

        	                del = del -> next;

	                }


			int rollno;

			printf("\033[33;1m\nEnter the roll number from the list to delete : \033[0m");

			scanf(" %d", &rollno);

			del_roll(ptr, rollno);	
		}
			
}

	else{
	
		printf("\033[31;5m\nInvalid option\n\033[0m");
	
	}

}






























