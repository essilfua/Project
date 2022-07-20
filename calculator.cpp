#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//declaration of variables//
double input1= 0.0;
double input2= 0.0;
double output= 0.0;
string operator="";

cout<<"Please enter the first number";
cin>>input1;

cout<<"Please enter the operator: (+,-,/,*) ";
cin>>operator;

cout<<"Please enter the second number";
cin>>input2;


if (operator == "+")
{
  output = input1 + input2;
}
else if (operator=="-")
{
 output=input1-input2;

}
else if (operator=="/")
{output=input1/input2;
}

else if (operator=="*")
{output=input1*input2;
}


cout<<"The solution is: ";
cout<<output;

	return 0;
}
