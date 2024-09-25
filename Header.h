#pragma once

#include <stdio.h>
#include <stdint.h>


/*Header file is considered to  be a interface between the .c files and .cpp files*/

/*enum is a user defined type  */
typedef enum
{
	Valid_input = 0,
	Invalid_input

}Ret_Vaue_sum;


extern void  Class_test_Func();
extern void Class_4_Entry_func();
extern void source_class_3(); 
extern void Print_Sum_Number(int n);
extern int sum_s; 

#define Get_Sum_Numbers() (int)sum_s 

	



