/*logical operators*/
/*user defined datatypes (structures and enumerations) */
/*arrays */
/*Recursion basic example and why the recursion is not sued in the embedded systems  */
/*how to debug */

#include "Header.h"
#include <stdlib.h>
/*generally the c files have extension .c not .cpp  */
/*logical operators are && || ! */

/* && : all the conditions should be true to return a tru value */ 
/* || : either of the conditiosn can be true
   !  : Reverses the reuslt*/

static int factorial(int n); 
static uint32_t bit_test; 

uint8_t arr_c[20] = { 0 }; /*array of 8 numbers and 8 numbers should be of the same dataype*/
typedef enum
{
	US_Passport,
	Diplomatic_passport,
	PassPort_With_VISA,
	PassPORT_Without_VISA

}visa_eligiblity; 

typedef struct
{
	const char *name; 
	uint8_t age; 
	bool  eligibility;
}US_VISA_Type;

static void Set_Bits_32(uint32_t* ptr_variable, uint8_t bit)
{
	if ((ptr_variable != NULL) && ((bit >= 0) && (bit < 32)))
	{
		*ptr_variable = *ptr_variable | (1 << bit); 
	}
	else
	{
		printf("Wrong bit number  \n"); 
		while (1) {} /*Triggr an exception for the user to fix */
	}
}

;

bool Visa_eligibilty_USA(visa_eligiblity inp )
{
	if ((inp == US_Passport) || (inp == Diplomatic_passport) || (inp == PassPort_With_VISA))
	{
		return(true); 
	}
	else
	{
		return(false); 
	}

}

void Class_4_Entry_func()
{
	printf("This class 4 entry function \n "); 
	Set_Bits_32(&bit_test, 3); 
	Set_Bits_32(&bit_test, 4);
	Set_Bits_32(&bit_test, 5);
	//Set_Bits_32(&bit_test, 32);
	printf("US_PASSPORT %d \n " , Visa_eligibilty_USA(US_Passport));
	printf(" Diplomatic_passport %d \n ", Visa_eligibilty_USA(Diplomatic_passport));
	printf(" PassPort_With_VISA %d \n", Visa_eligibilty_USA(PassPort_With_VISA));
	printf(" PassPort_Without_VISA%d \n ", (!Visa_eligibilty_USA(PassPORT_Without_VISA)));

	/* Try to use tjhe heap*/
	US_VISA_Type* ptr = (US_VISA_Type*)malloc(sizeof(US_VISA_Type)); 

	ptr->name = "sam"; 
	ptr->age = 20;
	ptr->eligibility = Visa_eligibilty_USA(Diplomatic_passport); 
	printf(" PassPort_Without_VISA%d \n ", (!Visa_eligibilty_USA(PassPORT_Without_VISA)));
	printf("factorial is %d",factorial(3));

}

/*3 rules for recursion 
1 . Recursion should have a terminating statement
2.  Condition for teermination
3.  Recursion should only be used for the divide where due to limitation of stack*/

int factorial(int n)
{
	if ((n == 0) || (n ==1))
	{
		return(1); /*Terminating contion */
	}
	else
	{
		return((n * factorial(n - 1)));
	}
}

