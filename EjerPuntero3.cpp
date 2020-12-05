#include <iostream>

using namespace std;

int main ()
{
    int n = 50, escalar;
    int A[n];
    int *pA = &A[0];

    for (int i=0; i<n; i++)
    {
        pA[i] = i + 1;
        cout<<pA[i]<<" ";
    }

    cout<<endl<<"Ingrese el numero por el cual se multiplicara"<<endl;
    cin>>escalar;

    for (int i=0; i<n; i++)
    {
        pA[i] = pA[i] * escalar;
        cout<<pA[i]<<" ";
        
    }
}