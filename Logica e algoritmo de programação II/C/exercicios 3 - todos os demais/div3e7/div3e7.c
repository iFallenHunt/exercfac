#include <stdio.h>

int main(){
	int i;
	for (i = 1; i <= 30; i++){
	if (i%3==0)
		printf("\no numero %d e divisivel por 3\n", i);
	if (i%7==0)
		printf("\no numero %d e divisivel por 7\n", i);
	}
}