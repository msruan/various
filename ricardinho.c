#include <stdlib.h>
#include <stdio.h>
int main(){//obs: as system calls retornam 0 quando ocorrem com sucesso
	if(!system("touch alegria.txt")){
		if(!system("echo \"Só alegria hahaha\" > alegria.txt")){
			printf("Arquivo \'alegria.txt\' criado com sucesso no diretório atual!\n");
		}else
			printf("Ops! Houve um erro durante a escrita do arquivo .txt!");
	return 0;
	}printf("Oh oh, erro durante a criação do arquivo!");	
}
