# include <iostream>


using namespace std;

/* Pointers: A pointer is a variable that stores the memory address of an object.*/

int main(){

// Declaring Pointers:
int *p_number = {}; // can only store an address of a variable of type int
double *p_fractional_number = {}; // can only store an address of a variable of type double

// Explicitely initialize to Null Pointer
int *p_number1 = {nullptr};
double *p_fractional_number1 = {nullptr};


// All pointer variables have the same size

cout << "Size of number poiner: " << sizeof(p_number) << "\nSize of pointer_int: " << sizeof(int) << endl;
cout << "Size of fractional_number poiner: " << sizeof(p_number) 
        << "\nSize of pointer_double: " << sizeof(double) << endl;

cout << "Size of number1 poiner: " << sizeof(p_number) << "\nSize of pointer_int: " << sizeof(*p_number1) << endl;
cout << "Size of fractional_number1 poiner: " << sizeof(p_number) 
        << "\nSize of pointer_double: " << sizeof(*p_fractional_number1) << endl;

/* Position of the * in pointer doesn't matter. 
We cannot wirte int_pointer and int_number in one int and it is confusing. It is better to
separate these decelaration on different lines.
*/
int* p_number2;
int numner1;

//Assigning data to pointer variables
// Initializing pointers

// Pointers store the address of variables
int int_var = 43;
int* ptr_int_var = {&int_var};

cout << "Int_var: " << int_var << endl;
cout << "Address in memeory for ptr_int_var: " << ptr_int_var << endl;
cout << "Value in address in memeory for ptr_int_var: " << *ptr_int_var << endl;

// We can change the address, stored in a pointer at anytime
int int_var1 = 65;
int_var1 = 126; 
ptr_int_var = &int_var1; 
cout << "ptr_int_var(with different address): " << ptr_int_var << endl;

// Pointers only stores the type for which it was declared

int* ptr_int1 = nullptr;
double double_Var = 33;
// a value of type "double *" cannot be assigned to an entity of type "int *"
// ptr_int1 = &double_Var; --> Compiler Error

// Dereferencing a pointer
int* ptr_int2 = nullptr;
int int_data = 56;
ptr_int2 = &int_data;

cout << "Value: " << *ptr_int2 << endl;
/*--------------------------------------------------------------------------------------*/
// Declaring pointers to char

char* ptr_char_var = nullptr;
char char_var = 'A';
ptr_char_var = &char_var;

cout << "The value, stored in ptr_char_var is: " << *ptr_char_var << endl; // Dereferencing

char char_var1 = 'C';
ptr_char_var = &char_var1;

cout << "The value, stored in ptr_char_var is: " << *ptr_char_var << endl; // Dereferencing

/*--------------------------------------------------------------------------------------*/
// Initialize with string literal 
/* 
char* ptr_message = "Hello World!"; 
For this code:
there is a warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]   
   82 | char* ptr_message = "Hello World!"; so, we use constant
*/

const char* ptr_message = "Hello World!"; 
cout << "The message is: " << ptr_message << endl;
cout << "The value stored at ptr_message is: " << *ptr_message << endl;

/*--------------------------------------------------------
// The string literal is made up of const char. Not modify it!
*ptr_message = 'M'; // We want to chenge Hello to Mello 
cout << "message is(after modification of first char to M): " << ptr_message << endl;
------------------------------------------------------------------------------------- */
// We should modify the array with string literal like:
char message2[] = "Hello There!";
message2[0] = 'M';
cout << "Messages: " << message2 << endl;

/*------------------------------------------------------------------------------------*/
// Dynamic Memory Allocation
int number = 22;
int* ptr_number = &number;

cout << "Declaring pointer and assigning address:  " << endl;
cout << "Number: " << number << endl;
cout << "ptr_number: " << ptr_number << endl;
cout << "&number: " << &number << endl;
cout << "*ptr_number(dereference): " << *ptr_number << endl;

cout << "/*------------------------------------------------*/" << endl;

int* ptr_number1; // Uninitialized pointer, contain junk address
cout << "Uninitialized pointer: " << ptr_number1 << endl;
int number1 = 12;
ptr_number1 = &number1; // make it point to a valid address
cout << "Initialized pointer: " << ptr_number1 << endl;
cout << "*ptr_number1(dereference): " << *ptr_number1 << endl;
cout << "/*------------------------------------------------*/" << endl;

/* -------------------------------------------------------------
// Not appropriate Programming examples: --> Program crashes here!
// Writing into uninitialized pointer through dereference
int* ptr_number2; // Uninitialized pointer, contain junk address
*ptr_number2 = 55; // Dereferencing: Writing in data in a junk address
cout << " Writing into uninitialized pointer through dereference: " << endl;
cout << "ptr_number2" << ptr_number2 << endl;
cout << "*ptr_number2(dereference)" << ptr_number2 << endl;

// Initializing pointer to Null
int* ptr_number3 = nullptr; // Also works!
// Initializing with pointer, equivalent of zero: Nullptr --> pointer, pointing no where
int* ptr_number3 = {};
// Writing into a pointer, pointing nowhere!
*ptr_number3 = 33; // --> Crash
cout << "Reading and writting through nullptr: " << endl;
cout << "ptr_number3: " << ptr_number3 << endl;
cout << "*ptr_number3(dereference): " << *ptr_number3 << endl; // Reading from nullptr --> crash
------------------------------------------------------------- */
           /* TO SOLVE THIS PROBLEM: USE HEAP*/
/*---------------------------------------------------------------------------------------
Whatever have been shown so far was uisng memory, allocated on th stack. Now, we want to 
check how we can allocate memeory from the heap, and differences between stack and heap

Stake:
* Memory is finite
* The developer isn't in full control of the memory lifetime
* Lifetime is controlled by the scope mechanism
Example: Lifetime through scope mechanism
# include <iostream>
int main(int argc, char **argv){

    {
        int local_scope_var = 33;    
    }

return 0;
}


Heap:
* Memory is finite
* The developer is in full control of when the memory is allocated or released
* Lifetime is controlled explicity through new and delete operators

Example: Releasing and deleting 
int* ptr_number4 = nullptr;
ptr_number4 = new int;

delete ptr_number4;
ptr_number4 = nullptr;


Example: Stack lifetime VS heap lifetime
# include <iostream>
int main(int argc, char **argv){

    {
        int local_var = 33;
        int* ptr_local_var = new int;    
    }

return 0;
}
----------------------------------------------------------------------------------------*/
// Allocate dynamic memory through 'new'
/* Initialize the pointer with dynamic memory. Dynamically, allocate memory at run time and
make a pointer point to it. 
When we nefine a |new int| to a pointer, we dynamically allocate space for single int on the
heap. This memory belongs to the program for right now and the system cannot use it for anything
else, untill we return it. 
After this line executes, we will have a valid memory location. THe size of the allocated memory 
is the same as type of the pointer. */

int* ptr_number4 = nullptr;
ptr_number4 = new int;

*ptr_number4 = 77; // Writing into dynamically allocated memory
cout << "/*-----------------------------------*/" << endl;
cout << "Dynamically allocated memory: " << ptr_number4 << endl;
cout << "The value of *ptr_number4: " << *ptr_number4 << endl;

// Initialize with 'new' upon pointer declaration:
// It is also possibble to initialize the pointer with a valid address upon on declaration, 
// not with a nullptr:

int* ptr_number5 = new int;         // memory location contains junk value
int* ptr_number6 = new int(22);     // use direct initialization
int* ptr_number7 = new int{23};     // use uniform initialization

cout << "/*-----------------------------------*/" << endl;
cout << "Initialize the pointer with a valid address upon on declaration: " << endl;

cout << "ptr_number5: " << ptr_number5 << endl;
cout << "*ptr_number5: " << *ptr_number5 << endl;

cout << "ptr_number6: " << ptr_number6 << endl;
cout << "*ptr_number6: " << *ptr_number6 << endl;

cout << "ptr_number7: " << ptr_number7 << endl;
cout << "*ptr_number7: " << *ptr_number7 << endl;

/*----------------------------------------------------*/
// IMPORTANT: Remember to resease the memory
delete ptr_number5;
ptr_number5 = nullptr;

delete ptr_number6;
ptr_number6 = nullptr;

delete ptr_number7;
ptr_number7 = nullptr;

cout << "/*-----------------------------------*/" << endl;

// It is not recommended to call delete twice on a pointer --> program may crash
int* ptr_number8;
ptr_number8 = new int{77};

cout << "calling delete twice on a pointer is BAD!" << endl;
cout << "ptr_number8: " << ptr_number8 << endl;
cout << "*ptr_number6: " << *ptr_number8 << endl;

/*
delete ptr_number8;
delete ptr_number8;
ptr_number8 = nullptr;
*/
cout << "After deleting twice!" << endl;

/*----------------------------------------------------------------------------------*/
/* Dangling Pointers: 
A dangling pointer is a pointer that points to invalid data or to data which is not valid anymore.
A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer. 
A pointer rhat doesn't point to valid memory address. 
Using a dangling pointer and dereferencing will result in undefined behavior.
There are three different ways where Pointer acts as dangling pointer: 
- Unintitialized pointer
- Deleted Pointer
- Multiple pointers, pointing to same memory
*/
/*----------------------------------------------------------------------------------*/
// Case 1- Unintitialized pointer
int* p_number9;      // Dangling unintitialized pointer --> doesn't point anywhere
cout << "\nCase 1: Unintitialized pointer: " << endl;
cout << "The *p_number9 address is: " << p_number9 << endl;
cout << "This is a junk address" << endl;
cout << "The value in pointer: p_number9 is: " << *p_number9 << endl;
cout << "This is a crash not a real value!" << endl;

// Case 2- Deleted Pointer
cout << "\nCase 2: Deleted Pointer: " << endl;
int* p_number10 = new int{67};
cout << "*P_number10 address (before delete) is: " << p_number10 << endl;
cout << "*P_number10 value (before delete) is: " << *p_number10 << endl;
delete p_number10;  
cout << "*P_number10 address (after delete) is: " << p_number10 << endl;
cout << "*P_number10 value (after delete) is: " << *p_number10 << endl;
cout << "Value: " << *p_number10 << " is not the same as initial value: 67 --> junk/crash" << endl;

// Case 3- Multiple pointers, pointing to same memory
cout << "Case 3: Multiple pointers, pointing to same memory: " << endl; 
int* p_number11 = new int{83};  // pinter in heap 
int* p_number12 = p_number11;

cout << "Address: " << p_number11 << " and Value: " << *p_number11 << endl;
cout << "Address: " << p_number12 << " and Value: " << *p_number12 << endl;

// Deleting p_number11
delete p_number11;

// p_number12 points to deleted memory. Dereferencing it will lead to undefined bahavior. --> Crash/garbage

cout << "After deleting p_number11: \np_number12: Address: " << p_number12 << " and Value: " << *p_number12 << endl;
cout << "Dereferencing it will lead to undefined value!" << endl;

/*--------------------------------------------------------------------------*/
// Solutions to the mentioned problems:
// 1. Initialize the pointer
// 2. Reset pointers after delet --> nullptr
// 3. For multiple pointers to same address, make sure the owner pointer is defined!

 // solution 1: Initialize the pointer immediately upon declaration
 cout << "*----------------------------------*" << endl;
 cout << "solution 1: Initialize the pointer immediately upon declaration!" << endl; 
 int* ptr_1 = {};
 int* ptr_2 = new int{56};

// Check for the nulptr before use
if(ptr_2 != nullptr){
    cout << "Address *ptr_2: " << ptr_2 << "\nValue *ptr_2: " << *ptr_2 << endl; 
} else
{
    cout << "Invalid address!" << endl;
}

// solution 2. Reset pointers after delet --> nullptr
cout << "solution 2. Reset pointers after delet --> nullptr" << endl;
delete ptr_2;
ptr_2 = nullptr;

if(ptr_2 != nullptr){
    cout << "Address *ptr_2: " << ptr_2 << "\nValue *ptr_2: " << *ptr_2 << endl; 
} else
{
    cout << "Invalid address!" << endl;
}

// Solution 3. For multiple pointers to same address, make sure the owner pointer is defined!

cout << "Solution 3. For multiple pointers to same address, make sure the owner pointer is defined!" << endl;
int* ptr_3 = new int{300};
int* ptr_4 = ptr_3; 
cout << "Address *ptr_3: " << ptr_3 << "\nValue *ptr_3: " << *ptr_3 << endl; 

if(ptr_3 != nullptr){ // only use slave pointers when master pointer is valid
    cout << "Address *ptr_4: " << ptr_4 << "\nValue *ptr_4: " << *ptr_4 << endl; 
} else
{
    cout << "Invalid address!" << endl;
}

delete ptr_3; // master releases the memory
ptr_3 = nullptr; // reset the master


if(ptr_3 != nullptr){ // only use slave pointers when master pointer is valid
    cout << "Address *ptr_4: " << ptr_4 << "\nValue *ptr_4: " << *ptr_4 << endl; 
} else
{
    cout << "Invalid address!" << endl;
}



}