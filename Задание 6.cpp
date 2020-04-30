#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name;
  int lvl , zarplata , kolvochas ;
  float proc ;
  cout<<"enter worker's name :";
  cin >>name;
  cout<<"enter worker's experience :";
  cin >>lvl;
  cout<<"enter worker's hourly wage :";
  cin>>zarplata;
  cout<<"enter how much hours "<<name<<" has worked :";
  cin>>kolvochas;
  ofstream dosie;
  dosie.open("Dosie.txt");
  if (lvl <=1)
     proc=0;
  else if (lvl > 1 && lvl <=3)
    proc=0.05;
  else if (lvl >3 && lvl <=5)
    proc=   0.08;
  else if (lvl >5)
    proc = 0.15;
  dosie << name <<endl;
  dosie << "Experience is "<< lvl<< endl;
  dosie << "Hourly wage is "<< zarplata<<endl;
  dosie << name <<" has worked "<<kolvochas<<" hours"<<endl;
  dosie << "Salary is "<< kolvochas*zarplata<<endl;
  dosie << "Premy is " << (kolvochas*zarplata)*proc<<endl;
  cout << name <<endl;
  cout << "Experience is "<< lvl<< endl;
  cout << "Hourly wage is "<< zarplata<<endl;
  cout << name <<" has worked "<<kolvochas<<" hours"<<endl;
  cout << "Salary is "<< kolvochas*zarplata<<endl;
  cout << "Premy is " << (kolvochas*zarplata)*proc<<endl;
  cout << "Dosie was saved in the file named Dosie.txt ";
  dosie.close();



}
