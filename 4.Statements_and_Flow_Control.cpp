# include <iostream>
# include <string>

using namespace std;
/* -----------------------------------------------------------------------------
Types of Control Statements in c++ programming:
https://indieseducation.com/control-flow-statements-in-c-programming/
    1. if
    2. if-else  statements
    3. Else if Statement
    - Ternary Operator
    4. Switch Statements
----------------------------------------------------------------------------- */
//1. if
// 2. if-else  statements 
// 3. Else if Statement
// ____________________________________________________________________________

int main(){

/* ---------------------------------------------------------------------------
Question1: Write a code:
If green: Go!
If red: Stop!
If yellow: Slow Down!
If green and police_stop: Stop!
---------------------------------------------------------------------------*/
bool green = true;
bool red = false;
bool yellow = false;
bool police_stop = true;

if(green){
    if(police_stop)
        cout << "Stop!" << endl;
    else
        cout << "GO!" << endl; 
}
if(red)
    cout << "Stop!" << endl;
if(yellow)
    cout << "Slow Down!" << endl;
if(police_stop)
    cout << "Stop!" << endl;
// Use Logical Operators instead of if-if for the green and police_stop
if(green && police_stop)
    cout << "Stop!" << endl;
else 
    cout << "Go!" << endl;


/*---------------------------------------------------------------------------
Question 2:
Compae two intig numbers in a bool variable
---------------------------------------------------------------------------*/
int number1 = 87;
int number2 = 34;

bool result = (number1 > number2);
cout << boolalpha << endl;

if(result == true)
    cout << "Number 1: " << number1 << " is greater than Number 2: " << number2 << endl;
if(!(result == true))
    cout << "Number 2: " << number2 << " is greater than Number 1: " << number1 << endl;
// or using if-else
if(result == true)
    cout << "Number 1: " << number1 << " is greater than Number 2: " << number2 << endl;
else
    cout << "Number 2: " << number2 << " is greater than Number 1: " << number1 << endl;

/*---------------------------------------------------------------------------
Question 3:
Enter a nmuber, and the code show detect if it is odd or even 
---------------------------------------------------------------------------*/
cout << "Enter a number: " << endl;
int num;
cin >> num;
if(num%2 == 0)
    cout << num << " is even!" << endl;
else
    cout << num << " is odd!" << endl;
 
/*---------------------------------------------------------------------------
Question 4:
Write a code to detect type of a triangle: 
Isosceles: with two congruent sides and one unique side 
Equilateral: with three congruent sides 
Scalene: with no congruent sides
user should enter the sides
---------------------------------------------------------------------------*/
float a, b, c;
cout << "Enter three sides to make a triangle: " << endl;
cin >> a >> b >> c;

if(a==b && b==c)
    cout << "The triangle type is Equilateral!" << endl;
else{
    if(a!=b && b!=c && a!=c)
        cout << "The triangle type is Scalene!" << endl;
    else
        cout << "The triangle type is Isosceles!" << endl;
}
 
/*---------------------------------------------------------------------------
Question 5: Take weigh and heigh of user and calculate BMI:
BMI = Weight / (Height*Height)*/
float Weight, Height, BMI;
cout << "Enter your weight (kg): " << endl; 
cin >> Weight;
cout << "Enter your height (m): " << endl; 
cin >> Height;
BMI = Weight / (Height*Height);
cout << "Your BMI is: " << BMI << endl;
(BMI < 18.5)? cout << "You are underweight!" << endl : (BMI > 25)? cout << "Youe are overweight!" << endl : cout << "Youre are normal!" << endl; 



/* ___________________________________________________________________________

Ternary (Conditional) Operator: condition ? expression1 : expression2;
_____________________________________________________________________________*/

// Example 1: Take input from users, check if marks is greater than 75
// ---------------------------------------------------------------------------
cout << "Enter your mark: " << endl;
double mark;
cin >> mark;
(mark > 75)? cout << "Passed!" << endl : cout << endl << "Failed" << endl;

// Example 2: Take input from user and check is positive, negative, or zero
// ---------------------------------------------------------------------------
cout << "Enter a number: " << endl;
int NUMBER;
cin >> NUMBER;
(NUMBER == 0)? cout << "Zero!" : (NUMBER>0)? cout << "Positive!" << endl: cout << "Negetive!" << endl;  

// Example 3: Take hostUserNumber, and guestNumber and check if they are the same.
// ---------------------------------------------------------------------------
string hostUserNumber;
string guestNumber;
cout << "Enter Host Name: " << endl;
cin >> hostUserNumber; 
cout << "Enter Guest Name: " << endl;
cin >> guestNumber; 
(guestNumber == hostUserNumber)? cout << "Hello!" << endl : cout << "Not Valod!" << endl;

/*____________________________________________________________________________
4. Switch Statements
------------------------------------------------------------------------------
In switche, case data type can be only: integral type and enums, lik:
int, char, long, unsigned short
// data type cannot be a string
______________________________________________________________________________*/
// Question 1: Write a code that the user enters tools and the code shows what tool is 
// detected. Tools are: Pen, Marker, Pencil
cout << "Select the tool: " << endl;
const int Pen = 10;
const int Pencil = 11;
const int Marker = 12; 

int tool = Pencil;

switch (static_cast <int>(tool))
{
    case Pen:
        cout << "Active tool is Pen" << endl; 
        break;
    case Pencil:
        cout << "Active tool is Pencil" << endl; 
        break;
    case Marker:
        cout << "Active tool is Marker" << endl; 
        break;

    default:
        break;
}
/*______________________________________________________________________________*/
// Question 2: Write a code that user enters two numbers and one operation and the code does
// the operation and shows the result

cout << "Enter two numbers: " << endl;
float num1;
float num2;
cin >> num1 >> num2;

cout << "Select the operation: " << endl;
char operation;
cin >> operation;

switch (operation)
{
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    case '%':
        cout << "int(" << num1 << ")" << " % " << "int(" << num2 << ")" << " = " << static_cast <int> (num1) % static_cast <int> (num2) << endl;
        break;
    default:
        break;
}

/*______________________________________________________________________________*/
// Question 3: Write a code that user enters month and year and  the code checks 
// if a year is a leap year or not!

  // if year is divisible by 4 AND not divisible by 100
  // OR if year is divisible by 400
  // then it is a leap year

int month, year;
cout << "Year: " << endl;
cin >> year;;
cout << "Month: " << endl;
cin >> month;

switch (month)
{
    case 2:
        // if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
        //     cout << year << " is a leap year." << endl;
        //     cout << "29 days month" << endl;
        // }
        // else {
        //     cout << "28 days month" << endl;
        // }

        /* ----- or we can write: ----- */
        (year % 4 == 0 && year % 100 !=0 || year % 400 == 0)? 
            cout << year << " is a leap year." << endl << "29 days month" :cout << "28 days month" << endl; 
        
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days month";
        break;    
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days mont";
        break;
    default:
        cout << "Not Valid!" << endl;
        break;
    }


}