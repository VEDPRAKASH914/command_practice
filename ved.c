#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt","r");
    char ch[80];
  while(fgets(ch,80,fp)){
      printf("%s",ch);
   
}
  fclose(fp);
    return 0;
}