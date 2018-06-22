#include <stdio.h>

static int max(int num_01, int num_02){
	int result;
	if (num_01 > num_02){
		result = num_01;
	}else {
		result = num_02;
	}
	
	return result;
}

int main(){


	int res = max(10,34234);
	printf("%d\n",res);

	return 0;
}
