//Write a program to read in 5 numbers and compute the average, max, min, standard
//deviation.
#include <stdio.h>
#include <math.h>
int main(){
    float n1,n2,n3,n4,n5,avg;
    printf("enter the 5 numbeers seperated by space\n");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    avg=(n1+n2+n3+n4+n5)/5;
    printf("average is %f\n", avg);
    int max;
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5){
        max=n1;
    }
    else if (n2>n1 && n2>n3 && n2>n4 && n2>n5){
        max=n2;
    }
    else if (n3>n1 && n3>n2 && n3>n4 && n3>n5){
        max=n3;
    }
    else if (n4>n1 && n4>n2 && n4>n3 && n4>n5){
        max=n4;
    }
    else{
        max=n5;
    }
    printf("max is %d\n", max);
    int min;
    if (n1<n2 && n1<n3 && n1<n4 && n1<n5){
        min=n1;
    }
    else if (n2<n1 && n2<n3 && n2<n4 && n2<n5){
        min=n2;
    }
    else if (n3<n1 && n3<n2 && n3<n4 && n3<n5){
        min=n3;
    }
    else if (n4<n1 && n4<n2 && n4<n3 && n4<n5){
        min=n4;
    }
    else {
        min=n5;
    }
    printf("min is %d\n", min);
    printf("standard deviation is %f\n", sqrt((pow(n1-avg, 2)+pow(n2-avg, 2)+pow(n3-avg, 2)+pow(n4-avg, 2)+pow(n5-avg, 2))/5));



}