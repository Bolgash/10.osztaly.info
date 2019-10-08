#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n,m,j,i,uccso=0;
    cout<<"sor=";
    cin>>n;
    cout<<"oszlop=";
    cin>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }

    }
    uccso=a[n-1][m-1];
    for(i=0; i<n; i++)
    {
        a[i][0]=uccso;
        a[i][m-1]=uccso;
        for(j=0; j<m; j++)
        {
         a[0][j]=uccso;
         a[n-1][j]=uccso;
        }
    }
for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }


    return 0;
}
