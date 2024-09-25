
#include "Header.h" 

static int  area_of_square(int side);

static void test_scope_variable(); 
static void test_scope_variable_global();

static void test_scope_variable()
{
    int i = 0;
    printf("Output of the stack  variable is \t \n %d ", i);
    i++;

}
static void test_scope_variable_global()
{
    static int i1 = 0;
    printf("Output of the static variable is \t \n %d ", i1); 
    i1++; 
}

void  Class_test_Func()
{
    
   // printf("Pizza is my fav dish \n ");
    for (int i = 0; i < 10; i++)
    {
        test_scope_variable();
    }

    for (int i = 0; i < 10; i++)
    {
        test_scope_variable_global();
    }

  
     
}