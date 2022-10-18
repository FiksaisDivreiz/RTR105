#include<stdio.h>

int main()
{
 if(1); // iekšā () var būt "apaļā" nulle (visi biti ir ar 0) (false)
        //vai bitu secība kas satur kaut vienu bitu ar 1 (true)

int a = 10; // int = definēšana
if(a > 7) // a > 7 -> 0000 0000 0000 0000 0000 0000 0000 0001
 printf("Viena darbība, kas tiks izpiildīta, ja \"nosacījums ir spēkā\".\n");

printf("Šī darbība tiks izpildīta jebkurā gadījumā.\n");

if (a > 7)
{
 printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums ir spēkā\".\n");
 printf("Pirmā darbība.\n");
 printf("Otrā darbība");
}

 if (a > 7)
{
 printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums ir spēkā\".\n");
 printf("Pirmā darbība.\n");
 printf("Otrā darbība");
} 
 else //else nesatur nosacījumu
     // else vienmēr pieder kādam if 
     // - atrodas vienas darbības ; vai darbību bloks {;;;;} attālumā no tā
{
 printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums ir spēkā\".\n");
 printf("Pirmā darbība.\n");
 printf("Otrā darbība");
}
// nosacījums nav spēkā - rezultātā visi biti ir ar 0

/*
if (nosacījums) ;
if (nosacījums) else
if (nosacījums) 
if (nosacījums) 
*/
// ja ļoti gribās kaut ko elif veidīgo
/*
if(nosacījums_a)
 {
 :
 }
else
 {
 if(nosacījums_b)
 {
 :
 }
}
*/

return 0;
}
