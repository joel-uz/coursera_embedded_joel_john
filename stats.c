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
 * @file stats.c
 * The file runs to give the arithmetic expressions including the maximum
 * minimum, average and the various Statistical tools.
 * 
 *
 * @author Joel John
 * @date 19-03-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  /* Function to find the maximum*/
  unsigned char find_max(unsigned char arr[], int length){
      int max = arr[0];
      for (int i = 0; i<length; i++){
          if (arr[i]>=max){
              max = arr[i];
          }
      }
      return max;
  }
  
  /* Function to find the minimum*/
  unsigned char find_min(unsigned char arr[], int length){
      int min = arr[0];
      for (int i = 0; i<length; i++){
          if (arr[i]<=min){
              min = arr[i];
          }
      }
      return min;
  }
  
  /* Function to find the mean value*/
  float find_mean(unsigned char arr[], int length){
      int sum = 0;
      for (int i = 0; i<length; i++){
          sum += arr[i];
      }
      float mean_val = sum/(float)length;
      return mean_val;
  }
  
  /* Function to sort the array and print the values*/
  unsigned char sort_array(unsigned char arr[], int length){
      for (int i = 0 ; i < length ; i++){
       for (int j = 0 ; j <length ; j++){
          if (arr[j] <= arr[j+1]){
             int t = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = t;
          } else
          continue ;
        }
      }
    printf("The sorted array - \n");
    for (int i = 0; i<length; i++){
        printf("%d,",arr[i]);
    }
  }
  
  /* Function to find the median value*/
  float find_median(unsigned char arr[], int length){
      int median;
        for (int i = 0 ; i < length ; i++){
       for (int j = 0 ; j <length ; j++){
          if (arr[j] <= arr[j+1]){
             int t = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = t;
          } else
          continue ;
        }
      }
      if (length % 2 == 0) {
        return (arr[length / 2] + arr[length / 2 - 1]) / 2.0;  // Average of two middle elements
    } else {
        return arr[length / 2];  // Middle element
    }
  }
  
  
  /* Statistics and Printing Functions Go Here */
  
  /* Printing the whole array*/
  void print_array(unsigned char arr[], int length){
      printf("Printing array - \n");
      for (int i = 0; i<length; i++){
          printf("%d, ",arr[i]);
      }
  }
  
  /* To show the max, min, mean and median*/
  void print_statistics(unsigned char arr[], int length){
      printf("Maximum value - %d\n", max(arr,length));
      printf("Minimum value - %d\n", min(arr,length));
      printf("Mean value - %.3f\n", mean(arr,length));
      printf("Median value - %.2f\n", median(arr,length));
  }
  
 }
 
 
/* Add other Implementation File Code Here */
