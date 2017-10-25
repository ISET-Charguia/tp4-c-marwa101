/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main(void)
{
int t[50];
int a,y,p,e,j,x,n,i,min;

printf("saisir la taille du tableau: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("saisir la valeur de la case n°: %d",i+1);
	scanf("%d",&t[i]);
}
do
{
printf("quel est votre choix? ");
scanf("%d",&a);
}while(a>4 || a<1);
if (a==1)
{
	min=t[1];
  for(i=1;i<n;i++)
  {
	 if(t[i]<min)
	 {
		 min=t[i];
	 }
  }
  printf("%d",min);
}
if(a==2)
{

	printf("saisir un entier à supprimer et un autre remplaceur: ");
	scanf("%d %d",&x,&y);
    for(i=0;i<n;i++)
     {
	   if(t[i]==x)
	   {
		   t[i]=y;
	   }
     }
for(i=0;i<n;i++)
{
printf(" %d | ",t[i]);
}
}
if(a==3)
{

  printf("saisir une position: ");
  scanf("%d",&p);
  printf("saisir un entier: ");
  scanf("%d",&e);
  for(i=p;i<n;i++)
  {
	a=t[i+1];
	t[i+1]=t[i];
	t[i+2]=a;
	t[p]=e;
  }

for(i=0;i<n;i++)
{
printf(" %d | ",t[i]);
}
}
if(a==4)
{
	printf("saisir un entier: ");
	scanf("%d",&x);
	i=0;
	do
	{
		i=i+1;
		if(t[i]==x)
		{
			for(j=i;j<n-1;j++)
			{
				t[j]=t[j+1];
			}
			i=i-1;
			n=n-1;

		}
	}while(i==n);
for(i=0;i<n;i++)
{
printf(" %d | ",t[i]);
}
}
}
