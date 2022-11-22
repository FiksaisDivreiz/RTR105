// So, S1, S2, S3 -> S

 #include<stdio.h>

 #include <math.h>

 void main() {

 double x=2.05,y, a0, a1, a2, a3, S;



y = sin(x);



printf("y=sin (%.2f)=%.2f\n",x,y):



 a0= pow(-1,0) * pow(x,2*0+1)/(1.); 11 printf("%.2f\t%8.2f\t�f\n",x,a0,S);





S = a0; //S0 = a0;

 al = pow(-1,1) *pow(x,2*1+1)/(1.*1*2*3); 14 SS+al://S1=a0+ a1; // S += al; 15 printf("%.2f\t%8.2f\t%8.2f\n",x,al,S):



 a2 = pow(-1,2)*pow(x,2*2+1)/(1.*1*2*3*4*5); 18 S=S+ a2://S2 = a0 + al + a2; // S += a2: 19 printf("%.2f\t%8.2f\t%8.2f\n",x,a2,S); 20

 a3 = pow(-1,3)* pow(x,2*3+1)/(1.*1*2*3*4*5*6*7):

 SS+ a3; //S3 = a0 + a1 + a2+ aB: // S += a3; 23 printf("%.2f\t%8.2f\t%8.2f\n",x,a3.);

}
