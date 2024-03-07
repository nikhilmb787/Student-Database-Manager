#include "student.h"

void read_file(SLL **ptr) {

    FILE *fp = fopen("student.dat", "r");

    if(fp == NULL){

        printf("Student database not present\n");

        return;
    }

   
    int max_rollno = 0;

    while(!feof(fp)){

        SLL *new = malloc(sizeof(SLL));

        if(new == 0) {

            printf("Memory allocation failed\n");

            fclose(fp);

            return;
        }

        if(fscanf(fp, "%d\t%s\t%f\n", &new->rollno, new->name, &new->marks) != 3) {

            free(new);

            break;
        }

        if(new -> rollno > max_rollno){

            max_rollno = new->rollno;
        }

        new -> next = 0;

        if(*ptr == NULL)

            *ptr = new;

        else{

            SLL *last = *ptr;

            while (last->next)

                last = last->next;

            last->next = new;
        }
    }

 
    fclose(fp);

 
    SLL *temp = *ptr;

    while(temp != NULL){

        if(temp -> rollno > max_rollno){

            max_rollno = temp -> rollno;
        }

        temp = temp->next;
    }

	int rollno = max_rollno;
}

