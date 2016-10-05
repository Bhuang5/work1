#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char s[20] = "Hello!";
  s[6] = 0;
  char a[20];
  //printf("string.h length of s: %d", strlen(*s));
  printf("myLen: %d\n", myLen(s));
  //printf("myStrncpy: %s\n", myStrncpy(a,s,6));
  return 0;
}

char* myStrncpy(char *dest, char *src, int n){
  char s;
  int i = 0;
  for (i; i < n; i++){
    &dest[i] = &src[i];
  }
  return dest; 
}


char* myStrcat(char *a, char *b){
  int i = strlen(a);
  for (i; i < strlen(b); i++){
    a[i] = b[i];
  }
  return a;
}

char* myStrchr(char *s, int c){
  int i = 0;
  for(i; i < strlen(s); i++){
    if (s[i] == c){
        return c;
      }
  }
  return 0;
}

int myStrcmp(char *s1, char *s2){
  int i = 0;
  while(s1[i] == s2[i]){
    i++;
  }
  return s1[i] - s2[i];
}


int myLen(char a[]){
  int i;
  for (i = 0; i < sizeof(a)/sizeof(a[0]); i++){
    if (!a[i])
      return i;
  }
}
