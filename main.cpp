#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream be1("nr1.txt");
    ifstream be2("nr2.txt");

    int n,m,v[100],p=0,k=0,aux;

    be1>>n;
    be2>>m;

    for(int i=0; i<n; i++)
    {
        be1>>v[i];
    }
       do
    {

        p=0;

        for (int i=0; i<n-1-k; i++)

        {
            if (v[i]>v[i+1])
            {
                aux=v[i+1];
                v[i+1]=v[i];
                v[i]=aux;

                p=1;
            }
        }

        k++;
    }
    while(p==1);

    for (int i=0; i<n; i++)
    {

        cout << v[i] << " ";
    }
    for(int j=0; j<m; j++)
    {
        be2>>v[j];
    }
    do
    {

        p=0;

        for (int j=0; j<n-1-k; j++)

        {
            if (v[j]>v[j+1])
            {
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;

                p=1;
            }
        }

        k++;
    }
    while(p==1);

    for (j=0; j<n; j++)
    {

        cout << v[j] << " ";
    }



    return 0;
}
