#include<stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("teksts.dat","rt");
 char ch;

 if( fp == NULL)
 {
 printf("Failu nav iespējams atvērt.\n");
 return 100;
 }

 while( (ch=fgetc(fp)) != EOF)
 putc(ch, stdout);


 fclose(fp);

 return 0;
 }
