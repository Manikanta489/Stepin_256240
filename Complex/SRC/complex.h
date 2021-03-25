/**
 * @file complex.h
 * @author Manikanta Suri
 * @brief Header file for complex addition, subtraction, multiplication and division functions
 * @version 0.1
 * @date 2021-03-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

typedef struct complex_t {
float real;
float imaginary;
} complex_t;

char* add_complex(complex_t *complex_num1, complex_t *complex_num2, complex_t *complex_result);
/**
 * @brief complex addition
 * 
 * @param complex_num1 
 * @param complex_num2 
 * @param complex_result 
 * @return status of program
 */
char* subtract_complex(complex_t *complex_num1, complex_t *complex_num2, complex_t *complex_result);
/**
 * @brief subtraction
 * 
 * @param complex_num1 
 * @param complex_num2 
 * @param complex_result 
 * @return status of program
 */
char* mult_complex(complex_t *complex_num1, complex_t *complex_num2, complex_t *complex_result);
/**
 * @brief complex multiplication
 * 
 * @param complex_num1 
 * @param complex_num2 
 * @param complex_result 
 * @return status of program
 */
char* div_complex(complex_t *complex_num1, complex_t *complex_num2, complex_t *complex_result);
/**
 * @brief complex division
 * 
 * @param complex_num1 
 * @param complex_num2 
 * @param complex_result 
 * @return status of program
 */
#endif 
