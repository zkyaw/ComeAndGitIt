#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers;
    
    cout << "Enter first number: ";
    cin >> firstNumber;
    
    cout << "Enter second number: ";
    cin >> secondNumber;

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;

    // Prints sum 
    cout << endl << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;  
	cout << endl << firstNumber << " - " << secondNumber << " = " << diffOfTwoNumbers;   

    return 0;
}
