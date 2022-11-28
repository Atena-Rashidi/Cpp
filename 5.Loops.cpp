# include<iostream>
# include <iomanip>

using namespace std;

/* -----------------------------------------------------------------------------

https://www.tutorialspoint.com/cplusplus/cpp_loop_types.htm

1. for loop
Execute a sequence of statements multiple times and abbreviates the code that manages 
the loop variable.
2. while loop
Repeats a statement or group of statements while a given condition is true. It tests the
condition before executing the loop body.
3. do...while loop
Like a ‘while’ statement, except that it tests the condition at the end of the loop body.
4. nested loops
You can use one or more loop inside any another ‘while’, ‘for’ or ‘do..while’ loop.
________________________________________________________________________________
size_t:
size_t type is a base unsigned integer type of C and C++ language. It is the type 
of the result returned by sizeof operator. It is a representation of some unsigned
int for positive numbers. 
----------------------------------------------------------------------------- */

int main(){

// Question 1: Write a code that prints out your name 10 times
for(int i = 0; i < 10; i++){
    cout << "My name is Atena!" << endl;
}
/*______________________________________________________________________________*/
// 1. for loop
/* ---------------------------------------------------------------------------- */
// Question 2: Write a code that prints out your name 10 times using sie_t
for(size_t i = 0; i < 10; i++){
    cout << "This is C++ course!" << endl;
}
/* ---------------------------------------------------------------------------- */
// Question 3: Write a code, using iterator to declare outside of the loop
size_t i = 0;

for(i; i < 10; i++){
    cout << "My name is Atena Rashidi!" << endl;
}
cout << "Loop Done!" << endl; 
cout << "i: " << i << endl; 
/* ---------------------------------------------------------------------------- */
// Question 4:
for(size_t j = 0; j < 10; j++){
    cout << "j: " << j << " . Double that and you get: " << j*2 << endl;
}
/* ---------------------------------------------------------------------------- */
// Question 5:
const size_t COUNT = 10; 
for(size_t i = 0; i < COUNT; i++){
    cout << "The value of i is: " << i << endl;
}
/* ---------------------------------------------------------------------------- */
// Question 5: Factorial of a number
int number2, factorial = 1; 
cout << "Enter a number(factorial): " << endl;
cin >> number2; 

if(number2 < 0)
    number2 = abs(number2);

for (int i = number2; i >= 1; i--)
{
    factorial *= i;
}

cout << "Factorial of " << number2 << "! is: " << factorial << endl; 

/* ---------------------------------------------------------------------------- */
// Question 6: Take a number from user and check if it is prime number or not!
cout << "Enter a number(prime): " << endl;
int number1; 
bool isPrimeFlag = true;
cin >> number1;
for(int b = 2; b < number1; b++){
    if(number1%i == 0){
        isPrimeFlag = false;
        break;
    }
}

(isPrimeFlag == true)?cout << number1 << " is a prime number!" << endl:
cout << number1 << " is not a prime number!" << endl;

/*______________________________________________________________________________*/
// 2. while loop
/* ---------------------------------------------------------------------------- */
// Question 1:
const unsigned int COUNT1 = 10;
unsigned int m = 0;

while(m < COUNT1){

    cout << "Keep going!" << endl;
    m++;
}

/* ---------------------------------------------------------------------------- */
// Question 2: Using Ternary (Conditional) Operator, write a code that check if an
// entered value is divisible to 15 untill the number is less than 500
int counter;
cout << "Enter a number(if divisible to 15): " << endl;
cin >> counter;

while(counter < 500){
    (counter % 3 == 0 && counter % 5 == 0)? 
    cout<< counter << " is divisible to 15" << endl: 
    cout << counter << " is not divisible to 15" << endl;
    counter++;
}
/* ---------------------------------------------------------------------------- */
// Question 3: Take a number from user and count how many digit this number has.
int num1, counter1 = 0; 
cout << "Enter a number(to check its number of digit): " << endl;
cin >> num1;
if(num1 == 0)
    cout << "You entered 0!" << endl;
else{
    while(num1 > 0 || num1 < 0){
        num1 /= 10; 
        counter1 ++;
    }
    cout  << "This number has " << counter1 << " digits" << endl;
}
/* ---------------------------------------------------------------------------- */
// Question 4: Take a number from user and print out its reverse!
int number, reverseNumber = 0;
cout << "Enter a number(to give its reverse): ";
cin >> number; // 123

while(number!=0){
     reverseNumber *= 10;              // 0 -> 3*10 -> 32*10 
     int lastDigit = number % 10;      // 123%10 = 3 -> 12%10 = 2 -> 1/10 = 1
     reverseNumber += lastDigit;       // 3+0 -> 30 + 2 -> 320 + 1
    number /= 10;                      // 123/10 = 12 -> 12/10 = 1 -> 1/10 = 0


}

cout << "Reverse Number is: " << reverseNumber << endl;

/*______________________________________________________________________________*/
// 3. do...while loop
/* ---------------------------------------------------------------------------- */
// Question 1:
const unsigned int COUNT2 = 11;
unsigned int k = 1;
do
{
    cout << "[" << k << "]: I like C++!" << endl;
    k++;
} while (k < COUNT2);

/* ---------------------------------------------------------------------------- */
// Question 2: Take a PIN from user and compare it with 1234, if it's the same, 
// print out "Loading...", otherwiae, count the number of errors, and if it's 3, 
// block it!

int userPIN = 1234, PIN, errorCounter = 0;

do
{
cout << "Enter your PIN: ";
cin >> PIN;
if(PIN != userPIN){
    errorCounter ++;
    cout << "Wrong!Enter your PIN: " << endl;
    cout << "Error Chance: " << 3 - errorCounter << endl;
}
} while (errorCounter < 3 && userPIN != PIN);

if (errorCounter < 3)
    cout << "Loading..." << endl;
else
    cout << "Blocked!" << endl;
/* ---------------------------------------------------------------------------- */
// Question 3: Take from user arbitrary number of grades, and find the average

cout << "How many grades would you like to enter? " << endl;
int gradeNumber;
float grade = 0, Total = 0, Average = 0;
cin >> gradeNumber; 

for(int i = 1; i <= gradeNumber; i++){
    cout << "Enter grade " << i << ":" << endl;
    cin >> grade; 
    Total += grade;
    Average = Total/i;
}

cout << "Your average is: " << Average << endl;


/*______________________________________________________________________________*/
// 4. nested loops
/* ---------------------------------------------------------------------------- */
// Question 1: Write a code for multiplication table
for(int ii=1; ii<=10; ii++){
    for(int jj=1; jj<=10; jj++){
        cout << ii << '*' << jj << " = " << ii*jj << endl;
        cout << "----------------" << endl;
    }

}
/* ---------------------------------------------------------------------------- */
// Question 2: Draw a symble based on the width and height that the user enters.

int height, width;
char symbol;

cout << "Enter width: " << endl;
cin >> width;

cout << "Enter height: " << endl;
cin >> height;

cout << "Enter symbol: " << endl;
cin >> symbol;

for(int l=1; l <= width; l++){
    for(int n=1; n <= height; n++){
        cout << setw(3) << symbol;
    }
    cout << endl; 
}
/* ---------------------------------------------------------------------------- */
// Question 3: Using Question 2 variables, draw a triangle where height = 1 + width

cout << "/*-------------------------------------*/" << endl;

for (int h = 1; h <= height; h++){
    for (int w = 1; w <= h; w++){
        cout << setw(3) << symbol;
    }
    cout  << endl;
}

for (int h = 1; h <= height; h++){
    for (int p = h; p <= width; p++){
        cout << setw(3) << symbol;
    }
    cout  << endl;
}




}