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
 * @file stat.c
 * @brief C-programming Implementation
 *
 * Week 1 Assignment of the course "Introduction to Embedded Systems"
 *
 * @author Huu Nhat Huy NGUYEN
 * @date 1st November 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Functions definition */

void sort_array(unsigned char arr[]){
  unsigned int temp;
  for(int i=0; i<SIZE; i++){
    for(int j=i; j<SIZE; j++){
      if(arr[j]>arr[i]){
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
      } 	
    } 
  }
}

void print_array(unsigned char arr[]){
  for(int i=0; i<SIZE; i++){
  printf("%d ", arr[i]);
  }
}

unsigned char find_median(unsigned char arr[]){
  sort_array(arr);
  return arr[SIZE/2];
}

unsigned char find_mean(unsigned char arr[]){
  sort_array(arr);
  int s=0;
  for(int i=0; i<SIZE; i++){
    s+= arr[i];
  }
  s/=SIZE;
  return s;
}

unsigned char find_maximum(unsigned char arr[]){
  sort_array(arr);
  return arr[0];
}

unsigned char find_minimum(unsigned char arr[]){
  sort_array(arr);
  return arr[SIZE-1];
}

void print_statistics(unsigned char arr[]){
  printf("\nMedian: %d", find_median(arr));
  printf("\nMean: %d", find_mean(arr));
  printf("\nMaximum: %d", find_maximum(arr));
  printf("\nMinimum: %d", find_minimum(arr));
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  sort_array(test);
  print_array(test);
  print_statistics(test);
}


/* Add other Implementation File Code Here */
