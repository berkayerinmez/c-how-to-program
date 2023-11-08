#include <stdio.h>

int main() {

	int uc[1000], dort[1000], bes[1000], arr1[1000], num = 1, ve1=0, ve2=0, ve3=0, ve4=0;

	while (num < 1000){
		if(num % 3 == 0){
			uc[ve1] = num;
			ve1++;
			num++;
		}
		else
			num++;
	}

	num=1;
	while(num<1000){
		if(num % 4 ==0){
			dort[ve2]= num;
			ve2++;
			num++;
		}
		else
			num++;
	}

	num = 1;
	while(num<1000){
		if( num % 5 == 0){
			bes[ve3] = num;
			ve3++;
			num++;
		}
		else
			num++;
	}
	num=1;
	while (num < 1000){
		if(num % 3 == 0 && num % 4 == 0 && num % 5 == 0){
			arr1[ve4] = num;
			ve4++;
			num++;
		}
		else
			num++;
	}

	printf("\n3'e bölünen sayılar: \n");
	for(int k=0; k<ve1; k++){
		printf("%d\n", uc[k]);
	}

	printf("\n4'e bölünen sayılar: \n");
	for(int k=0; k< ve2; k++)
		printf("%d\n", dort[k]);

	printf("\n5'e bölünen sayılar: \n");
	for(int k = 0; k<ve3; k++)
		printf("%d\n", bes[k]);

	printf("\nhem 3 hem 4 hem de 5'e bölünebilen sayılar: \n");
	for(int k=0; k < ve4; k++){
		printf("%d\n", arr1[k]);
	}


	return 0;
}
