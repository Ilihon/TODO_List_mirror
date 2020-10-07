#include "todo.h"


int add_chapter(char Texts[250][250], int N){

	int I;
	printf("Пишите(нажмите '-' чтобы выйти): ");
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

	printf("Пишите(нажмите '-' чтобы выйти): ");

	for(; i < 250; i++){
		
		Texts[N][i] = getchar();
		if(Texts[N][i] == '-') {
		    I = i;
		    break;
		}
	}
	return I;
	
	
}
int save(char Texts[250][250],int i_buf[250]){
	FILE *fp;
	char name[] = "Save_Text.txt";
	  if ((fp = fopen(name, "w")) == NULL){
    	printf("Not open File");
    	getchar();
	return 1;
  	  }			
	 for(int i = 0; i < 250;i++){
		if(i_buf[i] != 0){
			fprintf(fp,"\n%d %d",i,i_buf[i]);
			for(int j = 0; j < i_buf[i]; j++)
				fprintf(fp,"%c",Texts[i][j]);
		}
	}
	fclose(fp);
	return 0;
	
}
int load(char Texts[250][250],int i[250]){
		FILE *fp;
		int n;
	char name[] = "Save_Text.txt";
	  if ((fp = fopen(name, "r")) == NULL){
    	printf("Not open File");
    	getchar();
	return  1;	
  	  }
				
	 for(int k = 0; k < 250;k++){
		fscanf(fp,"%d",&n);
		fscanf(fp,"%d",&i[n]);
		for(int j = 0; j < i[n]; j++){
			fscanf(fp,"%c",&Texts[n][j]);
		}
	}
	
	fclose(fp);
	return 0;
}
