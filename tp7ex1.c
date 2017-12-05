/*
 ============================================================================
 Name        : tp7ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int numser;
	int typecpu;
	int vitcpu;
	int ram;
}PC;
int main(void) {
	PC p1,p2;
	do{
	printf("donner le num série de pc 1");
	scanf("%d",&p1.numser);
	printf("donner le type de cpu de pc 1");
	scanf("%d",&p1.typecpu);
	printf("donner la vitesse de cpu de  pc 1");
	scanf("%d",&p1.vitcpu);
	printf("donner le taille de la ram de pc 1");
	scanf("%d",&p1.ram);
	}while(p1.numser==0||p1.typecpu==0||p1.vitcpu==0||p1.ram==0);
	do{
	printf("donner le num série de pc 2");
	scanf("%d",&p2.numser);
	printf("donner le type de cpu de pc 2");
	scanf("%d",&p2.typecpu);
	printf("donner la vitesse de cpu de  pc 2");
	scanf("%d",&p2.vitcpu);
	printf("donner le taille de la ram de pc 2");
	scanf("%d",&p2.ram);
	}while(p2.numser==0||p2.typecpu==0||p2.vitcpu==0||p2.ram==0);
if(p1.vitcpu>p2.vitcpu)
{
	printf("le pc 1 est plus rapide que le pc 2 \n");
	printf("Ses caratéristiques:num série %d , type %d ,vitesse %d, ram %d   ",p1.numser,p1.typecpu,p1.vitcpu,p1.ram);
}else
{
	printf("le pc 2 est plus rapide que le pc 1 \n");
	printf("Ses caratéristiques:num série %d , type %d ,vitesse %d, ram %d   ",p1.numser,p2.typecpu,p2.vitcpu,p2.ram);
}
}
