#include <iostream>

using namespace std;

int main ()
{
    int n = 100, A[n];
    int *pA = &A[0];

    for (int i=0; i<n; i++)
    {
        pA[i] = 1;
    }

     for (int i=0; i<n; i++)
    {
        cout<<pA[i]<<" "; 
    }


}