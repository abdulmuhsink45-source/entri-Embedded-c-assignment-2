#include <stdio.h>

float add(float a,float b){
    return a+b;
}
float subtract(float a,float b){
    return a-b;
}
float multiply(float a,float b){
    return a*b;
}
float divide(float a,float b){
    if(b==0){
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a/b;
}
float calculate(float a,float b, char op){
    switch(op){
        case '+':
            return add(a,b);
        case '-':
            return subtract(a,b);
        case '*':
             return multiply(a,b);
        case '/':
            return divide(a,b);
        default:
            printf("Error: Invalid operator '%c' Use +,-,*,/\n",op);
            
            return 0;
            
    }
}

int main(){
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf(" %f",&num1);

    printf("Enter operator(+,-,*,/): ");
    scanf(" %c",&op);

    printf("Enter second number: ");
    scanf(" %f",&num2);

    if (op == '/'&& num2==0){
        divide(num1,num2);
        return 0;
    }

    float result = calculate(num1, num2, op);

    if(op == '+' || op == '-' || op == '*'  || op == '/' && num2 != 0){
        printf("Result: %.2f %c %.2f = %.2f/n", num1, op, num2, result);
}
   
    return 0;

}