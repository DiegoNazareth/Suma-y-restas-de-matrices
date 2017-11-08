//En este codigo el tamaño de las matrices ya esta prederterminadas y solo se piden los valores para llenar ambas matrices, para sus correspondietes operaciones resta diagonal, resta derecha, suma de los restantes que no sean diagonales en la matriz.
//pendiente
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int matriz1[3][3], matriz2[3][3], matriz3[3][3], matriz4[i][j];
	printf("Dame 20 valores para llenar la matriz 1\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	printf("Dame 20 valores para llenar la matriz 2\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	//diagonal izquierda resta y suma de los numeros restantes 
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (i==j){
			matriz3[i][j]=matriz1[i][j]-matriz2[i][j];
		}else{
			matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
			
		}
		
		}
	}
	printf("Resta de ambas matrices en la diagonal izquierda de cada una y suma de los numeros no correspondientes a la diagonal: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",matriz3[i][j] );
		}
		printf("\n");
	}
	
	//diagonal derecha resta y suma de los numeros  restantes
	printf("\nResta de ambas matrices en la diagonal derecha de cada una y suma de los numeros no correspondientes a la diagonal: \n");
    for (i=0;i<3;i++){
    	for(j=j+3;j>=0;j--){
    		for(i=0;i<3;i++){
    			matriz4[i][j]=matriz1[i][j]-matriz2[i][j];
			}
    		
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d", matriz4[i][j]);
		}
		printf("\n");
	}
	return(0);
	}
	
