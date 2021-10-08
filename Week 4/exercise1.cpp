#include<iostream>
using namespace std;

double add(double num1, double num2, double num3);
double avg(double sum, int n);

int main()
{
  
  double num1, num2, num3;
  double sum, average;

  
  cout << "Enter three Numbers :: ";
  cin >> num1 >> num2 >> num3;

  
  sum = add(num1 , num2, num3);
  
  
  average = avg(sum, 3);

  
  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return 0;
}

double add(double num1, double num2, double num3)
{
    return num1+num2+num3;
}

double avg(double sum, int n) 
{
    return sum / n;
}