#include "stdio.h"
#include "todo.h"
#include"ctest.h"

CTEST(check_save_files,as){
	char Text[250][250];
	int check;
	int i_buf[250] = {0};
	i_buf[1] = add_chapter(Text,1);
	check = save(Text,i_buf);
	ASSERT_EQUAL(0,check);
}
CTEST(check_load_files,sa){
	char Text[250][250];
	int i_buf[250] = {0};
	int check = load(Text,i_buf);
	ASSERT_EQUAL(0,check);
}
CTEST(Check_load_Texts,as){
	char Text[250][250];
	int i_buf[250] = {0};
	int check = 1;
	load(Text,i_buf);
	for(int i = 0; i < 250; i++){
		if(i_buf[i] != 0) check = 0;
	}
	ASSERT_EQUAL(0,check);
}
