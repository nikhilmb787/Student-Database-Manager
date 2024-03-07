#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<unistd.h>

typedef struct student {

	int rollno;

	char name[20];

	float marks;

	struct student *next;

}SLL;

void stud_add(SLL **);

void stud_disp(SLL *);

void stud_del(SLL **);

void stud_mod(SLL **);

void stud_save(SLL *);

void read_file(SLL **);

void stud_sort(SLL *);

void stud_del_all(SLL **);

void stud_reverse(SLL **);

int count_node(SLL *);

void success(const char *);
