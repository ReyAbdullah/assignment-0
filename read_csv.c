#include <stdio.h>
//void trim(char[]){

}

int main(){
  char str[128] = {0}
  
  printf("Enter a file name:");
  fgets(str, 128, stdin);
  trim(str);
  str[strlen(str)-1] = 0
  
  FILE *fp = fopen (str, "r")
  
  if (fp == NULL){
    print failure
    }

  return 0;
}
