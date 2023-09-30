#include <stdlib.h>
#include <iostream>
int main(){
	try{
        system("touch atividade.txt");
        system("echo \"Só alegria hahaha\" > alegria.txt");
	}catch(...){
	std::cout << "\nErro durante execução do programa!\n";
}
}
