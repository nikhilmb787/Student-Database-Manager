#include "student.h"

void stud_add(SLL **ptr){

    SLL *new = malloc(sizeof(SLL));

    if(new == 0) {

        printf("\033[31mMemory allocation failed\n\033[0m");

        return;
    }

    printf("\033[33;1mEnter name: \033[0m");

    scanf(" %[^\n]", new -> name);

    printf("\n\033[33;1mEnter mark: \033[0m");

    scanf(" %f", &new->marks);

    new -> next = NULL;
    
    int roll_no= 0;

    SLL *temp = *ptr;

    while(temp != 0) {

        if(temp -> rollno > roll_no) {

            roll_no = temp -> rollno;
        }

        temp = temp -> next;
    }
    
    new->rollno = roll_no + 1;

    if(*ptr == 0)

        *ptr = new;

    else{

        SLL *last = *ptr;

        while(last->next)

            last = last->next;

        last->next = new;
    }
}

