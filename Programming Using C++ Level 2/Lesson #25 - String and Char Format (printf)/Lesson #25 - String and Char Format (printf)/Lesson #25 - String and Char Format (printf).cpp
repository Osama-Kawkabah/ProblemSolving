#include <iostream>
using namespace std;

int main()
{
	char Name[] = "Osama Ali";
	char Name2[] = "KOKABAH";



	printf("The Name Is : %s", Name);
	printf(" %s _ How Are You\n\n\n\n", Name2);

	char S = 'A';
	printf("%*c\n", 3, S);

	/*printf("The Letter Is : %*c\n", 1, S);
	printf("The Letter Is : %*c\n", 2, S);
	printf("The Letter Is : %*c\n", 3, S);
	printf("The Letter Is : %*c\n", 4, S);
	printf("The Letter Is : %*c\n", 5, S);*/

	int Count = 8;
	for (int i = Count; i >= 0; i--)
	{
		printf("The Name Is : %*c\n", i, Name[i]);

	}


	char Names[] = "Mohammed Abu-Hadhoud"; 
	char SchoolName[] = "Programming Advices";
	// print string and String
	printf("\n\n\nDear %s, How are you?\n\n", Names); 
	printf("Welcome to %s School!\n\n", SchoolName);
	char c = 'S';
	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
	printf("Setting the width of c :%*c \n", 3, c);
	printf("Setting the width of c :%*c \n", 4, c);
	printf("Setting the width of c :%*c \n", 5, c); 


	return 0;
}

