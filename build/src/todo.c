#include "todo.h"


int add_chapter(char Texts[250][250], int N){

	int I;
	printf("Ïèøèòå(íàæìèòå '\' ÷òîáû âûéòè): ");
	for(int i = 0; i < 250; i++){
		
		Texts[N][i] = getchar();
		if(Texts[N][i] == '-') {
		    I = i;
		    break;
		}
	}
	return I;

	
}
int edit(char Texts[250][250],int N,int i){

	int I;
	printf("Ïèøèòå(íàæìèòå '\' ÷òîáû âûéòè): ");

	for(; i < 250; i++){
		
		Texts[N][i] = getchar();
		if(Texts[N][i] == '-') {
		    I = i;
		    break;
		}
	}
	return I;
	
	
}
void save(char Texts[250][250],int i_buf[250]){
	FILE *fp;
	char name[] = "Save_Text.txt";
	  if ((fp = fopen(name, "w")) == NULL){
    	printf("Not open File");
    	getchar();
    	return 0;
  	  }			
	 for(int i = 0; i < 250;i++){
		if(i_buf[i] != NULL){
			fprintf(fp,"\n%d %d",i,i_buf[i]);
			for(int j = 0; j < i_buf[i]; j++)
				fprintf(fp,"%c",Texts[i][j]);
		}
	}
	fclose(fp);
	
}
