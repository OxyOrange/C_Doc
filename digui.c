#include <stdio.h>


long double factorial(unsigned int i){

	if (i <= 1){
		return 1;
	}else{
		return i * factorial(i - 1);
	}
}

int main(){
	int i;
	scanf("%d",&i);
	printf("%d的阶乘为:%Lf\n",i,factorial(i));	

	return 0;
}
