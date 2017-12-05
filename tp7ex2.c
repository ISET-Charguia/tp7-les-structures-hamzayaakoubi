/*
 ============================================================================
 Name        : tp7ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int jour;
	int mois;
	int annee;
}date;
typedef struct{
	char nom[10];
	date datnais;
	char nation[30];
	char sex[30];
}Joueur;
int main(void) {
	const int max=100;
	Joueur t[max];
	int n,i;
	do{
	printf("donner le nombre des basketeurs a traiter ");
	scanf("%d",&n);
	}while(n>max);
for(i=0;i<n;i++)
{
	printf("donner le nom de joueur n°%d \n",i+1);
	scanf("%s",t[i].nom);
	printf("donner le datnais de joueur n°%d \n",i+1);
	printf("jour:");
	scanf("%d",&t[i].datnais.jour);
	printf("mois:");
	scanf("%d",&t[i].datnais.mois);
	printf("année:");
	scanf("%d",&t[i].datnais.annee);
	printf("donner le nationalité de joueur n°%d \n",i+1);
	scanf("%s",t[i].nation);
	printf("donner le sex de joueur n°%d \n",i+1);
	scanf("%s",t[i].sex);
}
for(i=0;i<n;i++)
{
	if(strcmp("tn",t[i].nation)==0)
	{
		printf("son nom:%s ,son date de naissance: %d/%d/%d ,son sex: %s ",t[i].nom,t[i].datnais.jour,t[i].datnais.mois,t[i].datnais.annee,t[i].sex);
	}
}


}
