// A C++ Program to generate test cases for
// array filled with random numbers
#include<bits/stdc++.h>
using namespace std;
 
// Define the number of runs for the test data
// generated
#define RUN 4
 
// Define the range of the test data generated
#define MAX 2
 
// Define the maximum number of array elements
#define MAXNUM 1000000
 
int main()
{
    // Uncomment the below line to store
    // the test data in a file
    //freopen ("Test_Cases_Random_Array.in", "w", stdout);
 
    //For random values every time
    srand(time(NULL));
 
    for (int i=1; i<=RUN; i++)
    {
        // Number of array elements
        // int NUM = 1 + rand() % MAXNUM;
        int NUM = MAXNUM;
        int mul = 1;
        
        // First print the number of array elements
        // printf("%d\n", NUM);
 
        // Then print the array elements separated
        // by space
        for (int j=1; j<=NUM; j++){
        //     if(rand()%2)
        // mul = -1;
        // else
        // mul = 1;
            if(j==1)
            printf("%d ", mul *(rand() % MAX));
            else if(j!=NUM)
            printf("%d ", mul *(rand() % MAX));
            else
            {
                printf("%d", mul *(rand() % MAX));
            }
        }
        // for (int j=1; j<=NUM; j++){
        //                 if(j==1)
        //     printf("[0,");
        //     else if(j!=NUM)
        //     printf("0,");
        //     else
        //     {
        //         printf("0]");
        //     }
        // }
 
        printf("\n");
    }
 
    // Uncomment the below line to store
    // the test data in a file
    //fclose(stdout);
    return(0);
}