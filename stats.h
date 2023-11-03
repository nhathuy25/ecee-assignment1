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
 * @file stats.h 
 * @brief Function library for "stats.c"
 *
 * Declarations of 6 functions: to sort an array, to print out all the statistics of
 * the array, to find mean, median, maximum and minimum of the array.
 *
 * @author Huu Nhat Huy NGUYEN
 * @date 3/11/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void sort_array(unsigned char arr[]);
/**
 * @brief Sort the array from largest to smallest
 *
 * Given input as an array, the function will sort the array in 
 * order from the greatest value to the smallest
 *
 * @param arr[]: array of numbers to be used
 *
 * @return void
 */

void print_statistics(unsigned char arr[]);
/**
 * @brief Print out all the statistics of an array
 *
 * Given input as an array, this function will prints out maximum,  
 * minimum,, mean and median of the array
 *
 * @param arr[]: array of numbers to be used
 *
 * @return void
 */

unsigned char find_meadian(unsigned char arr[]);
/**
 * @brief Find and return the median of an array
 *
 * Given input as an array, the function will finds and returns the 
 * array's median value
 *
 * @param arr[]: array of numbers to be used
 *
 * @return The median of the array
 */

unsigned char find_mean(unsigned char arr[]);
/**
 * @brief Find and return the mean of an array
 *
 * Given input as an array, the function will finds and returns the 
 * array's mean value
 *
 * @param arr[]: array of numbers to be used
 *
 * @return The mean of the array
 */

unsigned char find_maximum(unsigned char arr[]);
/**
 * @brief Find and return the maximum of an array
 *
 * Given input as an array, the function will finds and returns the 
 * array's maximum value
 *
 * @param arr[]: array of numbers to be used
 *
 * @return The maximum of the array
 */

unsigned char find_minimum(unsigned char arr[]);
/**
 * @brief Find and return the minimum of an array
 *
 * Given input as an array, the function will finds and returns the 
 * array's minimum value
 *
 * @param arr[]: array of numbers to be used
 *
 * @return The minimum of the array
 */

#endif /* __STATS_H__ */
