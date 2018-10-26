//Questão A

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float *V;
	int tam;
	
	V=(float*)malloc(tam*sizeof(float));
	free(V);

	return 0;
}


//Questão B

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int **M;
	int linha,coluna;
	cin>>linha>>coluna;
	
	M=(int**)malloc(linha*sizeof(int));
	for (int j=0; j<coluna; j++){
		M[j]=(int*)malloc(coluna*sizeof(int));
	}
	
	free(M);

	return 0;
}


//Questão C

float *geraVetor(int tam, float *vetor){
	vetor=(float*)malloc(tam*sizeof(float));
	return vetor;
}
