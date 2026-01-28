/*Assignment operator assigns right hand side value to left hand side variable.
Use this idea to interchange (swap) values of two variables. (Hint: You may need a
third variable. Think like switching coffee and tea between two cups using a third cup)*/
#include <stdio.h>
int main(){
    int a = 5, b = 10, temp;
    printf("%d,%d\n",a,b);
    temp = a;  
    a = b;     
    b = temp; 
    printf("%d,%d",a,b);
} 