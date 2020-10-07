#include "todo.h"

int main(int argc, char *argv[]){
	char Text[250][250];
	int i_buf[250] = {0};
	while(1){
	
	int enter;
	
	setlocale(LC_ALL,"RUSSIAN");
		printf("	Ваш личный блокнот\n");
	printf("Нажмите одну из клавиш для дальнейшей работы: \n");
	printf("1)Создание раздела\n2)Редактирование разделов\n3)Сохранить разделы\n4)Загрузить разделы\n");
	
	
	
	int n;
	scanf("%d",&enter);
	switch(enter){
		case 1:
			
			printf("Создайте номер раздела: ");
			scanf("%d",&n); 
			i_buf[n] = add_chapter(Text,n);
			break;
		case 2:
			printf("Введите номер раздела(");
			for(int i = 0; i < 250;i++){
				if(i_buf[i] != 0){
					printf("%d ",i);
				}
			printf("):");
			scanf("%d",&n);
			for(int i = 0; i < i_buf[n]; i++){
				printf("%c",Text[n][i]);
			}	
			i_buf[n] = edit(Text,n,i_buf[n]);
			break;
			}

		case 3:
	    	    save(Text,i_buf);
		    break;
		case 4:
	    	    load(Text,i_buf);
		    break;
	}
}
	
	return 0;
}
