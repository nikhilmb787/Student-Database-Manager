cc = gcc

outfile: student.o stud_add.o stud_disp.o stud_del.o stud_mod.o stud_save.o stud_sort.o message.o stud_del_all.o stud_reverse.o stud_read.o
	$(CC) -o student student.o stud_add.o stud_disp.o stud_del.o stud_mod.o stud_save.o stud_sort.o message.o stud_del_all.o stud_reverse.o stud_read.o

student.o: student.c
	$(CC) -c student.c

stud_disp.o: stud_disp.c
	$(CC) -c stud_disp.c

stud_add.o: stud_add.c
	$(CC) -c stud_add.c

stud_del.o: stud_del.c
	$(CC) -c stud_del.c

stud_mod.o: stud_mod.c
	$(CC) -c stud_mod.c

stud_save.o: stud_save.c
	$(CC) -c stud_save.c

stud_sort.o: stud_sort.c
	$(CC) -c stud_sort.c

message.0: message.c
	$(CC) -c message.c

stud_del_all.o: stud_del_all.c
	$(CC) -c stud_del_all.c

stud_reverse.o: stud_reverse.c
	$(CC) -c stud_reverse.c

stud_read.o: stud_read.c
	$(CC) -c stud_read.c

clean:
	rm -f *.o outfile
