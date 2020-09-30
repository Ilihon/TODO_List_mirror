.PHONY: all clean

OBJ      = build/src/main.o build/src/todo.o 
LINKOBJ  = build/src/main.o build/src/todo.o
FLAG = -Wall -Werror
all : bin/todo

clean: 
	rm -rf $(BIN) build/src/*.o  
bin/jizn: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/todo

build/src/main.o: src/main.c  
	gcc $(FLAG)  -std=c99 -c src/main.c -o build/src/main.o 

build/src/todo.o: src/todo.c
	gcc $(FLAG)   -std=c99  -c src/todo.c -o build/src/todo.o 
