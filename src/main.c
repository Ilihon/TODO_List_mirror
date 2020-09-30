#include "todo.h"


int main(int argc, char *argv[]){
	char Text[250][250];
	int i_buf[250];
	while(1){
	
	int enter;
	
	setlocale(LC_ALL,"RUSSIAN");
		printf("	Ваш личный блокнот\n");
	printf("Нажмите одну из клавиш для дальнейшей работы: \n");
	printf("1)Создание раздела\n2)Редактирование разделов\n3)Сохранить разделы\n4)Сагрузить разделы\n");
	
	
	
	int n;
	scanf("%d",&enter);
	switch(enter){
		case 1:
			
			printf("Создайте номер раздела: ");
			scanf("%d",&n); 
			i_buf[n] = add_chapter(Text,n);
			break;
	}
}
	
	return 0;
}
