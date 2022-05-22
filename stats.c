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
 * @file <stats.c> 
 * @brief <Embedded Systems Software and Development Environments Week One Assignment >
 *
 * <Write a simple programming assignment that prints statistics to the command line using a variety of c-programming operators and features.>
 *
 * @author <Kobena Badu Enyam>
 * @date <22nd May, 2022 >
 *
 */

#include <stdio.h>
#include <stdlib.h>


/* Size of the Data Set */
#define SIZE (40)

int print_array();
int sort_array();
int find_maximum();
int find_minimum();
float find_mean();
float find_median();
int print_statistics();

void main() {
  

  /*unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};*/

  /* Other Variable Declarations Go Here */
  int test[SIZE] =          {34,201, 190, 154,8,194,2, 6,
                             114, 88, 45, 76, 123, 87, 25, 23, 
                             200, 122, 150, 90, 92, 87, 177, 244,
                             201, 6, 12, 60, 8, 2, 5, 67,
                             7, 87,250, 230, 99, 3, 100, 90};

  print_array(test);
  sort_array(test);
 
  /* Statistics and Printing Functions Go Here */
  print_statistics(test);

}


/* Add other Implementation File Code Here */
int print_array(int array[]){

    for (int i=0; i<SIZE; i++){
        printf("%d\t", array[i]);
    }

    return 0;
}

int sort_array(int array[]){
  int temp=0;

  for (int i = 0; i<SIZE;i++){  
    for (int j = i; j<SIZE; j++){
      if(array[j] < array[i]){ 
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  printf("Printing Sorted Element list...\n");
  for(int i=0; i<SIZE; i++){ 
     printf("%d\n", array[i]);
 }
 return 0;
}

int find_maximum(int array[]){
  int maximum = array[0];
  int sec_maximum = array[1];
  
  for(int i=0; i<SIZE; i++){
    if(array[i]>maximum){
      sec_maximum = maximum;
      maximum = array[i];
    }
    else if(array[i]>sec_maximum && array[i]!=maximum){
      sec_maximum = array[i];
    }
  }
  return maximum;
}

int find_minimum(int array[]){
  int minimum = array[0];
  int sec_minimum = array[1];
  
  for(int i=0; i<SIZE; i++){
    if(array[i]<minimum){
      sec_minimum = minimum;
      minimum = array[i];
    }
    else if(array[i]<sec_minimum && array[i]!=minimum){
      sec_minimum = array[i];
    }
  }
  return minimum;
}

float find_mean(int array[]){

  float sum = 0, avg = 0;
  
  for(int i=1; i<=SIZE;i++){
    sum = sum + array[i];
    avg = sum / SIZE;
  }
  return avg;
}

float find_median(int array[]){
    int i, j;
    float median, t;
    for(i=1; i<=SIZE-1;i++){
        for (j=1; j<=SIZE-1;j++){
            if(array[j] <= array[j+1]){
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
                }
            else
                continue;
        }
    }
  
    if(SIZE%2==0){
        median = (array[SIZE/2] + array[SIZE/2 + 1])/2.0;
    }
  
    else{
        median = array[SIZE/2 + 1];
    }
    
    return median;
}

int print_statistics(int array[]){

    int maximum = find_maximum(array);
    int minimum = find_minimum(array);
    float mean = find_mean(array);
    float median = find_median(array);

    printf("Maximum = %d\n", maximum );
    printf("Minimum = %d\n", minimum);
    printf("Mean = %.3f\n", mean);
    printf("Median = %.3f\n", median);
    
  return 0;
}
