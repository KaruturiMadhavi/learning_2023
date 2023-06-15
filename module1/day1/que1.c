#include <stdio.h>

void ifelse(int a, int b){
    if(a>b){
        printf("Biggest number using if else is %d\n",a);
    }
    else{
        printf("Biggest number using if else is %d\n",b);
    }
}

void ternary(int x, int y){
    x>y?printf("Biggest number using ternary operator is %d\n",x):printf("Biggest number using ternary operator is %d\n",y);
}

int main(){
    int num1,num2;
    printf("Enter First Number :- ");
    scanf("%d",&num1);
    printf("Enter Second Number :- ");
    scanf("%d",&num2);
    
    ifelse(num1,num2);

    ternary(num1,num2);

    return 0;
}