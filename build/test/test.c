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
