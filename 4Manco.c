#include <stdio.h>

/*recebeEntrada esta armazenado os vetores A,B,T na memoria
para serem utilizados na funçao afim
não utilizei o & na passagem dos parametro A,B,T serem vetores estaticos
ou seja, ja são endereços de memoria e as modificações serão
captadas pela função que invocou recebe entrada,T = tempo   */
void recebeEntrada(int n, int a[n], int b[n], int t[n])
{
    
    for(int i = 0; i < n; i++){

        scanf("%d",& (a[i]));
        scanf("%d",& (b[i]));
        scanf("%d",& (t[i]));
    }

}
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


    int n;
    scanf("%d",&n);

    int a[n];
    int b[n];
    int t[n];
    /* a função afim e dada por : A[i]*x + B[i] = 0,
    onde i representa o cano em questão e x =T[i]*/  
    recebeEntrada(n,a,b,t);
    funcaoQuadratica(n, raizes, areas);

    /* cometei por causa que essa nao eh a reposta final.
     Quem vai dar ela vai ser o 4gabs*/
    /*for(int i = 0; i < n; i++)
    {
        
        printf("o valor de a[%d]: %d\n",i,a[i]);
        printf("o valor de b[%d]: %d\n",i,b[i]);
        printf("o valor de t[%d]: %d\n",i,t[i]);

    }*/


    return 0;
}