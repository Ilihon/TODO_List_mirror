#include "todo.h"


int add_chapter(char Texts[250][250], int N){

	int I;
	printf("Пишите(нажмите '\' чтобы выйти): ");
	for(int i = 0; i < 250; i++){

		Texts[N][i] = getchar();
		if(Texts[N][i] == '-') {
		    I = i;
		    break;
		}
	}
	return I;
}
