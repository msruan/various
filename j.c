#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void substring(char *string,unsigned inicio, unsigned fim){//inclui o inicio mas n o fim
  char saida[fim-inicio+1];
  bool houve_inicio = false, houve_fim= false;;
  unsigned j=0;
  for(int i = 0; string[i]!='\0'; i++){
    if(i == fim){
        saida[j] = '\0';
        houve_fim = true;
        break;
    }else if(houve_inicio){
      saida[j] = string[i];
      j++;
    }else if(i==inicio){
      houve_inicio = true;
      saida[j] = string[i];
      j++;
    }
  }if(!houve_fim)
    saida[j] = '\0';
  strcpy(string,saida);
    
}
int main(void) {
  printf("Hello World\n");
  char *cinco = "Aeiou";
  substring(cinco,1,3);
  printf("%s",cinco);
  return 0;
}
