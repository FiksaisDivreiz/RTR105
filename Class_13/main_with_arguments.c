#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

printf("You have entered %d arguments:\n",argc);

printf("sizeof(atoti(...)) -> %ld bytes\n\n",sizeof(atoi('A')));

 for (int i = 0; i < argc; ++i)
 {
 printf("%s\n",argv[i]);
 if(i>0)
 //arg[i]*argv[i];
 printf("%d * %d = %d\n",atoi(argv[i]),atoi(argv[i]),atoi(argv[i])*atoi(argv[i]));
 }

 return 0;
}

