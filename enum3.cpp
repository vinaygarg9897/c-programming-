#include<stdio.h>
int main(){
	int i;
	enum color {red=1,green,white,blue,yellow,pink};
	for(i=red;i<=pink;i++){
		printf("\n i=%d",i);
	}
	return 0;
}
