#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("bac.txt");
    int a,maxpos,max,i;
    input>>a;
    maxpos=-1;
    i=1;
    max=a;
    cout<<a<<" ";
    while(input>>a)
    {
        if(a>max)
        {
            cout<<a<<" ";
            max=a;
            maxpos=i;
        }
        else if (a==max)
        {

            if(maxpos==i-1){
                cout<<a<<" ";
                maxpos=i;
            }

            }
            i++;
    }









    return 0;
}
