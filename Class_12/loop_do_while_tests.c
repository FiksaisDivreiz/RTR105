/*

cikla operātori
while - "kamēr"
do while - "darīt kamēr"
for - "līdz"

 do ; while(izteiksme);
 do
 ;

 while (izteiksme);
 do  {;;;;} while(izteiksme)
 do
 {
 ;
 ;
 }
 while(izteiksme)
 pirms while esošā darbība (vai darbības) tiks izpildītas
 tikmēr kamēŗ iekavās () izteiksmes rezultāts ir "true"
 ;
 while(izteiksme){;;;;}
 while(izteiksme)
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
 int a=10;
 do
 {
 printf ("a:%d\n",a);
 a--;
 }
 while(a>=0);
 
 printf ()

 return 0;
 }
