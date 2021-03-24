#include<stdio.h>
#include<stdlib.h>
#include "complex.h"
#include "unity.h"
#include "unity_internals.h"
complex_t complex_num1, complex_num2, complex_result;
void setUp(){}
void tearDown(){}
void test_div(void)
{
    complex_num1.real=10.0;
    complex_num2.real=10.0;
    complex_num1.imaginary=0.0;
    complex_num2.imaginary=0.0;
    TEST_ASSERT_EQUAL_STRING("SUCESS",div_complex(&complex_num1,&complex_num2,&complex_result));
}
int main()
{
UNITY_BEGIN();
RUN_TEST(test_div);
UNITY_END();
return 0;
}
