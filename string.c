#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------StringLength
int StringLength(char *str){
  int length=0;
  while(*str != '\0'){
    length++;
    str++;
  }
  return length;
}






int main(){
  char str[] = "whattheheck";
  
  //----StringLength
  printf("StringLength - %s: %d\n",str,StringLength(str));
  printf("strlen - %s: %d\n",str,strlen(str));
  
  return 0;
}
