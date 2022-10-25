/*

cikla operātori
while - "kamēr"
do while - "darīt kamēr"
for - "līdz"

while (izteiksme);
while (izteiksme)
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
// int a=10;
 unsigned char a=10;
// ar unsigned datu tipu šim nosacījumam "false" nekad neiestāsies
 while (a>=0)
 {
 printf ("a:%d\n",a);
 a--; // a= a - 1; a -= 1;
 }
 /* sākumā a ir 10
  1. a>= 10 - 0000 0000 0000 0001 (true)
  2. printf -> 10
  3. a samazinās par 1-> 9
  4. a (9) >= 0 - 0000 0000 0001 (true)
  5. printf -> 9
  6. a samazinās par 1 -> 8
  ...
  1. a (0) >= 0000 0000 0001 (true)
  2. a samazinās par 1 -> -1
  3. a (-1) >=0 - 0000 0000 0000 (false)
  */

 printf ("a (pēc cikla): %d\n",a);
 return 0;
 }
