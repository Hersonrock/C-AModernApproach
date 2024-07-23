CC=gcc
CFLAGS=-std=c2x -Wall -g
#----ProgramName----#
NAME=main
#----Dependencies---#
DEP1=fileio
DEP2=generator
DEP3=test
DEP4=quick_bari
#------------#
IDIR=./include
DEPS=$(IDIR)/$(DEP1).h $(IDIR)/$(DEP3).h
OBJ=./src/main.o ./src/$(DEP1).o ./src/$(DEP2).o ./src/$(DEP3).o \
    ./src/$(DEP4).o 


%.o:%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -I$(IDIR)

./bin/$(NAME): $(OBJ)
	$(CC) -o $@.out $^

clean:
	rm -rf ./bin/$(NAME).out ./src/*.o

