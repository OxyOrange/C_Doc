#include <stdio.h>
#include <string.h>

int main(){

	//在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
	//C 编译器会在初始化数组时，自动把 '\0' 放在字符串的末尾

	char str1[12] = "hello";
	char str2[12] = "world";
	char str3[12];
	int len;
        
	printf("str1Position:%x\n str2Position:%x\n str3Position:%x\n",*str1,*str2,*str3);


	strcpy(str3,str1);
	printf("str3:%s\n",str3);    
	
	strcat(str1,str2);
	printf("strcat(str1,str2):%s\n",str1);

	printf("len:%ld\n",strlen(str1));	
	return 0;
}
