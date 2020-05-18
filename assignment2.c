#include<stdio.h>
void main()
{
int i,l=0,space=0,vowels=0,consonant=0;
char str[100];
printf("Enter the string\n");
fgets(str, sizeof(str), stdin);

for(i=0;str[i]!='\0';i++);
l=i-1;


for(i=0;i<l;i++)
{
if(str[i]==' ')
  {
    space++;
  }
else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
       {
        vowels++;
       }
else if( (str[i]>'a' && str[i]<='z') || (str[i]>'A' && str[i]<='Z'))
      {
       consonant++;
      }
    
}
printf("Vowels:%d\nConsonants:%d\nSpaces:%d",vowels,consonant,space);

}
