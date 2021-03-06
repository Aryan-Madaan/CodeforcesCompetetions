// A C++ Program to generate test cases for
// random characters
#include<bits/stdc++.h>
using namespace std;

// Define the number of runs for the test data
// generated
#define RUN 5

// Define the range of the test data generated
// Here it is 'a' to 'z'
#define MAX 25

int main()
{
	// Uncomment the below line to store
	// the test data in a file
	// freopen ("Test_Cases_Random_Character.in", "w", stdout);

	// For random values every time
	srand(time(NULL));

	for (int i=1; i<=RUN; i++)
		printf("%c\n", 'a' + rand() % MAX);

	// Uncomment the below line to store
	// the test data in a file
	// fclose(stdout);
	return(0);
}

