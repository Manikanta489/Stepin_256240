#include<stdio.h>
#include<stdlib.h>
#include "complex.h"
#include "unity.h"
#include "unity_internals.h"
complex_t complex_num1= {10.0,10.0};
complex_t complex_num2= {10.0,10.0}; 
complex_t complex_result;
void setUp(){}
void tearDown(){}
void test_add(void)
{
    TEST_ASSERT_EQUAL_STRING("SUCESS",add_complex(&complex_num1,&complex_num2,&complex_result));
    TEST_ASSERT_EQUAL(20.0,complex_result.real);
    TEST_ASSERT_EQUAL(20.0,complex_result.imaginary);
}
void test_subtract(void)
{
    TEST_ASSERT_EQUAL_STRING("SUCESS",subtract_complex(&complex_num1,&complex_num2,&complex_result));
    TEST_ASSERT_EQUAL(0.0,complex_result.real);
    TEST_ASSERT_EQUAL(0.0,complex_result.imaginary);
}
void test_mult(void)
{
    TEST_ASSERT_EQUAL_STRING("SUCESS",mult_complex(&complex_num1,&complex_num2,&complex_result));
    TEST_ASSERT_EQUAL(0.0,complex_result.real);
    TEST_ASSERT_EQUAL(200.0,complex_result.imaginary);
}
void test_div(void)
{
    TEST_ASSERT_EQUAL_STRING("SUCESS",div_complex(&complex_num1,&complex_num2,&complex_result));
    TEST_ASSERT_EQUAL(1.0,complex_result.real);
    TEST_ASSERT_EQUAL(0.0,complex_result.imaginary);
}
int main()
{
UNITY_BEGIN();
RUN_TEST(test_add);
RUN_TEST(test_subtract);
RUN_TEST(test_mult);
RUN_TEST(test_div);
UNITY_END();
return 0;
}
