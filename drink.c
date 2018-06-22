#include <stdio.h>


//注：三个酒瓶可以兑一瓶酒
int drinks(i){
	if(i/3 <= 0){
		return 0;
	}

	return (i/3) + drinks(i/3 + i%3);
}


int main(){

	int i;
	scanf("%d",&i);

	printf("%d个酒瓶可以喝到%d瓶酒\n",i,drinks(i));
	return 0;
}
