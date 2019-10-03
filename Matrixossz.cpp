#include <iostream>

using namespace std;

int main()
{
    int a[100][100],b[100][100],n,i,j,osszeg,c[100][100];
    cout<<"N=";
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
     c[i][j]=a[i][j]+b[i][j];
     cout<<c[i][j]<<" ";
        }
cout<<endl;
    }




    return 0;
}
