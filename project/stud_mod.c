#include "student.h"

void stud_modify(SLL **ptr, int rollno){

	SLL *del = *ptr;

	while(del != 0){
		
		if(del -> rollno == rollno){
		
			printf("\nEnter the edited name : ");

			scanf(" %s", del -> name);

			printf("\nEnter the edited marks : ");

			scanf(" %f", &del -> marks);

			system("clear");

			success("Data updated succesfully :)");

			return;
		
		}

		del - del -> next;	
	}

	printf("\nNo records found\n");
}

void stud_mod(SLL **ptr){

	char c, name[20];

	int rollno, count = 0, temprollno;

	float marks;

	SLL *del = *ptr, *dup = *ptr;

	printf("\nEnter which record to search for modification \n\n\033[32;1mR/r     : to search a rollno\n\nN/n     : to search a name \n\nP/p     : percentage based \n\033[0m");

	printf("\nEnter the choice : ");
		
	scanf(" %c", &c);

	if(c == 'R' || c == 'r'){

		printf("\nEnter the rollno : ");

		scanf(" %d", &rollno);
	
		stud_modify(ptr, rollno); 		
	}

	else if(c == 'N' || c == 'n'){

		int count = 0;

		printf("\nEnter the name : ");

		scanf(" %s", name);

		while(del){
		
			if((strcmp(del -> name, name)) == 0) {

				count++;

				rollno = del -> rollno;
			}

			del = del -> next;
		}

		if(count == 1)
			
			stud_modify(ptr, rollno);

		else if(count > 1){
				
			while(dup){

				if((strcmp(dup -> name, name)) == 0){

					printf("\n%d\t%s\t%f\n", dup -> rollno, dup -> name, dup -> marks);						
				}

				dup = dup -> next;
			}

			printf("\nEnter the rollno : ");

			scanf(" %d", &temprollno);

			stud_modify(ptr, temprollno);				
		}

		else if (count == 0)  printf("\nNo records found with this name\n");

	}

		
	else if(c == 'p' || c == 'P'){

                printf("\nEnter the marks : ");

                scanf(" %f", &marks);

                while(del){

                        if(del -> marks == marks) {

                                count++;

                                rollno = del -> rollno;
                        }

                        del = del -> next;
                }

                if(count == 1)

                        stud_modify(ptr, rollno);

                else if(count > 1){ 
 
                        while(dup){

                                if(dup -> marks == marks ){

                                        printf("\n%d\t%s\t%f\n", dup -> rollno, dup -> name, dup -> marks);
                                }

                                dup = dup -> next;
                        }

                        printf("\nEnter the rollno : ");

                        scanf(" %d", &temprollno);

                        stud_modify(ptr, temprollno);
                }

           }

	else

		printf("\033[31;5m\nInvalid option\n\033[0m");
}
