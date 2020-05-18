#include<stdio.h>
void main()
{
void finddigit(int x)
  {
  int d,arr[15],i=0,j=0,k;
   while(x>0)
    {
     d=x%10;
     arr[i]=d;
     i++;
     x=x/10;
    }

//for(k=0;k<i;k++)
//printf("%d",arr[k]);

  printf("[");

 for(j=i-1;j>=0;j--)
    {
     if(j!=0)
      printf(" %d,",arr[j]);
    else
      printf(" %d",arr[j]); 
    }

  printf("]" );
}


int n;
printf("Enter the number\n");
scanf("%d",&n);
finddigit(n);

}

