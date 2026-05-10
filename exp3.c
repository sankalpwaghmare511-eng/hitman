#include<stdio.h>
 char dc[26]="ZYXWVUTSRQPONMLKJIHGFEDCBA";
 char ec[26]="abcdefghijklmnopqrstuvwxyz";

 void encrypt(char p[]);
 void decrypt(char p[]);

 int main()
 {
     char p[100];
     printf("enter a plain text:\n");
     scanf("%s", p);

     printf("\n after encryption:\n");
     encrypt(p);
     printf("%s\n", p);

     printf("\n after decryption:\n");
     decrypt(p);
     printf("%s\n", p);

     return 0;

 }

 void encrypt(char p[])
  {
      int i=0;
      while(p[i]!='\0')
      {
          if(p[i]>='a' && p[i]<='z')
          {
            p[i]=dc[p[i]-97];
          }
          i++;
      }
  }
  void decrypt(char p[])
  {
      int i=0,j;
      while(p[i]!='\0')
      {
          for(j=0;j<26;j++)
          {
              if(dc[j]==p[i])
              {
                  p[i]=ec[j];
                  break;
              }
          }

          i++;
      }
  }
