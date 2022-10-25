/*

cikla operātori
while - "kamēr"
do while - "darīt kamēr"
for - "līdz"

NB! for( ; ;) - for cikla () vienmēr satur divus semikolus - ;

for ( ; izteiksme ; );
for ( ; izteiksme ; );
 ;
while (izteiksme){;;;;}
while (izteiksme)
 {
 ;
 ;
 }
 aiz while () iekavām esošā darbība (vai darbības) tiks izpildītas
 tikmēr, kamēr iekavās () izteiksmes rezultāts ir "true"
 "true" - izteiksmes rezultāta bitu secība ir vismaz viens 1
 "false" jeb "absolūtā nulle" - visi biti ar 0 stāvokli 
*/

#include<stdio.h>

int main()
{
 int a;
 for (a=10 ; a>=0 ; a--)
/* darbība(s) pirms pirmā ; tiek izpildītas vienu reizi cikla sākumā
 tālāk izteiksmes rezultāta aprēķins (jeb nosacījumu pārbaude)
 cikla ķermeņa (iekš {}) darbību pildīšana
 cikla mainīgo izmaiņa atbilstoši aprakstam aiz otrā ;
 turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
*/
 {
 printf ("a:%d\n",a);
 a--; // a= a - 1; a -= 1;
 }
 printf ("a (pēc cikla): %d\n",a);

 return 0;
 }
