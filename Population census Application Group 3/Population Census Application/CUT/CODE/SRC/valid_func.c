#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/list_header.h"

extern st *start1,*start2,*start3,*start4;
extern st *last1,*last2,*last3,*last4;
extern st *ptr,*new,*prev,*start;
t tt;
int alpha_valid(char *s)
{
	for(char *p=s; (*p);p++)
	{
		if(!isalpha(*p))
			return 1;
	}
	return 0;
}

//this function writes the file to list
int file_to_list(int zn,char *fn)
{
	FILE *p;
	st *last;
	if(zn==1)
	{
		start=start1;
		last=last1;
	}
	else if(zn==2)
	{
		start=start2;
		last=last2;
	}
	else
	{
		start=start3;
		last=last3;
	}
	t tt;
	if((p=fopen(fn,"rb"))==NULL)
	{
		printf("File dos not exist");
		return EXIT_FAILURE;
	}
	fread(&tt,sizeof(t),1,p);
	while(!feof(p))
	{
		new=(st *)calloc(1,sizeof(st));
		new->ssid=tt.ssid;
		new->adhar_no=tt.adhar_no;
		strcpy(new->name,tt.name);
		new->age=tt.age;
		new->sex=tt.sex;
		strcpy(new->address,tt.address);
		strcpy(new->qualification,tt.qualification);
		strcpy(new->occupation,tt.occupation);
		new->income=tt.income;
		new->nod=tt.nod;
		new->house=tt.house;
		new->ur=tt.ur;
		if(!start)
		{
			start=last=new;
			new->next=NULL;
		}
		else
		{
			last->next=new;
			last=new;
			new->next=NULL;
		}
		fread(&tt,sizeof(t),1,p);
	}
	if(zn==1)
	{
		start1=start;
	}
	else if(zn==2)
	{
		start2=start;
	}
	else
	{
		start3=start;
	}
	fclose(p);
	return EXIT_SUCCESS;
}

int list_to_file(int zn, char *fn)
{
	st *last;
	if(zn==1)
	{
		start=start1;
		last=last1;
	}
	else if(zn==2)
	{
		start=start2;
		last=last2;
	}
	else
	{
		start=start3;
		last=last3;
	}
	if(!start)
	{
		printf("\nList empty\n");
		return EXIT_FAILURE;
	}
	FILE *p;
	if((p=fopen(fn,"wb"))==NULL)
	{
		printf("File dos not exist");
		return EXIT_FAILURE;
	}
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		tt.ssid=ptr->ssid;
		tt.adhar_no=ptr->adhar_no;
		strcpy(tt.name,ptr->name);
		tt.age=ptr->age;
		tt.sex=ptr->sex;
		strcpy(tt.address,ptr->address);
		strcpy(tt.qualification,ptr->qualification);
		strcpy(tt.occupation,ptr->occupation);
		fwrite(&tt,sizeof(t),1,p);
		tt.income=ptr->income;
		tt.nod=ptr->nod;
		tt.house=ptr->house;
		tt.ur=ptr->ur;
		fwrite(&tt,sizeof(t),1,p);
	}
	fclose(p);
	return EXIT_SUCCESS;
}
int view_low_cgpa()
{
}





