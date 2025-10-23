#include <iostream>
using namespace std;

int main(){
int days;
cin >> days;
int years=days/365;
days=days%365;
int month=days/30;
days=days%30;
    cout << years << " years" << endl;
    cout << month << " months" << endl;
    cout << days << " days" << endl;
  return 0;
}