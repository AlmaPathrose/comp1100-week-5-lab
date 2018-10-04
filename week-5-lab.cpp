#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

int main()
{

  int a,b;
  float c;

   cout << "Enter width and height of a right angled triangle:\n";
   cin >> a >> b;
   c= pow(a,2) + pow(b,2);
  auto result=sqrt(c);

  ofstream myresult;
  myresult.open ("week-5-lab.txt");
  myresult << "Your trinangle has 3 sides that are " << a << "cm, " << b << "cm and " << result << "cm\n";
   myresult.close(); 
    return 0;

}    

