#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <windows.h>
#include <thread>
#include <string>

using namespace std;

//------------------------------------------------
// for creating delay we can use this function:
//------------------------------------------------
void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}

// *********************** Data Type *****************************
// In C++ we use camel casing, meaning to use lower and uper case 
// in naming a type, like: annualSalary

// There are three data types in C++:
// 1. primitive data types
// 2. abstract data types
// 3. derived data types
// ----------------------------------------------------------------------------
// *** Primitive data types include:***
// integer, floating-point, character, boolean, double floating-point, 
// valueless or void, and wide character.
// ----------------------------------------------------------------------------
// *** User-defined or Abstract Data types include:***
// class, enumeration, union, structure, and typedef defined data type.
// ----------------------------------------------------------------------------
// *** Derived Data types include:***
// array, function, pointer, and reference.
// ----------------------------------------------------------------------------
// Different data modifiers are short, long, signed, and unsigned, which we could apply to data types like int, double, char, etc.


// - typename/Charector -> Rules:
// 1. It should have a meaningful name, 
// 2. It cannot start with any charector except underscore _ 
// 3. It cannot start with number at the beging 
// 4. It cannot contain any space 
// -----------------------------------------------------------------------------

// Question 1 Answer - part 1:
float AnnualSalary (float monthlySalary){
    float annualSalary = monthlySalary *12;
    return annualSalary;
}

float TenYearSalary (float monthlySalary){
    float annualSalary = monthlySalary *12;
    float tenYearSalary = annualSalary *10;
    return tenYearSalary;
}
// ******************************************************************************
// Question 3 Answer - part 1:
float divisionAfterSub (int first_num, int second_num, int third_num){
    if (second_num - third_num != 0){
        // Important point:
        // float resut = (first_num)/(second_num - third_num)
        // When we divide an integer sum by an integer length, 
        // we get an integer result. 
        // The fact is that we haven't stored it in a float variable 
        // and type float doesn't change it. 
        // We should use static_cast<float> 
        // the compiler to generate a division with an answer of type float . 
        // All static_cast operators resolve at compile time and do not remove 
        // any const or volatile modifiers
        float result = static_cast<float> (first_num) /static_cast<float> (second_num - third_num);
        return result;
    }
    else{
        cout << "Not Valid!" << endl; 
        return -1;
    } 
    
}

// ******************************************************************************
// Question 4 Answer - part 1:
void trafficLight(bool red_light, bool green_light){
    if (red_light == true && green_light == false) {
        cout << "Red Light ON: Stop!" << endl;
        for(int i = 0; i < 5; i++){
            int counter_red = 5 - i;
            sleep(2.5); // pauses for 2.5 seconds
            cout << "Stop Wating Time: " << counter_red << "second" << endl; 
            if(i == 4){
                red_light = false;
                green_light = true;
                cout << "Green Light ON!" << endl;

            }
        }
    }
    else {
        cout << "Green Light ON!" << endl;
    }

    if(red_light == false && green_light == true){
        cout << "-----------------------------" << endl;
        cout << "Clear! Go through." << endl;
        for (int i = 0; i < 5; i++){
            int counter_green = 5 - i;
            sleep(2.5); // pauses for 2.5 seconds
            cout << "Clear Wating Time: " << counter_green << "second" << endl;
            if(i == 4){
                red_light = true;
                green_light = false;
                cout << "Red Light ON!" << endl;

            } 
        }
    }
    else {
        cout << "Stop!" << endl;
    }

} 

// -------------------------------------------------------------------------------

int main(){

// int & float ------------------------------------------------------------------
// Question 1: Write a function that calculates your annual and 10 years salary,
// based  on your monthly salary

// Question 1 Answer - part 2:
float monthlySalary;
cout << "What's your monthly salary: " << endl;
cin >>  monthlySalary;

float annualSalary = AnnualSalary(monthlySalary);
float tenYearSalary = TenYearSalary(monthlySalary);

cout << "Your annual salary is: " << annualSalary << endl ;
cout << "Your 10 years salary is: " << tenYearSalary << endl;
// -------------------------------------------------------------------------------
// Question 2: Find size of int and max size of int:
// Question 2 Answer:
cout << "Size of int is: " << sizeof(int) << "bytes" << endl;
cout << "Max size of int is: " << INT_MAX << "bytes" << endl; 

// -------------------------------------------------------------------------------
// Question 3: Write a function that divides an arbitrary int number to
// subtraction of two int numbers

// Question 3 Answer - part 2:
int first_num; 
int second_num; 
int third_num;

cout << "First Number: " << endl;
cin >> first_num;
cout << "Second Number: " << endl;;
cin >>  second_num; 
cout <<  "Third Number: "<< endl; 
cin >> third_num;

float result = divisionAfterSub(first_num, second_num, third_num);
cout << "The result is: " << result << endl;

// Boolean ------------------------------------------------------------------
// -------------------------------------------------------------------------------
// Question 4: Using Boolean, write a function for a traffic light rules
// Question 4 - Part 2:

bool red_light = true; 
bool green_light = false;
trafficLight(red_light, green_light);
// boolalpha: bool values are inserted by either true or false, instead of integral values 0/1.
cout << "Size of Bollean: " << sizeof(bool) << endl; // Size of Bollean: 1

// Charecters-------------------------------------------------------------------
// char are represented by ASCII codes
cout << int('a') << endl; // returns the int value/ASCII code of 'a' in ASCII table: 97
cout << (int)'a' << endl; // returns the int value/ASCII code of 'a' in ASCII table: 97
cout << int('A') << endl; // returns the int value/ASCII code of 'A' in ASCII table: 65
cout << char(97) << endl; // returns the char value of 97 in ASCII table: a

char c1, c2, c3, c4, c5;
cout << "Enter five letters: " << endl;
cin >> c1 >> c2 >> c3 >> c4 >> c5;
cout << "c1: " <<  c1 << ": " << int(c1) << endl << "c2: " <<  c2 << ": " << int(c2) << endl << "c3: " <<   c3 << ": " << int(c3) << endl << "c4: " << c4 << ": " << int(c4) << endl << "c5: " << c5 << ": " << int(c5) << endl;

int i1, i2, i3, i4, i5;
cout << "Enter five digit: " << endl;
cin >> i1 >> i2 >> i3 >> i4 >> i5;
cout << "i1: " << i1 << ": " << char(i1) << endl << "i2: " << i2 << ": " << char(i2) << endl << "i3: " << i3 << ": " << char(i3) << endl << "i4: " << i4 << ": " << char(i4) << endl << "i5: " << i5 << ": " << char(i5) << endl ; 

}
