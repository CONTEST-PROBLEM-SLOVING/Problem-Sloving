#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c,MaiorAB;
    cin>>a>>b>>c;
    
    a = (a+b+abs(a-b))/2;
    b = c;
    MaiorAB = (a+b+abs(a-b))/2;
    
    cout<< MaiorAB << " eh o maior"<<endl;
 
    return 0;
}