.PHONY: all clean

OBJ      = build/src/main.o build/src/todo.o 
LINKOBJ  = build/src/main.o build/src/todo.o
FLAG = -Wall
all : bin/todo
test  : bin/todo-test
clean: 
	rm -rf build/src/*.o
	rm -rf build/test/*.o   
	rm -rf build/test/*.d


run:
	bin/./todo
testing:
	bin/./todo-test
    
bin/todo: $(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/todo
	
bin/todo-test: build/test/todo.o build/test/test-main.o build/test/test.o
	gcc $(FLAG)   build/test/todo.o build/test/test-main.o build/test/test.o -o bin/todo-test


build/src/main.o: 
	gcc $(FLAG)  -std=c99 -c build/src/main.c -o build/src/main.o 

build/src/todo.o: 
	gcc $(FLAG)   -std=c99  -c build/src/todo.c -o build/src/todo.o 
-include build_test/*.d

build/test/todo.o: 
	gcc $(FLAG)   -I thirdparty -I build/src -std=c99 -c build/src/todo.c -MMD  -o build/test/todo.o 
build/test/test-main.o:
	gcc $(FLAG)    -I thirdparty -I build/src -std=c99  -c build/test/main-test.c -MMD  -o build/test/test-main.o 
build/test/test.o:
	gcc $(FLAG)   -I thirdparty -I build/src -std=c99 -c build/test/test.c -MMD -o build/test/test.o
