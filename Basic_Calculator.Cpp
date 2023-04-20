#include <iostream>
using namespace std;
int main()
{
	cout << "=====BASIC CALCULATOR====="  << endl;
	
	int num1;
	int num2;
    char opt;
    
   
    cout << "Enter First Number: ";
    cin >> num1;
    
    cout << "Enter Operator Number: ";
    cin >> opt ;
    
    cout << "Enter Second Number: ";
    cin >> num2;
    
    
    if (char opt = '+') {
        cout << "Number1 + Number2 = " << num1 + num2;
        }else if (char opt = '-') {
        cout << "Number1 - Number 2 = " << num1 - num2;
        }else if (char opt = '*') {
        cout << "Number1 * Number 2 = " << num1 * num2;
        }else if (char opt = '/') {
        cout << "Number1 / Number 2 = " << num1 / num2;
        }else {
         cout << "Invalid Operator";
        }

      		
}