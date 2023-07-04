/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int num1,num2;
  
  char x;
  
  

  cout<<"enter first number\n";

  cin>>num1;

  cout<<"enter second number\n";

  cin>>num2;

  cout<<"press a for addition\n";

  cout<<"press b for subtraction\n";

  cout<<"press c for multiplication\n";

  cout<<"press d for divison\n";

  cout<<"press e for modulus\n";

  cin>>x;

  if(x=='a')

  cout<<"the sum ="<<num1+num2;

  else if (x=='b')

  cout<<"the subtraction ="<<num1-num2;

   else if (x=='c')

  cout<<"the multiplication ="<<num1*num2;

  else if (x=='d')

  cout<<"the division ="<<num1/num2;

  else if (x=='e')

  
  cout<<"the modulus ="<<num1%num2;

  else
  cout<<"invalid operation\n";

  return 0;
}

