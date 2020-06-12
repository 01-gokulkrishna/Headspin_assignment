#include<stdio.h>
#include<string.h>
void main()
{
 char str[100],stack[100],strrev[100];
 int top=-1,i,k=0,j,len=0;
 printf("Enter the string \n");
fgets(str,sizeof(str),stdin);
len=strlen(str);
 for(i=0;i<len;i++)
   {
        if(str[i]!=' ')
          {
           top++;
           stack[top]=str[i];

          }
      else
         {
          while(top!=-1)
              {
               strrev[k]=stack[top];
               top--;
               k++;
              }
          strrev[k]= ' ';
          k++;
         }
     
   }


j=k;
for(i=0;i<j;i++)
 {
 printf("%c",strrev[i]);
 }
}

