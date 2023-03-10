#include<stdio.h>
int main() {
    int num,sum = 0;
    printf("Enter  a number: ");
    scanf("%d",&num);
    int temp = num;
    while(num > 0) {
        int digit = num % 10;
        sum = (sum) + (digit*digit*digit);
        num /= 10;
    }
    if(sum == temp) {
        printf("This number is Armstrong number!");
    }
    else {
        printf("This number is not a armstrong number!");
    }
    return 0;
}
