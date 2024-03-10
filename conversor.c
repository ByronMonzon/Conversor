#include <stdio.h>

#define TC_DOLAR_GTQ 7.80
#define TC_EURO_GTQ 8.54


int main (){
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Euros a Quetzales\n");
    printf("4. Convertir de Quetzales a Euros\n");
    printf("Ingrese la opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("Ingrese la cantidad en dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f dolares son %.2f quetzales\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 2:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f quetzalez son %.2f dolares\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        case 3:
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &cantidad);
            printf("%.2f euros son %.2f quetzales\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 4:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f quetzalez son %.2f euros\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        default:
            printf("Opcion no valida\n");
    }
    return 0;
}