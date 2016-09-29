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
char * stringNCat(char *dest, char *source, int n){
  int i;
  for(i = 0; i <= n && i < strlen(source)+1; i++){
    dest[i + strlen(dest)] = source[i];
  }
  return dest;
}


int main(){
  char str1[] = "whattheheck";
  char str2[] = "yup";
  printf("str1 = %s\nstr2 = %s\n\n", str1, str2);
  
  //_______________stringLength
  printf("stringLength of %s: %d\n\n",str1,stringLength(str1));
  //printf("strlen - %s: %d\n\n",str1,strlen(str1));

  //_______________stringCopy
  printf("str1 before copy: %s\n", str1);
  stringCopy(str1, str2);
  printf("str1 after copy: %s\n\n", str1);
  //printf("strcpy: %s\n\n", strcpy(str1,str2));





  //_______________stringNCat
  char str3[200] = "hey its me";
  char str4[200] = "mario";
  printf("str3: %s \nstr4: %s\n", str3, str4);
  stringNCat(str3 ,str4, 5);
  printf("str3 after stringNCat: %s\n\n", str3);

  
  return 0;
}
