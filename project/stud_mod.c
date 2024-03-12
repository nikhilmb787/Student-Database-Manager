#include "student.h"

void stud_modify(SLL **ptr, int rollno){

	SLL *del = *ptr;

	int flag = 0;

	while(del != 0){
		
		if(del -> rollno == rollno){
		
			printf("\n\033[32;1mEnter the edited name : \033[0m");

			scanf(" %s", del -> name);

			printf("\n\033[32;1mEnter the edited marks : \033[0m");

			scanf(" %f", &del -> marks);

			system("clear");

			success("Data updated succesfully \xF0\x9F\x98\x84");

			flag = 1;

			break;		
		}

		del = del -> next;	
	}

	if(flag == 0)

		printf("\033[31;1m\nNo records found with this rollno  \U0001F641\033[0m\n");
}

void stud_mod(SLL **ptr){

	char c, name[20];

	int rollno, count = 0, temprollno;

	float marks;

	SLL *del = *ptr, *dup = *ptr;

	printf("\033[1m\nEnter which record to search for modification \033\n\n\033[32;1mR/r     : to search a rollno\n\nN/n     : to search a name \n\nP/p     : percentage based \n\033[0m");

	printf("\n\033[34mEnter the choice : \033[0m");
		
	scanf(" %c", &c);

	if(c == 'R' || c == 'r'){

		printf("\033[34m\nEnter the rollno : \033[0m");

		scanf(" %d", &rollno);
	
		stud_modify(ptr, rollno); 		
	}

	else if(c == 'N' || c == 'n'){

		int count = 0;

		printf("\n\033[34mEnter the name : \033[0m");

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

		else if (count == 0) 

			printf("\033[31;1m\nNo records found with this name  \U0001F641\033[0m\n");

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

		else if(count == 0)

			printf("\033[31;1m\nNo records found with this percentage \U0001F641\033[0m\n");

			

           }

	else

		printf("\033[31;5m\nInvalid option\n\033[0m");
}
