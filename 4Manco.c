#include <stdio.h>

void funcaoQuadratica(int n, int raizes[n], int areas[n]){
    int a [n];
    int b [n];
    int c [n];
    int montante;

    for (int i = 0; i < n; i++ ){
        
        if(areas[i] > 0){

            a[i] = -1;
        }

        else if ( areas[i] < 0){

            a[i] = 1; 

        }
        
        else {

            printf("nao houve vazamentos\n");

            return;
        }
            
        
        b[i] = -2*raizes[i];
        c[i] = raizes[i] * raizes[i];

        printf("o resultado da funcao dos respectivos canos e: %dx^2 + (%dx) + (%d) \n", a[i], b[i], c[i] );
    
        (a[i] > 0) ? printf("houve gastos") : printf("houve economia");
    

        montante = a[i] * (areas[i]* areas[i]* areas[i])/3 + b[i] *(areas[i]* areas[i])/2 + c[i] * areas[i];    
    
        (montante > 0) ? printf("houve gastos de %d\n", montante) : printf("houve economia de %d\n", montante);
    }


    
}

int main(){
    funcaoQuadratica(n, raizes, areas);



    return 0;
}