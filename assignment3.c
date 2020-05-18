#include<stdio.h> 
#include<string.h>


void findreverse(char str[], int start, int end)
 { 
  
    char temp; 
    while (start <= end) 
    {  
        temp = str[start]; 
        str[start] = str[end]; 
        str[end] = temp; 
        start++; 
        end--; 
    }  


}

 
void main()
{

char str[100];
printf("Enter the string\n");
fgets(str, sizeof(str), stdin);
int wstart=0,wend=0,start=0,end;

end=strlen(str)-1;

for(wend=0;wend<end;wend++)
 {
  if (str[wend] == ' ') 
     continue;

while (str[wend] != ' ' && wend <= end) 
       wend++;

 
        wend--;  
 findreverse(str, wstart, wend);
 
}


printf("%s", str); 



  }









