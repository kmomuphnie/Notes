#include <iostream>
using namespace std;

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    cout << r.length() << endl;
    cout << r[4] << r[3]<<endl;
    return r;
}
