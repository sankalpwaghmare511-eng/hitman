clc;
clear;
g=7;
p=23;
printf('the result are follows:\n\n');
x=3;
y=6;
R1=modulo(g^x,p);
R2=modulo(g^y,p);

printf("1)alice choose x=%d & calculates R1=%d\n",x,R1);
printf("2)bob choose y=%d & calculates R2=%d\n",y,R2);
printf("3)alice send %d to bob\n",R1);
printf("4)bob send %d to alice\n",R2);

k_alice=modulo((R2)^x,p);
k_bob=modulo((R1)^y,p);
k_final=modulo(g^(x*y),p);

printf("5)alice key k=%d\n",k_alice);
printf("6)bob key k=%d\n",k_bob);
printf("7)final key k=%d\n",k_final);
