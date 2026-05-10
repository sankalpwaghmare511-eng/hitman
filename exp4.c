clc;
clear;
p=3;
q=11;
n=p*q;
phi=(p-1)*(q-1);
e=7;
d=1;
t=1;
P=5;
plaintext=P;
disp('the plaintext is =');
disp(P);
while t==1 do
    if(modulo(e*d,phi)==1)
        t=0;
    else
        d=d+1;
        end
end
c=modulo(P^e,n);
disp('the cipher text is=');
disp(c);
P=modulo(c^d,n);
disp('the decoded plaintext is=');
disp(P);
