#include <stdio.h>
#include <stdlib.h>

typedef struct SensorData{
    float temp;
}SensorData;


float average(SensorData* values, int n_values){
    
    float sum=0; 
    for(int i=0; i<n_values; i++){
        sum += values[i].temp;
    }
    
    float average = sum/n_values;
    
    return average;
}

void main(){
    //it is like a main for testing !
    
    int n_values = 3;
    SensorData values[n_values];
    
    values[0].temp=10;
    values[1].temp=5;
    values[2].temp=15;

    float avg =  average(values,n_values);
    
    printf("this is the average %f",avg);
    
}