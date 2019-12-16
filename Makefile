OBJ-M 	= clr.o
SRC		= clr_vrt.c
HEADER	= clr_vrt.h
CC		= gcc
FLAGS	= -c

all:
	$(CC) $(FLAGS) $(SRC) -o $(OBJ-M)

clean:
	rm -f $(OBJ-M)


