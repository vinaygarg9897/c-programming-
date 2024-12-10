#include<stdio.h>
int main(){
	enum color{red=1,green,white,blue=1,yellow,pink};
	printf("\n red=%d",red);
	printf("\n green=%d",green);
	printf("\n white=%d",white);
	printf("\n blue=%d",blue);
	printf("\n yellow=%d",yellow);
	printf("\n pink=%d",pink);

	return 0;
}
