#include "student.h"

void stud_save(SLL *ptr){

	FILE *fp;

        fp = fopen("student.dat", "w");

	if(fp == 0){
	
		printf("\nError while opening file \n");	
	}

	while(ptr){

		fprintf(fp,"%d\t%s\t%f\n", ptr -> rollno, ptr -> name, ptr -> marks);

		ptr = ptr -> next;

	}

	fclose(fp);

	success("Successfully saved");
}
