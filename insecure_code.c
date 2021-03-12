
#include <stdio.h>
#include <string.h>


void secret() {
	puts("Welcome to the Secret Area! wait...you're not supposed to be here!");
}

int check_guess(char *guess) {

	if (strcmp("apple", guess) != 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	char name[25];
	char fruit[15];

	printf("Enter Your Name: ");
	gets(name);
	printf(name);
	printf("\n");

	printf("Enter My Favourite Fruit: ");
	gets(fruit);
	
	if (strlen(fruit) != 0) {
		if (check_guess(fruit) == 1) {
			puts("You have guessed correctly!");
		}
		else {
			puts("You have guessed wrong!");
		}
	}

	else {
		puts("You have not inserted anything!");
	}

}
