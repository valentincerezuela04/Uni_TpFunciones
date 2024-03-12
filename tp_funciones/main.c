#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber();
void encontrarMayorMenor(int num1, int num2, int num3);
int sumaMenores(int n);
void tablaDeMultiplicar(int num,int x);
void calculadora(int a ,int b);
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(int a, int b);
void cambiarSigno(int *a);
void cargarValores(int *a ,int *b);

int main() {


    printf("\nMenu:\n");
    printf("- Opcion 1\n");
    printf("- Opcion 2\n");
    printf("- Opcion 3\n");
    printf("- Opcion 4\n");
    printf("- Opcion 5\n");
    printf("- Opcion 6\n");
    printf("- Opcion 7\n");

    int opcion;
    printf("\nSeleccione una opcion del menu (1-7): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            {
                int randomNum = 0;
                randomNum = randomnumber();
                printf("\nNumero aleatorio: %d\n", randomNum);
            }

            break;
        case 2:
            {
                int num1,num2,num3 =0;

                printf("Ingrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);
                printf("Ingrese el tercer numero: ");
                scanf("%d", &num3);

                encontrarMayorMenor(num1, num2, num3);
            }
            break;
        case 3:
            {   int n,num = 0;
                printf("Ingrese un numero: ");
                scanf("%d",&n);
                num = sumaMenores(n);
                printf("\nla suma : %d",num);
            }
            break;
        case 4:
            {
                int num,hasta = 0;
                printf("ingrse un numero que quiera multiplicar : ");
                scanf("%d",&num);
                printf("ingrese hasta que numero desea multiplicar : ");
                scanf("%d",&hasta);
                tablaDeMultiplicar(num,hasta);
            }
            break;
        case 5:
           {
                int a,b = 0;
                printf("Ingrese el primer valor (a): ");
                scanf("%d", &a);

                printf("Ingrese el segundo valor (b): ");
                scanf("%d", &b);
                calculadora(a,b);
           }
            break;
        case 6:
            {
                int num = 0;
                printf("ingrese el numero para cambiar su signo: ");
                scanf("%d",&num);
                cambiarSigno(&num);
                printf(" = %d",num);
            }
            break;
        case 7:
            {
                int valorA, valorB;
                cargarValores(&valorA, &valorB);
                printf("Valores ingresados:\n");
                printf("a = %d\n", valorA);
                printf("b = %d\n", valorB);

            }
            break;
        default:
            printf("Opcion no valida. Por favor, seleccione una opcion del 1 al 7.\n");
            break;



    }

    return 0;
}

int randomnumber(){

    int numeroAleatorio = rand() % 100 + 1;

    return numeroAleatorio;
}

void encontrarMayorMenor(int num1, int num2, int num3) {
int mayor = num1;
int menor = num2;

    if (num2 > mayor){
        mayor = num2;
    }
    else if (num2 < menor){
        menor = num2;
    }

    if (num3 > mayor){
        mayor = num3;
    }
    else if(num3 < menor){
        menor = num3;
    }
    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d\n", menor);
}

int sumaMenores(int n){

    int suma = 0;

    for (int i = 1; i < n; i++) {
        suma += i;
    }

    return suma;
}

void tablaDeMultiplicar(int num,int x){
    int mult = 0;
    printf("Tabla del %d hasta el %d: \n",num,x);
    printf("------------------\n");
    for(int i =0;i<=x;i++){
        mult = num * i;
        printf("%d X %d = %d \n",num,i,mult);
    }


}


void calculadora(int a, int b) {
    int opcion;

    printf("\nCalculadora Menu:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");

    printf("\nSeleccione una opcion del menu (1-4): ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Suma: %d\n", suma(a, b));
            break;
        case 2:
            printf("Resta: %d\n", resta(a, b));
            break;
        case 3:
            printf("Multiplicacion: %d\n", multiplicacion(a, b));
            break;
        case 4:
            if (b != 0) {
                printf("Division: %.2f\n", division(a, b));
            } else {
                printf("No se puede realizar la division porque b es cero.\n");
            }
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }
}

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;
}

void cambiarSigno(int *a){
    *a = -*a;

}

void cargarValores(int *a ,int *b){

    printf("Ingrese el valor para a: ");
    scanf("%d", a);

    printf("Ingrese el valor para b: ");
    scanf("%d", b);


}
