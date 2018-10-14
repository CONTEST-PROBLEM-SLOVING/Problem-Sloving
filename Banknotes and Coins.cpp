#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

int main()
{
    int a100,a50,a20,a10,a5,a2,a1,a50p,a25p,a10p,a5p,a1p;
    float N;
    cin>>N;
    a100 = N/100;
    a50 = (N - (a100*100))/50;
    a20 = (N - ((a100*100) + (a50*50)))/20;
    a10 = (N - ((a100*100) + (a50*50) + (a20*20)))/10;
    a5 = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10)))/5;
    a2 = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5)))/2;
    
    a1 = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2)))/1;
    a50p = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2) + (a1*1)))/(0.50);
    a25p = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2) + (a1*1) + (a50p*(0.50))))/(0.25);
    a10p = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2) + (a1*1) + (a50p*(0.50)) + (a25p*(0.25))))/(0.10);
    a5p = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2) + (a1*1) + (a50p*(0.50)) + (a25p*(0.25)) + (a10p*(0.10))))/(0.05);
    float aaa = (N - ((a100*100) + (a50*50) + (a20*20) + (a10*10) + (a5*5) + (a2*2) + (a1*1) + (a50p*(0.50)) + (a25p*(0.25)) + (a10p*(0.10)) + (a5p*(0.05))));
    aaa = roundf(aaa * 100) / 100;
    a1p = roundf((aaa/(0.01))*100)/100;
    cout<<"NOTAS:"<<endl<<a100<<" nota(s) de R$ 100.00"<<endl<<a50<<" nota(s) de R$ 50.00"<<endl<<a20<<" nota(s) de R$ 20.00"<<endl<<a10<<" nota(s) de R$ 10.00"<<endl<<a5<<" nota(s) de R$ 5.00"<<endl<<a2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl<<a1<<" moeda(s) de R$ 1.00"<<endl<<a50p<<" moeda(s) de R$ 0.50"<<endl<<a25p<<" moeda(s) de R$ 0.25"<<endl<<a10p<<" moeda(s) de R$ 0.10"<<endl<<a5p<<" moeda(s) de R$ 0.05"<<endl<<a1p<<" moeda(s) de R$ 0.01"<<endl;
    
    
    
    
    
    return 0;
}