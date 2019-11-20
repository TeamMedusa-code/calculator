#include <stdio.h>
#include <stdlib.h>

int* inputs();

int main(void){
	for (;;){
		printf("~~ Medusa calculator ~~\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		printf("Enter choice\n>> ");
		
		int choice;
		if (!scanf("%d", &choice)){
			printf("Invalid input.\n");
			return 0;
		}
            
		if (choice == 5);
				return 0;

		int* values = inputs();
		switch (choice){
			case 1:
				printf("Answer: %d\n", values[0]+values[1]);
				break;
			case 2:
				printf("Answer: %d\n", values[0]-values[1]);
				break;
			case 3:
				printf("Answer: %d\n", values[0]*values[1]);
				break;		
			case 4:
				printf("Answer: %d\n", values[0]/values[1]);
				break;
			default:
				printf("Invalid input\n");
		}
	}
	return 0;


int* inputs(){
	int* numbers = malloc(sizeof(int)*2);
	printf("Enter number 1\n>> ");
	scanf("%d", &numbers[0]);
	printf("Enter number 2\n>> ");
	scanf("%d", &numbers[1]);
	return numbers;
}
