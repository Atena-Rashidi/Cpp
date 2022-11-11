// --> One line comment
/*
Multi-line block comment
*/

/*
compile time error
cout << "My Name is Atena! I'm here to help you basic C++" << endl
ERROR: In function 'int main()':
Statements_and_Functions.cpp:17:67: error: expected ';' before '}' token
   17 | cout << "My Name is Atena! I'm here to help you basic C++" << endl
      |                                                                   ^
      |                                                                   ;
......
   24 | }
*/

//*************************************************************************

/*
Run time error
In function 'int main()':
Statements_and_Functions.cpp:17:2: warning: division by zero [-Wdiv-by-zero]
   17 | 7/0;
*/

//*************************************************************************

// Header file or library. 
// Standard Input / Output Streams Library
# include<iostream>

// Instead of std:: we can use a line of code:
using namespace  std;

////////////////////////////////////////////////////////////////////////////
//                              Functions                                 // 
////////////////////////////////////////////////////////////////////////////

// Question 1 Answer: 
int addNumbers(int firsNumber, int secondNumber){

    int SUM = firsNumber + secondNumber;
    return SUM;
}

// Question 2 Answer:
int multiplenumbers(int firstNumber, int secondNumber){

    int Result = firstNumber * secondNumber;
    return Result;
}




// -------------------------------------------------------------------------

int main(){ // the entry point of C++
    cout << "Hello World!"<<endl;
    cout << "My Name is Atena!" << endl;// we csn use either \n or endline(endl)

// ------------------------------- Statment: ---------------------------------
// // the statment should ends with ;
// Statments are executed in order from top ti bottom
    int firstNumber = 10; 
    int seconfNumber = 15;
    int sum = firstNumber + seconfNumber;

    cout << "Sum is: " << sum << endl;

// ---------------------------------------------------------------------------
// Function: has name 
// should be defined before it is used!
// is put before main()
// we have to spcify the type of function and input and output
// Func(input){ 
    // body: statments 
    // return output --> function has a return value
// }

// Question 1: Write a function that adds two numbers:  
sum = addNumbers(firstNumber, seconfNumber);
cout << "The sum is: " <<sum << endl;
cout << "The total number is: " << addNumbers(5, 8) << endl;

// Question 2: Write a function that multiples two numbers: 
int multiple = multiplenumbers(4, 8);
cout << "Multiple of numbers is: " << multiple << endl;

}