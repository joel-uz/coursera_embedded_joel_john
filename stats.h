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
 * @brief This is a header file showing the info of every
 * functions and what they do along with the parameters
 * required.
 *
 * @author Joel John
 * @date 19-03-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

  char find_min(char arr, int length);
  /**
 * The function gives the minimum value of the array provided.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return returns the minimum array value
 */
  
  char find_max(char arr, int length);
  /**
 * The function gives the maximum value of the array provided.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return returns the maximum array value
 */
 
  char find_mean(char arr, int length);
  /**
 * The function gives the mean value of the array provided.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return returns the mean array value in float upto 3 decimals
 */
 
  char find_median(char arr, int length);
  /**
 * The function gives the median value of the array provided.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return returns the median array value and upto 2 decimals
 */
 
  char sort_array(char arr, int length);
  /**
 * The function does the reverse sorting process in descending order.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return it prints out the elements which have got sorted
 */
 
  void print_array(char arr, int length);
  /**
 * The function prints the whole array.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return doesnot return but shows the array
 */
 
  void print_statistics(char arr, int length);
  /**
 * The function provides the statistical output values.
 * @param arr - the array variable
 * @param length - the size of the array
 *
 * @return shows the mean, median, max and min values of the array.
 */



#endif /* __STATS_H__ */
