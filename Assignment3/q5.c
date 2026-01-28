//5. To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
//(ii) ternary operator
#include <stdio.h>
int main(){
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%2!=0){
        printf("the number is odd\n");
    } else{
              printf("the number is even\n");
    }
    if(number>=0){
        printf("the number is positive");
    } else {
        printf("the number is negative");
    }
return 0;
}