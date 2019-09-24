#include <iostream>

using namespace std;

int main()
{
    int a[100][100],n,i,j,m;
    cin>>n;
cin>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                cout<<"a["<<i<<"]["<<j<<"]"<<endl;
            cin>>a[i][j];


        }
    }

for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         cout<<a[i][j]<<" ";
        }
cout<<endl;
}




    return 0;
}
