#include<stdio.h>

char dialogs(); // funkcijas deklarēšana
char dialogs_i(int i_dialogs_arg); // funkcijas definēšāna

void tests1(int a, int b, int);
void tests2(int a, double b);
 
int main()
 {
 char c_main_local;
 c_main_local = 10;

/*
 print("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("&hhd",&c);
 printf("Ir ievadīts skaitlis: %d\n",c);

 { ...... }*/
/*
 print("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("&hhd",&c);
 printf("Ir ievadīts skaitlis: %d\n",c);
*/
 c_main_local = dialogs();
 print("Ir ievadīts (izdruka no main funkc.): %d\n",c_main_local);

dialogs();
 int i_main =1;
 dialogs_i(i_main);
 i_main++;
 dialogs_i(i_main);

 return 0;
 }

char dialogs()
 {
 char c_dialogs_local;
 print("Cienījamais lietotāj, lūdzu, ievadi vienu naturālo skaitli: ");
 scanf("&hhd",&c_dialogs_local);
 print("Ir ievadīts (izdruka no main funkc.): %d\n",c_dialogs_local);
 return c_dialogs_local;
 }
