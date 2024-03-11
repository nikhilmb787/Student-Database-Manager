#include "student.h"

int main(){

	char choice, op;

	SLL *headptr = 0;

	read_file(&headptr);

	while(1){
	
		printf("\n\033[36;1m---------------------------------------------------------------------------------------\n");
 		printf("|										      |\n");
   		printf("|       *****STUDENT RECORD MENU*****						      |\n");
    		printf("|-------------------------------------------------------------------------------------|\n");
  	        printf("|                                                                                     |\n");
    		printf("|	a/A	: add new record						      |\n");
		printf("|										      |\n");
   		printf("|	d/D 	: delete a record						      |\n");
       	        printf("|                                                                                     |\n");
    		printf("|	s/S	: show the list							      |\n");
                printf("|                                                                                     |\n");
   		printf("|	m/M 	: modify the record						      |\n");
    	        printf("|                                                                                     |\n");
   		printf("|	v/V     : save								      |\n");
  	        printf("|                                                                                     |\n");
    		printf("|\033[0m\033[31;1m	e/E	: exit	\033[0m			\033[36;1m			 	      |\n");
	        printf("|	                                                                              |\n");
   		printf("|	t/T	: sort the list							      |\n");
 	        printf("|                                                                                     |\n");
   		printf("|	l/L 	: delete all the records					      |\n");
	        printf("|                                                                                     |\n");
   		printf("|	r/R	: reverse the list						      |\n");
    		printf("|										      |\n");
    		printf("|	     		 							      |\n");
   		printf("---------------------------------------------------------------------------------------\n\n\033[0m");
		printf("\n");

	printf("\n\033[33mEnter your choice : \033[0m");

	scanf(" %c", &choice);

	printf("\n");

	switch(choice){
	
		case  'a' :
		       
		case  'A' : stud_add(&headptr); break;

		case  'd' : 

		case  'D' : stud_del(&headptr); break;
	
		case  's' : 

		case  'S' : stud_disp(headptr); break;

		case  'm' : 

		case  'M' : stud_mod(&headptr); break;

		case  'v' : 

		case  'V' : stud_save(headptr); break;

		case  't' : 

		case  'T' : stud_sort(headptr); break;

		case  'l' : 

		case  'L' : stud_del_all(&headptr); break;

		case  'r' :

		case  'R' : stud_reverse(&headptr); break;

		case  'e' : 

		case  'E' : printf("\033[32;1m\nS/s : Save and exit\nN/n : exit without saving\n\033[0m");

                            printf("\033[33;1m\nEnter the choice : \033[0m");

                            scanf(" %c", &op);

                            if(op == 's' || op == 'S'){

                                stud_save(headptr);

				success("Saved and successfully exited \xF0\x9F\x98\x8A ");

			    }
				
			    else if(op == 'n' || op == 'N'){
			
           		    	success("Successfully exited \xF0\x9F\x98\x8A");

			    }

			    else 
				    printf("\033[31;5m\nInvalid option\n\033[0m");

                            exit(0);	

		default : printf("\033[31;1;5mInvalid choice\n\033[0m");
	}

	}
	
	return 0;
}
