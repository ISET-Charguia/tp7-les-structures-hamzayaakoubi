/*
 ============================================================================
 Name        : tp7ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char titre[30];
	int durée;
}chanson;
typedef struct {
	int année;
	char titre_dis[30];
	chanson list [5];
}disque;
int main(void) {
	disque t [10];
	int i,j,nb;
	for(i=0;i<10;i++)
	{
		printf("donner l'année de disque");
		scanf("%d",&t[i].année);
		printf("donner le titre de disque");
		scanf("%s",t[i].titre_dis);
		do{
		printf("Donner le nombre des chansons dans ce disque");
		scanf("%d",&nb);
		}while(nb>5);
		for(j=0;j<nb;j++)
		{
			printf("donner le titre de chanson n°%d",i+1);
			scanf("%d",&t[i].list[j].titre);
			printf("donner la durée de chanson n°%d",i+1);
			scanf("%d",&t[i].list[j].durée);

		}

	}




}
