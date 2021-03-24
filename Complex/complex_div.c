#include "complex.h"
#include<stddef.h>
char* div_complex(complex_t *complex_num1, complex_t *complex_num2, complex_t *complex_result)
{
    if(complex_num1==NULL)
    return "UNABLE TO ALLOCATE MEMORY";
    else if (complex_num2==NULL)
     return "UNABLE TO ALLOCATE MEMORY";
    else if (complex_result==NULL)
      return "UNABLE TO ALLOCATE MEMORY";
    else
    {
    if((complex_num2->imaginary!=0)&&(complex_num2->imaginary!=0))
    {
    complex_result->real=((complex_num1->real*complex_num2->real)+(complex_num1->imaginary*complex_num2->imaginary))/(complex_num2->real*complex_num2->real+complex_num2->imaginary*complex_num2->imaginary);
    complex_result->imaginary=(-(complex_num1->real*complex_num2->imaginary)+(complex_num1->imaginary*complex_num2->real))/(complex_num2->real*complex_num2->real+complex_num2->imaginary*complex_num2->imaginary);
    return "SUCESS";
    }
    else
    return "ZERO DIVISION ERROR";
    }
}