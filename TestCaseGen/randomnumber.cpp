#include<bits/stdc++.h>
using namespace std;
 
// Define the number of runs for the test data
// generated
#define RUN 5000
 
// Define the range of the test data generated
#define MAX 1001
 
int main()
{
    // Uncomment the below line to store
    // the test data in a file
    // freopen("Test_Cases.in", "w", stdout);
 
    // For random values every time
    srand(time(NULL));
    bool r = 0;
    int mul = 1;
    for (int i=1; i<=RUN; i++)
    {
        if(i==1)
        {
            printf("[");
        }
        r = rand()%2;
        // if(r)
        // {
        //     mul = -1;
        // }
        // else
        // {
        //     mul = 1;
        // }
        printf("%d", (rand() % MAX)*mul);
        if(i!=RUN)
        {
            printf(",");
        }
        if(i==RUN)
        {
            printf("]");
        }
    }
 
    // Uncomment the below line to store
    // the test data in a file
    //fclose(stdout);
    return(0);
}