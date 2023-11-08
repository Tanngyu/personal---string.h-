#include <stdio.h>
#include "string.h"

int main() {

	char str_1[50] = "hello,world";
	char str_2[50] = "hello,python";
	char str_3[50] = "ello123";

//	printf("%d\n",strlen(str_1));//返回字符串的长度

	printf("%s\n",str_1);
	printf("%s\n", str_2);
	printf("\n");
// 	strcpy(str_2, str_1);//将字符串2的值赋值给字符串1

//	strncpy(str_2, str_1, 8);//将字符串2的前8位值赋值给字符串1

//	strcat(str_1, str_2); //将字符串src连接到dext的末尾

//	strncat(str_1, str_2, 5); //将字符串src的前n个字符连接到dest的末尾


//	printf("%d\n" , strcmp(str_1, str_2)); //对比字符串

//	printf("%d\n", strncmp(str_1, str_2 , 8)); //对比字符串前n（在这里取8）个字符

//	printf("%c\n", *strstr(str_1, str_3));  //在str_1中寻找str_3，如果找到就返回第一个匹配值的指针


	printf("%s\n", str_1);
	printf("%s\n", str_2);
	

	return 0;
}