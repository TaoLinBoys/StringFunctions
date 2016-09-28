#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------stringLength
int stringLength(char *str){
  int length=0;
  while(*str != '\0'){
    length++;
    str++;
  }
  return length;
}


//-------stringCopy
char * stringCopy(char *dest, char *source){
  int i;
  for(i = 0; i < strlen(source)+1; i++){
    dest[i] = source[i];
  }
  return dest;
}


//-------stringNCat
char * stringNCat(char *str1, char *str2, int n){
  int i;
  for(i = 0; i < n && i < strlen(str1); i++){
    
  }
}


int main(){
  char str1[] = "whattheheck";
  char str2[] = "yup";
  printf("str1 = %s\n", str1);


  
  //----stringLength
  printf("stringLength - %s: %d\n\n",str1,stringLength(str1));
  //printf("strlen - %s: %d\n\n",str1,strlen(str1));

  //----stringCopy
  printf("stringCopy str2 to str1: %s\n\n", stringCopy(str1,str2));
  //printf("strcpy: %s\n\n", strcpy(str1,str2));



  
  return 0;
}
