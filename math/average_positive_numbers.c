// Computes and returns the average of the positive numbers only in an array
// 02/22/2025

#include <stdio.h>
double posAverage(int numbers[], int size){
    
    
    //Write your code to find average of positive numbers in numbers array
    //return the answer
    int sum = 0;
    for(int i = 0; i < size; i++)
    {   
        if(numbers[i] > 0)
        {
             sum += numbers[i];
        }
    
    
    
       
    }
    
    
    return sum /(double)size;
    
    
}

int main() {
	
	int t; scanf("%d", &t);

	
	return 0;
}


// } Driver Code Ends