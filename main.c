#include<stdio.h>
#include<stdlib.h>

const char dna_letters[] = "A, T, G, C";
int DNA_LENGHT[50];
char values1[50];
char values[50];

void DNA()
{
	int number;
	printf("Enter the number from 0 to 50 \n");
	scanf("%d", &number);
	if (number == 0)
	{
		exit(EXIT_SUCCESS);
	}
}

void fillDNA()
{
	char DNA_sting_A;
	char DNA_sting_B;
	int charIndex;
	int index;
	int n = getchar();
	for (index = number; index < n; index++) {
		values[index] = dna_letters[rand() % 4];
		charIndex = rand() % 4;

		if (dna_letters[charIndex] == 'G') {
			values1[index] = "C";
			values[index] = "G";
		}
		else if (dna_letters[charIndex] == 'A') {
			values1[index] = "T";
			values[index] = "A";
		}
		else if (dna_letters[charIndex] == 'T') {
			values1[index] = "A";
			values[index] = "T";
		}
	}
}
void checkDNA() {
	for (index = 1; index < n; index++) {
	else if (dna_letters[charIndex] == 'C') {
	values1[index] = "G";
	values[index] = "C";
		}
	else if (dna_letters[charIndex] == 'C' && dna_letters[charIndex - 1] == 'G') {
	dna_letters[charIndex - 1] = "C";
	dna_letters[charIndex] = "G";
		}
	else if (dna_letters[charIndex] == 'G' && dna_letters[charIndex - 1] == 'C') {
	dna_letters[charIndex - 1] = "G";
	dna_letters[charIndex] = "C";
		}
	else if (dna_letters[charIndex] == 'A' && dna_letters[charIndex - 1] == 'T') {
	dna_letters[charIndex - 1] = "A";
	dna_letters[charIndex] = "T";
		}
	else if (dna_letters[charIndex] == 'T' && dna_letters[charIndex - 1] == 'A') {
	dna_letters[charIndex - 1] = "T";
	dna_letters[charIndex] = "A";
		}
	}

}
void printDNA()
{
	printf("\n\n%s\n\n", values);
	printf("\n\n%s\n\n", values1);
}


int main() {
	DNA();
	fillDNA();
	checkDNA();
	printDNA();
	getch();
}
