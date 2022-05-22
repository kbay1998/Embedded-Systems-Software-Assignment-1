/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Embedded Systems Software and Development Environments Week One Assignment Coursera >
 *
 * Write a simple programming assignment that prints statistics to the command line using a variety of c-programming operators and features.<>
 *
 * @author <Kobena Badu Enyam>
 * @date <22nd May,2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
void main();
/* <the main function that executes the whole code>*/ 
int print_array();
/*<a function that prints an array size 40 or a 40 element array in the variable int test >*/
 
int sort_array();
/*<a function that prints a 40 element array in ascending of magnitude>*/

int find_maximum();
 /*< a function that returns the maximum value of a 40 elemet array>*/

int find_minimum();/*<a function that returns the minimum value of a 40 element array>*/

float find_mean();
/*<a function that returns the average or the mean of a 40 element array>*/

float find_median();
 /*<a function thhat returns the median of a 40 element array >*/

int print_statistics();
 /*<a function that prints the maximum value, minimum value, median and mean of a 40 element array>*/


/**
 * @brief void main <main function for code execution in c programming>
 *
 * <contains the function calls and variable for array>
 *
 * @param <int test[SIZE]> <variable for 40 element integer array>
 * @param <print_array> < function call for int print_array>
 * @param <sort_array> <fuction call for int sort_array>
 * @param <print_statistcs> <function call for int print_statistics>
 *
 * @return <>
    
 */
/**
 * @brief int print_array <prints the array in the int test variable>
 *
 * <A for loop was implemented in this fuction that prints the array horizontally>
 *
 * 
 * @param <int array[]> <points to the variable int test[SIZE]>
 * 
 *
 * @return <return 0;>
    
 */

/**
 * @brief int find_maximum <returns the maximum value in array>
 *
 * <a for loop is implemented that compares the elememts in an array to return the maximum value >
 
 
 * @param <int array[]> <points to the variable int test[SIZE]>
 
 
 *
 * @return <return 0;>
    
 */

/**
 * @brief int find_minimum <returns the minimum value of an array>
 *
 * <a for loop was implemented that compares the elements in an array to return the minimum value>
 *
 
 * @param <int array[]> <points to the variable int test[SIZE]>
 
 
 
 * @return < return minimum;>
    
 */

/**
 * @brief float find_mean< returns the mean of an array>
 *
 * <a for loop was implemented that sums the elements in an array and divides it by the size of the array>
 *
 
 * @param <int array[]> <points to the variable int test[SIZE]>
 * 
 *
 * @return <return avg;>
    
 */

/**
 * @brief float print_statistics <prints the maximum value, mininmum, mean and median of an array>
 
 * <a for loop was implemented that arranges the elements of an array in ascending order of magnitude and finds the middle value if SIZE of array is odd and computes the average of two middle elements if SIZE of array is even>
 
 
 * @param <int array[]> <points to the variable int test[SIZE]>
 
 
 * @return <return 0;>
    
 */










#endif /* __STATS_H__ */