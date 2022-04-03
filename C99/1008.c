#include <stdio.h>
 
int main() {
 
    int funcionario, horas;
    double valor;
    
    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%lf", &valor);
    
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2lf\n", valor * horas);
 
    return 0;
}