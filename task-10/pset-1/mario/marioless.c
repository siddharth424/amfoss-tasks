#include <stdio.h>
int main(void){
    int height,space,hash;

    do 
    {
        printf("Height:");
        height=GetInt();
        printf("\n");
    }
    while(height<=0||height>=23);
    for (int i = 1; i <= height; i++)
    {
        for (space=(height-i);space>= 0;space--){
            printf(" ");
        }
        for (hash=1;hash<=(i+1);hash++){
            printf("#");    
        }
        printf("\n");
    }
    return 0;
}
