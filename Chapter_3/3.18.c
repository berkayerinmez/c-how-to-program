#include <stdio.h>
#include <stdlib.h>

int main() {

	float b, tCh,tCr, cL, cLC;
	int aN;

	while (aN != -1){
		printf("Enter account number (-1 to end): ");
		scanf("%d", &aN);

		if(aN == -1)
			return 0;

		printf("Enter beginning balance: ");
		scanf("%f", &b);

		printf("Enter total charges: ");
		scanf("%f", &tCh);

		printf("Enter total credits: ");
		scanf("%f", &tCr);

		printf("Enter total credit limit: ");
		scanf("%f", &cL);

		cLC = b + tCh - tCr;

		if (cLC > cL){
			printf("Account: 		%d\n", aN);
			printf("Credit limit:	%.2f\n",cL);
			printf("Balance 		%.2f\n", cLC);
			printf("Credit Limit Exceeded.\n");
		}	
	}
}
