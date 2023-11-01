#include <stdio.h>
#include <stdlib.h>

int main() {

	float usedGalon, miles, totalG, totalM;
	usedGalon = 0;

	while (usedGalon != -1){
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &usedGalon);

		if(usedGalon == -1){
				printf("The overrall avarage miles/gallon was %f\n", totalM/totalG);
				return 0;
		}

		printf("Enter the miles driven: ");
		scanf("%f", &miles);

		printf("The miles / gallon for this tank was %f\n", miles/usedGalon);

		totalG +=usedGalon;
		totalM += miles;
	}
}
