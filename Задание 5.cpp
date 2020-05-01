
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int x;
    cout<< "Введите число";
    cin>>x;
    double Y=x;
    double Yi=0;
    double Yabs=0;
    double endcalc=1.0e-5;
    do
    {
    Yi=0.5*(Y+(3*x/(2*Y*Y+x/Y)));
    Yabs=abs(Yi-Y);
    Y=Yi;
    }
    while(Yabs>endcalc);
    cout<< endl << Y << endl;
    return 0;
}
