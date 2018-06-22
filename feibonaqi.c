#include <stdio.h>

int feibonaqi(int i){
	if (i == 0){
		return 0;
	}
	if (i == 1){
		return 1;
	}
	int res_01 = feibonaqi(i - 1);
	int res_02 = feibonaqi(i - 2);

	return res_01 + res_02;
	
}


int main(){
	int i;
	scanf("%d",&i);
//	feibonaqi(i);
	for (int j=0;j<i;j++){
		printf("%d\n",feibonaqi(j));
	}	
	return 0;
}
