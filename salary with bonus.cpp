#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
    double salary,product,total;
    string name;
    cin>>name;
    cin>>salary>>product;
    total = salary + ((product*15)/100);
    cout<<"TOTAL = R$ "<<fixed << setprecision(2)<<total<<endl;
    
    return 0;
}