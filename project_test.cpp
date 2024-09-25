// project_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"
/*Functions and Scope of the variable and wat happens inside the function*/


int sum(int a, int b) /*pass by value. It means that you are working with a copy of a variab;e but not variable it self */
{
	a = 15; 
	int x = a + b;
	printf("%d \n ", x); 
	return(x); 
}

int product(int* a, int* b) /* Pass by refrence or pass by pointer method */
{
	*a = 15; 
	int c = (*a) * (*b); 
	return(c); 
}

/*Variables and the scope of the variable*/
/*what is the static inside a functon , wrt to file and wrt to function */

static int  area_of_square(int side)
{
	return(side * side); 
}



int main() /*20 ms */
{
	int a = 10; 
	int b = 20;  

	int c = sum(a, b); 
	

	printf("%d \n a is  %d \n ", c , a );

	int c1 = product(&a, &b); 

	printf(" product is %d \n a is  %d \n ", c1, a);

	printf("%d", area_of_square(20)); 
	Class_test_Func(); 
	source_class_3(); 


	int p = 0;
	p = Get_Sum_Numbers();
	printf("sum of numbers is %d", p);  

	Class_4_Entry_func(); 

	return(0); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
