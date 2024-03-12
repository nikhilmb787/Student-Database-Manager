#include "student.h"

void stud_disp(SLL *ptr){

	if(ptr == 0){
	
		printf("\033[31;1m\nNo records found\033[0m\n\n");

		return;	
	}	

	system("clear");

	printf("\033[1m%-10s\t%-20s\t%-10s\n", "roll no", "name", "marks");

	while(ptr){
	
		    printf("\n\033[35;1m%-10d\t%-20s\t%-10.3f \n\033[0m", ptr -> rollno, ptr -> name, ptr -> marks);		

		ptr = ptr -> next;	
	}


}
