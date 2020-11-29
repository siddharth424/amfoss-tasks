#include <stdio.h>
#include <math.h>
int main(void){
    float dollar;
    int cent;

    do 
    {
        scanf("%f", &dollar);
    }while(dollar<0);
    cent=round(dollar*100);
    int quarter=cent/25;
    int dime=(cent%25)/10;
    int nickel=((cent%25)%10)/5;
    int pennies=((cent%25)%10)%5;
    printf("%d\n",quarter+dime+nickel+pennies);
    return 0;
}
