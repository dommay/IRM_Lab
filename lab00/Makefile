# when running make, all programs are generated
all: sum_numbers hello_world manipulate_two_numbers

# compile hello_world.c and make executable program
hello:
	gcc -o hello_world hello_world.c

# linking of sum_numbers.o with functions.o
sum_numbers: sum_numbers.o functions.o
	gcc sum_numbers.o functions.o -o sum_numbers

# compile sum_numbers.c
sum_numbers.o: sum_numbers.c
	gcc -c sum_numbers.c

# linking of manipulate_two_numbers.o with functions.o
manipulate_two_numbers: manipulate_two_numbers.o functions.o
	gcc manipulate_two_numbers.o functions.o -o manipulate_two_numbers

# compile manipulate_two_numbers.c
manipulate_two_numbers.o: manipulate_two_numbers.c
	gcc -c manipulate_two_numbers.c

# compile functions.c
functions.o: functions.h functions.c
	gcc -c functions.c

# remove generated files and programs
clean:
	rm functions.o sum_numbers.o manipulate_two_numbers.o sum_numbers hello_world
