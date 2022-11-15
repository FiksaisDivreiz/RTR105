#include<stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("teksts.dat","rt");
             // kur (var norādīt ceļu) un ko (faila nosaukums)
             // kādam nolūkam

 if( fp == NULL)
 {
 printf("Failu nav iespējams atvērt.\n");
 return 100;
 }

 while()



 fclose(fp);

 return 0;
 }
