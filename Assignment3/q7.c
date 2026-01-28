#include <stdio.h>
int main(){
    int n;
    printf("no. of days up for return period");
    scanf("%d",&n);
    if(n=0){
        printf("thank u sir, you can go");
    } else if (n<=5){
        printf("u have to pay rs 50 paise");
    } 
    else if (n<=10){
        printf("u have to pay rs 1 rupee");
    } else if (n<=30){
        printf("u have to pay rs 5 rupees");
    } else {
        printf("ur membership is cancelled");
    }
    return 0;
}