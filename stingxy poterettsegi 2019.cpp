#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin>>b;
    if (b.length() < 3)
    {
        a="nedeterminat";
    }
    else
    {
        a = "";
        a.append(b,b.length()-3, 3);
    }
    cout<< a <<endl;
    return 0;
}
