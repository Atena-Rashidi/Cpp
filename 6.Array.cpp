#include<iostream>
#include <vector>

using namespace std;

/* ------------------------------------------------------------------------------------------------------------------------
https://www.cpp.edu/~elab/ECE114/Array.html#:~:text=An%20array%20is%20a%20collection,each%20with%20its%20own%20identifier).

An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced
by using an index to a unique identifier.For example, five values of type int can be declared as an array without having to 
declare five different variables (each with its own identifier).
--------------------------------------------------------------------------------------------------------------------------*/

int main(){

/* Declaring and Reading from an Array*/
int scores[10];     // an array, storing 10 intigers

cout << "Reading out sccore values: " << endl;
cout << "Scores[0]: " << scores[0] << endl;         // Only print out junk
cout << "Scores[1]: " << scores[1] << endl;         // Only print out junk
//
cout << "Scores[9]: " << scores[9] << endl;         // Only print out junk
cout << "\n" << "\n";

/*---------------------------------------------------------------------------------*/
/*Looping through an array*/
for (size_t i = 0; i<10; i++){
    cout << "Scores[" << i << "]: " << scores[i] << endl;
}

cout << "-------------------------------------------------" << endl;
/*---------------------------------------------------------------------------------*/
/*Writing data into an array*/
// Now, we want to write our own data in the defined scores array, so we won't print
// out any junk data 
// Question uestion 1: Write a code using for loop to fill out the array with numbers that are
// multiples of 3

// Write Data
for (size_t i = 0; i < 10; i++){
    scores[i] = i*3;
}  

// Read Data
for (size_t i = 0; i<10; i++){
    cout << "Scores[" << i << "]: " << scores[i] << endl;
}

// Reading past bounds of the array will print out something that you didn't assign.
cout << "Scores[10]: " << scores[10] << endl;  

/*---------------------------------------------------------------------------------*/
/*Declare and initialize at the same time*/
cout << "\nDeclare and initialize at the same time: " << endl;
double salaries[5] = {12.3, 4.5, 7.6, 8.1, 5.5};
// Read Data
for(size_t i = 0; i < 5; i++){
    cout << "salaries[" << i << "]: " << salaries[i] << endl;
}

/*---------------------------------------------------------------------------------*/
// If you don't initialize all the elements in the array, those are left out will be
// initialized to zero.

cout << "\n-------------------" << endl;
int Numbers[5] = {4, 6, 9};
// Read Data
for(size_t i = 0; i < 5; i++){
    cout << "Numbers[" << i << "]: " << Numbers[i] << endl;
}

/*---------------------------------------------------------------------------------*/
// Array Declaration: Omit size
// Range based loop: We declared the value, but omited the size. We use auto type to
// read the values from array.
cout << "\n-------------------" << endl;
int class_size[] = {30, 27, 15, 20, 45};
// Read Data
for(auto value: class_size){
    cout << "value: " << value << endl;
}

/*---------------------------------------------------------------------------------*/
// If we define const for the array then we won't be able to change the value
const int cookies[] = {3, 4, 7, 2, 10, 5};
// cookies[3] = 8; --> expression must be modifiable

/*---------------------------------------------------------------------------------*/
// Operation and Data Stored in Arrays
// Question 2: Sum up all points in the defined points array and store the result in 
// sum using range based loop

cout << "\n-------------------" << endl;
float points[] = {70, 76.3, 87.8, 90, 95};
float sum = 0;
for(float count: points){
    sum += count;
}
cout << "Total points: " << sum << endl;
cout << "/*--------------------------------*/" << endl;

// In we don't define the size of array of numbers and print them out, we get garbage!
// Can't safetly print out arrays other than those characters!\n This method only works for char
int Number1[] = {1, 2, 3, 4, 5};
cout << "Numbers: " << Number1 << endl;
cout << "Can't safetly print out arrays other than those characters!\nThis method only works for char" << endl;
cout << "/*--------------------------------*/" << endl;

/*---------------------------------------------------------------------------------*/
/* Size of Array: 
------------------------------------------------------------------------------------
By getting the size of an array in the runtime we will be able to change or update
the array. Before C++17 developer used the following method to to get the size
of an array and then they were able to update the array. But now, using std::size()
we are able to update an array and print out its elements. The other method is using 
range based loop just to print out as much as the number of the length of an array.*/ 
int grades[] = {80, 87, 90, 100, 93};

// Question 3: Write out the data in an array using old method 
cout << "Size of grades[]: " << sizeof(grades) << endl;
cout << "Size of grades[0]: " << sizeof(grades[0]) << endl;
cout << "grade item count: " << sizeof(grades)/sizeof(grades[0]) << endl;

int sizeOfArr = sizeof(grades)/sizeof(grades[0]);
cout << "Print out array items: " << endl;
for (size_t j = 0; j < sizeOfArr; j++){
    cout << "grade[" << j << "]: " << grades[j] << endl;
    }

cout << "/*--------------------------------*/" << endl;

/*---------------------------------------------------------------------------------*/
// // Question 4: Write out the data in an array using std::size()
// // std::size() is available starting from C++17
// cout << "grades size: " << size(grades) << endl;
// for(size_t k = 0; k < size(grades); k++){
//     cout << "grade[" << k << "]: " << grades[k] << endl;
// }
// cout << "/*--------------------------------*/" << endl;

/*---------------------------------------------------------------------------------*/
// Question 5: Write out the data in an array using rang based loop

for(int grade: grades){
    cout << "grade: " << grade << endl;
}

/*-------------------------------------------------------------------------------
Arrays Of Characters:
---------------------------------------------------------------------------------
*/
// Question 6: Writ out the data from a char array using range based loop 
char messages[] = {'H', 'E', 'L', 'L', 'O'};
cout << "Message: " << endl;
for (auto message: messages){
    cout << "Message: " << message << endl;
}

// Question 7: Change char array[0] to 'M'

messages[0] = 'M';
cout << "\nModify Array Data: " << endl;
for (auto message: messages){
    cout << "Message: " << message << endl;
}

/* ----------------------------------------------------------------------------
To print out the charecters correctly we can use Null Termination at the end of the
Array. It prevents prenting out any unwanted charecters
Also, we can print out a char array dirrectly without for loop.
-------------------------------------------------------------------------------*/
cout << "/*--------------------------------*/" << endl;
char note[5] = {'A', 'T', 'E', 'N', 'A'};
cout << "\nNote: " << note << endl;

cout << "Put Null Termination to get rid of garbage!" << endl;

char note1[6] = {'A', 'T', 'E', 'N', 'A', '\0'};
cout << "\nNote1: " << note1 << endl;

char note2[] = {'C', '+', '+', '\0'};
cout << "\nNote2: " << note2 << endl;
cout << "Size of Note2: " << sizeof(note2) << endl;

// for a defined size, whatever is left will be assigned to NUll
char note3[4] = {'C', '+', '+'};
cout << "\nNote3: " << note3 << endl;
cout << "Size of Note3: " << sizeof(note3) << endl;

// for not a defined size, we don't see anything correct
char note4[] = {'C', '+', '+'};
cout << "\nNote4: " << note4 << endl;
cout << "Size of Note4: " << sizeof(note4) << endl;

// String Literal : A string literal represents a sequence of characters that together form 
// a null-terminated string. The characters must be enclosed between double quotation marks.
// If we want to store a string in a program: 

char note5[] = {"Hello, How are you doing?"};
cout << "\nNote5: " << note5 << endl;
cout << "Size of Note5: " << sizeof(note5) << endl;

// Array Bounds
int Number2[] = {1,2,3,4,5,6,7,8,9};
// Read beyond bonds: Will read garbage or crash your program
cout << "Numbers[] = {1,2,3,4,5,6,7,8,9}" << endl;
cout << "Number[12]: "<< Number2[12] << endl;
/* If we write beyond bounds, the compiler allows it but you don't have the permission to access
the momeory at index 12. So, other programs may modify it and your program may read bous data at 
a later time. Or it can corrupt data, used by other parts of the program.*/

Number2[12] = 1000;
cout << "Number[12]: "<< Number2[12] << endl;


}