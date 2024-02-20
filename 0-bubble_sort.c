#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers in ascending order
 *			using the Bubble sort algorithm
 *
 * @array: A pointer to the array to be sorted
 * @size: The size of the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	 int flag = 0;

	 for(int i = 0; i < size - 1; i++){
    	 	for(int j = 0; j < size - i - 1; j++){
         		if(array[j] > array[j + 1]){
             			int tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
             			flag = 1;
         		}
    	 	}
     	if(flag == 0)
       		break;
	}
}
