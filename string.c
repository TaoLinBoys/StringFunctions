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
  int destlen = strlen(dest);
  
  for(i = 0; i < n && i < strlen(source); i++){
    dest[i + destlen] = source[i];
  }
  return dest;
}


//-------stringCmp
int stringCmp(char *str1, char *str2){
  int shorterStr;
  if(strlen(str1) > strlen(str2)){
    shorterStr = strlen(str1);
  }else{
    shorterStr = strlen(str2);
  }

  int i;
  for(i = 0; i < shorterStr; i++){
    if(str1[i] > str2[i]){
      return 1;
    }else if(str1[i] < str2[i]){
      return -1;
    }
  }
  if(str1[shorterStr] != 0){
    return 1;
  }else if(str2[shorterStr] != 0){
    return -1;
  }else{
    return 0;
  }
}


//-------stringChar
char * stringChar(char *str, char c){
  char *first = str;
  int i;
  for(i = 0; i < strlen(str)+1; i++){
    if(str[i] == c){
      return first;
    }
    first++;
  }
  return NULL;
}



int main(){
  char str1[] = "whattheheck";
  char str2[] = "yup";
  printf("______stringLength+stringCopy______\n");
  printf("str1 = %s\nstr2 = %s\n\n", str1, str2);
  
  //_______________stringLength
  printf("stringLength of str1: %d\n\n",stringLength(str1));
  //printf("strlen - %s: %d\n\n",str1,strlen(str1));

  //_______________stringCopy
  printf("str1 before copy: %s\n", str1);
  stringCopy(str1, str2);
  printf("str1 after copy: %s\n\n", str1);
  //printf("strcpy: %s\n\n", strcpy(str1,str2));





  //_______________stringNCat
  printf("______stringNCat______\n");
  char str3[200] = "hey its me";
  char str4[200] = " mario";
  printf("str3: %s \nstr4: %s \nn: %d", str3, str4, 4);
  stringNCat(str3 ,str4, 4);
  printf("str3 after stringNCat: %s\n\n", str3);



  //______________stringCmp
  printf("______stringCmp______\n");
  char str5[] = "abcdEfgh";
  char str6[] = "abcde";
  printf("str5: %s \nstr6: %s\n", str5, str6);
  printf("comparing str5 and str6: %d\n\n",stringCmp(str5,str6));


  //_____________stringChar
  printf("______stringChar______\n");
  char str7[] = "abcdefgh";
  char chr = 'f';
  printf("str7: %s \nchr: %c\n", str7, chr);
  printf("finding chr in str7: %s\n", stringChar(str7, chr));
  return 0;
}
