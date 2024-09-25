#include "Header.h"

/*logical operators*/
/*Global variables*/
/*static wrt to global variables*/
/*For loop and while loop */
/*Recursion basic example */
/*enum  or user defined datatypes . */
/*how to debug */

static int iterator = 0; 
int sum_s = 0; 



void  Print_Sum_Number(int n)
{
	int itr = 0; 
	if (n >= 0)
	{
		for (itr = 0; itr < n; itr++)
		{
			sum_s = sum_s + itr;
		}
	}
	else
	{
		/*These types of traps are deibrately written in the code to catch the development erros and customer doesnot see this*/
		while (1) {}   /*Infinite loop get stuck here and donsot proceed to next part of the code. */
	}
}


/*int takes values from -2pow31 to 2pow31 . int can have negative numbers  */

/*Every unit will have a entery function that is called from main . 
  .c : unit file 
  .h : interface file 
  */

void source_class_3(void)
{
	int n = 0;  
	printf(" Enter the number of consequtive elements for which sum has to be created. The requiremetns is first element should be 0 ");
	//scanf_s("%d", &n);
	Print_Sum_Number(n);
}
