INCL = -I../include
FLAGS = -c -O3
OBJS = ../obj
EXTRA = 
cc = gcc

all: tshtest tsh

tshtest: tshtest.c 
	$(cc) $(EXTRA) $(INCL) -g -o tshtest tshtest.c -L$(OBJS) -lsng

tsh: tsh.c operations.o built_ins.o non_built_in_parsing.o helpers.o process_node.o
	$(cc) $(EXTRA) $(INCL) -g -o tsh tsh.c operations.o built_ins.o non_built_in_parsing.o helpers.o process_node.o -L$(OBJS) -lsng

operations.o: operations.c
	$(cc) $(FLAGS) $(INCL) -o operations.o operations.c

helpers.o: helpers.c
	$(cc) $(FLAGS) $(INCL) -o helpers.o helpers.c

built_ins.o: built_ins.c
	$(cc) $(FLAGS) $(INCL) -o built_ins.o built_ins.c

non_built_in_parsing.o: non_built_in_parsing.c
	$(cc) $(FLAGS) $(INCL) -o non_built_in_parsing.o non_built_in_parsing.c

process_node.o: process_node.c
	$(cc) $(FLAGS) $(INCL) process_node.c

clean:
	rm tshtest tsh *.o