#include<stdio.h>
#include<stdint.h>
void count(int num){
        uint16_t value;
        value = num & (0x00f0);
        value = value >> 4;
        printf("count : %d\n", value);
}int main(){
        uint16_t num;
        printf("Enter a number : ");
        scanf("%hu", &num);
        count(num);
        return 0;
}

