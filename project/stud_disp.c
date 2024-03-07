#include "student.h"

void stud_disp(SLL *ptr){

	if(ptr == 0){
	
		printf("\nNo records found\n\n");

		return;	
	}	

	system("clear");


	while(ptr){
	
		printf("\n\033[35;1m %5d\t%20s\t%10.3f \n\033[0m", ptr -> rollno, ptr -> name, ptr -> marks);

		ptr = ptr -> next;	
	}


}
