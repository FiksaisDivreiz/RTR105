/*  5! = 1*2*3*4*5 = 
 = 5*(5-0)*5*(5-1) ...
 =  4! * 5
 = 5! / 5 = 4!

 0! = 1 (faktoriāla darbība ir saistīta ar skaitļu kopām
         jautājums 0! - cik skaitļu kopas var uztaisīt no tukšas kopas- 0
         - kopas - [] - viena)
*/ 

#include<stdio.h>

int main()
 {
 int i,n,fact;
 printf ("Cienījamais lietotāj, lūdzu ievadi vienu veselu skaitli: ");
 scanf ("%d",&n);
 
// i=0;
 fact=1;
 for(i=1 ; i<=n; i++)
 {
 fact = fact * i;
 printf("%3d! = %15d\n",i,fact);
 }

 return 0;
 }
