#include<stdio.h>

int main(void)
 {
 FILE *fp;
 fp = fopen("teksts.dat","w+");

 if( fp == NULL)
 {
 printf("Failu nav iespējams atvērt.\n");
 return 100;
 }

 double d[] = {1.8963644, 8.895554, -6.7454155};

//  printf("d[0] = %f, d[1] = %f, d[2] = %f (after fscanf)\n",d[0],d[1],d[2]);

 fprintf(fp, "%f\n\f\n%f\n",d[0],d[1],d[2]);
 rewind(fp);
 fscanf(fp,"%lf%lf%lf",&d[0],&d[1],&d[2]);
 fclose(fp);

printf("d[0] = %f, d[1] = %f, d[2] = %f (after fscanf)\n",d[0],d[1],d[2]);


 return 0;
 }
