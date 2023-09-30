#define CHAR string[i]
#define INICIO string[0]
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(){
    unsigned int len;
    scanf("%d",&len);
    int numbers = (int) malloc(sizeof(int)len);
    free(numbers);
    return 0;
}
char menu(char titulo,charopcoes){

}
char split(charseparador, char string){
    charsubstring;
    for(int i = 0; CHAR != '\0'; i++)
        if(CHAR!=separador);
}
int lenght(const char string){
    int i;
    for(i = 0; CHAR != '\0'; i++)
    ;
    return i;
}
chartrin(char string){
    bool houve_trin = false;
    unsigned int len = lenght(string);
    if(!len || (len==1 && INICIO == ' '))
        return "";

    if(INICIO = ' '){
        int i;
        for(i = 0; string[i+1]==' ';i++)
        ;
        char saida[len-i];
        strcpy(string[i],saida);

        if(saida[len-2] == ' '){
            unsigned int final = 2;
            for(int i = len-3; i >= 0; i--){
                if(saida[i] != ' '){
                    break;
                }final++;
            }saida[final] = '\0';
        }return saida;
    }
    else if(string[len-2] == ' '){
        //char saida[len];
        //strcpy(string[i],saida);
        unsigned int final = 2;
        for(int i = len-3; i >= 0; i--){
            if(string[i] != ' '){
                break;
            }final++;
            }saida[final] = '\0';
        }return saida;
    }
    charstring = string[1];

}
