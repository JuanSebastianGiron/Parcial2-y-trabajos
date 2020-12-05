#include <iostream>

using namespace std;

void NumPares(int *pA, int n);

int main ()
{
    int n = 100;
    int A[n];

    NumPares(&A[n],n);


}

void NumPares(int *pA, int n)
{
    for ( int i=0; i<=n; i++)
    {
        pA[n] = i++;

        if (pA[n] % 2 == 0)
        {
             
        }

        cout<<pA[n]<<" ";
    }
}