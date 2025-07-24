#include<stdio.h>
int main(){ 
  int i,j, space,coeff;
for(i=0; i<5; i++){
for(space=1; space<=5-i; space++)
  printf(" ");
coeff=1;
for(j=0; j<=i; j++){
printf("%d",coeff);
coeff=coeff*i(i-j)/(j+1);
}
printf("\n");
}
return 0;
}
