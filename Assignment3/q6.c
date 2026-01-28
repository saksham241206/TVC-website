//To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 && n%8==0)
        printf("%d is divisible by both 5 and 8.", n);
    else if(n%5==0)
        printf("%d is divisible by 5.", n);
    else if(n%8==0)
        printf("%d is divisible by 8.", n);
    return 0;


}