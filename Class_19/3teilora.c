#include<stdio.h>
#include<math.h>

void main(){

double x=2.05,y,a,S;

y = sin(x);

printf ("y=sin(%.2f )=%.2f\n" ,x,y);

a = pow(-1,0)*pow(x,2*0+1)/(1.);//a0 = pow(—1,0)*pow(x,2*0+1)/(1.);

S = a;//S = a0;

printf("%.2f\t%8.2f\t%8.2f\n" ,x,a,S);

a = a * (-1) *x*x / (2*3);//al = pow(—1,1)*pow(x,2*141) /(1.*1*2*3) ;
S = S + a;//sS=S+4+ al;

printf("%.2f\t%8.2f\t%8.2f\n" ,x,a,S);

a = a * (-1) *x*x / (4*5);//a2 = pow(—1,2)*pow(x,2*241) /(1.*1%*2%3%*4%5) ;
S = S + a;//S=S + a2;

printf("%.2f\t%8.2f\t%8.2f\n" ,x,a,S);

a = a * (-1) *x*x / (6*7);//a3 = pow( —1,3)*pow(x,2*341) /(1.*1*243%4%5*6%7) ;
S = S + a;//S=S 4+ a3;

printf("%.2f\t%8.2f\t%8.2f\n" ,x,a,S);
}
