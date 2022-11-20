# include<iostream>

using namespace std;

/* -----------------------------------------------------------
https://www.programiz.com/cpp-programming/operators#arithmetic
______________________________________________________________
1: Arithmetic Operators
--------------------------------------------------------------
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulo Operation (Remainder after division)
______________________________________________________________
2. Increment and Decrement Operators
--------------------------------------------------------------
++ increases the value of the operand by 1
-- decreases it by 1
______________________________________________________________
3. C++ Assignment Operators
--------------------------------------------------------------
Operator    Example	    Equivalent to
=	        a = b;	    a = b;
+=	        a += b;	    a = a + b;
-=	        a -= b;	    a = a - b;
*=	        a *= b;	    a = a * b;
/=	        a /= b;	    a = a / b;
%=	        a %= b;	    a = a % b;
______________________________________________________________
4. Relational Operators
--------------------------------------------------------------
Operator	Meaning	                    Example
==	        Is Equal To	                3 == 5 gives us false
!=	        Not Equal To	            3 != 5 gives us true
>	        Greater Than	            3 > 5 gives us false
<	        Less Than	                3 < 5 gives us true
>=	        Greater Than or Equal To	3 >= 5 give us false
<=	        Less Than or Equal To	    3 <= 5 gives us true
______________________________________________________________
5. Logical Operators
--------------------------------------------------------------
Operator	Example	                        Meaning
&&	        expression1 && expression2	    Logical AND (True only if all the operands are true)
||	        expression1 || expression2	    Logical OR(True if at least one of the operands is true)
!	        !expression	                    Logical NOT(True only if the operand is false)
______________________________________________________________
6. Bitwise Operators
--------------------------------------------------------------
Operator	Description
&	        Binary AND
|	        Binary OR
^	        Binary XOR
~	        Binary One's Complement
<<	        Binary Shift Left
>>	        Binary Shift Right
______________________________________________________________
7. Other C++ Operators
--------------------------------------------------------------
Operator	Description	Example
sizeof	    returns the size of data type	sizeof(int); // 4
?: 	        returns value based on the condition	string result = (5 > 0) ? "even" : "odd"; // "even"
&	        represents memory address of the operand	&num; // address of num
.	        accesses members of struct variables or class objects	s1.marks = 92;
->	        used with pointers to access the class or struct variables	ptr->marks = 92;
<<	        prints the output value	cout << 5;
>>	        gets the input value	cin >> num;
--------------------------------------------------------------
Input/output manipulators:
https://en.cppreference.com/w/cpp/io/manip
-------------------------------------------------------------*/
int a = 4;
int b = 6; 

int main(){

// printing the sum of a and b
cout << "a + b = " << a + b << endl;
// printing the difference of a and b
cout << "a - b = " << (a - b) << endl;

// printing the product of a and b
cout << "a * b = " << (a * b) << endl;

// printing the division of a by b with int result
cout << "a / b = " << (a / b) << endl;

// printing the division of a by b and with float result
cout << "a / b = " << static_cast<float>(static_cast<float>(a) / static_cast<float>(b)) << endl;

// printing the modulo of a by b
cout << "a % b = " << (a % b) << endl << endl;

//----------------------------------------------------------------------
// incrementing a by 1 and storing the result in result_a
int result_a = ++a;
cout << "result_a = " << result_a << endl;
// decrementing b by 1 and storing the result in result_b   
int result_b = --b;
cout << "result_b = " << result_b << endl << endl;
//----------------------------------------------------------------------
// assigning the sum of a and b to a
a += b;  // a = a + b
cout << "(a+=b) = a = " << a << endl;
// assigning the difference of a and b to a
a -= b;  // a = a - b
cout << "(a-=b) = a = " << a << endl;
// assigning the product of a and b to a
a *= b;  // a = a * b
cout << "(a*=b) = a = " << a << endl;
// assigning the division of a and b to a
a /= b;  // a = a / b
cout << "(a/=b) = a = " << a << endl;
// assigning the modulo of a and b to a
a %= b;  // a = a % b
cout << "(a%=b) = a = " << a << endl << endl;
//----------------------------------------------------------------------
cout << boolalpha << endl;
cout << "(a == b) is " << (a == b) << endl;
cout << "(a != b) is " << (a != b) << endl;
cout << "(a > b) is " << (a > b) << endl;
cout << "(a < b) is " << (a < b) << endl;
cout << "(a >= b) is " << (a >= b) << endl;
cout << "(a <= b) is " << (a <= b) << endl;
//----------------------------------------------------------------------

int x = 6;
int y = 4;

cout << boolalpha << endl; 
cout << "(x == y) && (x < y) is " << ((x == y) && (x < y)) << endl;
cout << "(x == y) && (x > y) is " << ((x == y) && (x > y)) << endl;
cout << "(x != y) || (x < y) is " << ((x != y) || (x < y)) << endl;
cout << "(x != y) || (x > y) is " << ((x != y) || (x > y)) << endl;
cout << "(x == y) || (x > y) is " << ((x == y) || (x > y)) << endl;
cout << "!(y == 2) is " << !(y == 2) << endl;
cout << "!(y == y) is " << !(y == y) << endl;


return 0;
}