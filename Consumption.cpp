#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int X;
    float Y;
    double kmp;
    cin>>X>>Y;
    kmp=X/Y;
    cout<<fixed << setprecision(3)<<kmp<<" km/l"<<endl;
    
    return 0;
}