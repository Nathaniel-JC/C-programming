#include<stdio.h>

int main(){

float temp[7];
int i;
float maxtemp,mintemp;
int maxtempday,mintempday;

    printf("input the temperatures of the 7 days of the week\n");

    for(i=0;i<7;i++){

        printf("day %d:",i+1);
        scanf("%f",&temp[i]);

    }

    maxtemp=temp[0];
    maxtempday=1;

    mintemp=temp[0];
    mintempday=1;


    for(i=1;i<7;i++){

        if(temp[i]>maxtemp){
            maxtemp=temp[i];
            maxtempday=i+1;
        }

        if(temp[i]<mintemp){

            mintemp=temp[i];
            mintempday=i+1;
            
        }}

    printf("Highest Temperature: %.1f°C on Day %d\n", maxtemp, maxtempday);
    printf("Lowest Temperature : %.1f°C on Day %d\n", mintemp,mintempday);
        

        return 0;

    }
    

