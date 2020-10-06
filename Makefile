.PHONY: all clean

OBJ      = build/src/main.o build/src/todo.o 
LINKOBJ  = build/src/main.o build/src/todo.o
FLAG = -Wall
all : bin/todo

clean: 
	rm -rf $(BIN) build/src/*.o  
bin/todo: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/todo

build/src/main.o: 
	gcc $(FLAG)  -std=c99 -c build/src/main.c -o build/src/main.o 

build/src/todo.o: 
	gcc $(FLAG)   -std=c99  -c build/src/todo.c -o build/src/todo.o 
