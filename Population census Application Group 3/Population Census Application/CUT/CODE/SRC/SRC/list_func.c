#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/list_header.h"
st *start1,*start2,*start3,*start4;
st *last1,*last2,*last3,*last4,*tmp1;
st *start,*ptr,*new,*prev;

int add_zone_data(int zn)
{
	if(zn==1)
		start=start1;
	else if(zn==2)
		start=start2;
	else if(zn==3)
		start=start3;
        int ch=0;
	while(ch==0)
	{
		if((new=(st *)calloc(1,sizeof(st)))==NULL)
		{
			printf("\nMemory allocation failure\n");
			return EXIT_FAILURE;
		}
		while(1)
		{
			printf("Enter ssid should be more that 100-");
			scanf("%d",&new->ssid);
			if(new->ssid<100)
			{
				printf("\nInvalid ssid\n");
				continue;
			}
			if(start)
			{
				for(ptr=start;(ptr) && ptr->ssid!=new->ssid;ptr=ptr->next);
				if((ptr) && ptr->ssid==new->ssid)
				{
					printf("\nssid  %d is duplicate\n",new->ssid);
					continue;
				}
				else
					break;
			}
			else
				break;
		}
		while(1)
		{
			printf("Enter aadhar-");
			scanf("%lld",&new->adhar_no);
			if(new->adhar_no<10000)
			{
				printf("\nInvalid ssid\n");
				continue;
			}
			if(start)
			{
				for(ptr=start;(ptr) && ptr->adhar_no!=new->adhar_no;ptr=ptr->next);
				if((ptr) && ptr->adhar_no==new->adhar_no)
				{
					printf("\naadhar  %lld is duplicate\n",new->adhar_no);
					continue;
				}
				else
					break;
			}
			break;
		}
		while(1)
		{
			printf("Enter name-");
			scanf("%s",new->name);
			if(strlen(new->name)<5)
			{
				printf("\nmin 5 characters required\n");
				continue;
			}
			if(alpha_valid(new->name)==1)
			{
				printf("\nName should have only alphabets\n");
				continue;
			}
			else
				break;
		}
		while(1)
                {
                printf("Enter sex  0 for Male or  1 for Female-");
                scanf("%d",&new->sex);
                if(new->sex>2 ||new->sex<0)
                {
                    printf("\nThe value should be 1 or 0 only\n");
                }
                else
                    break;
                }

                printf("Enter address-");
                scanf("%s",new->address);


                while(1)
               {
                  printf("Enter qualification-");
                  scanf("%s",new->qualification);
                        if(alpha_valid(new->qualification)==1)
                        {
                                printf("\nQualification should have only alphabets\n");
                                continue;
                        }
                        else
                                break;
                }
                while(1)
                {
                printf("Enter occupation-");
                scanf("%s",new->occupation);
                     if(alpha_valid(new->occupation)==1)
                        {
                                printf("\noccupation should have only alphabets\n");
                                continue;
                        }
                        else
                                break;
                }



                while(1)
                {
                       printf("Enter annual income-");
                            scanf("%d",&new->income);
                            if(new->income<1000)
                            {
                               printf("\n annual income should be min 1000\n");
                            }
                            else
                            {
                              break;
                            }
                }


                printf("Enter no of dependancies-");
                scanf("%d",&new->nod);
                while(1)
                {
                        printf("Enter house type 0=own 1=rented-");
                        scanf("%d",&new->house);
                        if(new->house>2 ||new->house<0)
                        {
                           printf("\nThe value should be 1 or 0 only\n");
                        }
                else
                    break;
                }
                while(1)
                {

                       printf("Enter 0 for urban 1 for rural-");
                       scanf("%d",&new->ur);

                        if(new->ur>2 ||new->ur<0)
                        {
                           printf("\nThe value should be 1 or 0 only\n");
                        }
                else
                    break;
                }

		if(!start)   //empty list condition
		{
			start=new;
			new->next=NULL;
		}

		else if(new->ssid<start->ssid)
		{
			new->next=start;
			start=new;
		}
		else
		{
			for(ptr=start; (ptr) && ptr->ssid<new->ssid; prev=ptr,ptr=ptr->next);
			prev->next=new;
			new->next=ptr;
		}
		printf("\n Enter 0 to cont 1 to exit-");
		scanf("%d",&ch);
	}
	if(zn==1)
		start1=start;
	else if(zn==2)
		start2=start;
	else if(zn==3)
		start3=start;
	printf("\n%p",start);
	return EXIT_SUCCESS;
}

int view_zone_data(int zn)
{
	printf("\n%p",start1);
	if(zn==1)
		start=start1;
	else if(zn==2)
		start=start2;
	else if(zn==3)
		start=start3;

	if(!start)
	{
		printf("\nEmpty list\n");
		return EXIT_FAILURE;
	}
	printf("\nSSID Adhar Name Age Sex Address Qualif Occup Income Dpndnts House Area\n");
	for(ptr=start ; (ptr) ; ptr=ptr->next)
	{
		printf("\n%d %lld %s %d %d %s %s %s %d %d %d %d\n",ptr->ssid,ptr->adhar_no,ptr->name,ptr->age,ptr->sex,ptr->address,ptr->qualification,ptr->occupation,ptr->income,ptr->nod,ptr->house,ptr->ur);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}

int edit_zone_data(int zn)
{
	if(zn==1)
		start=start1;
	else if(zn==2)
		start=start2;
	else if(zn==3)
		start=start3;
	if(!start)
	{
		printf("\nEmpty File\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int ssid;
	printf("Enter ssid  to edit-");
	scanf("%d",&ssid);
	for(ptr=start ; (ptr) && ptr->ssid!=ssid ; ptr=ptr->next);
	if(!ptr)
	{
		printf("SSID  %d does not exist\n",ssid);
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	while(1)
	{
		printf("Enter name-");
		scanf("%s",ptr->name);
		if(strlen(ptr->name)<5)
		{
			printf("\nmin 5 characters required\n");
			continue;
		}
		if(alpha_valid(ptr->name)==1)
		{
			printf("\nName should have only alphabets\n");
			continue;
		}
		else
			break;
	}
	printf("Enter sex  0 for Male or  1 for Female-");
	scanf("%d",&new->sex);
	printf("Enter address-");
	scanf("%s",new->address);
	printf("Enter qualification-");
	scanf("%s",new->qualification);
	printf("Enter occupation-");
	scanf("%s",new->occupation);
	printf("Enter annual income-");
	scanf("%d",&new->income);
	printf("Enter no of dependancies-");
	scanf("%d",&new->nod);
	printf("Enter house type 0=own 1=rented-");
	scanf("%d",&new->house);
	printf("Enter 0 for urban 1 for rural-");
	scanf("%d",&new->ur);

	return EXIT_SUCCESS;
}


int delete_zone_data(int zn)
{
	if(zn==1)
		start=start1;
	else if(zn==2)
		start=start2;
	else if(zn==3)
		start=start3;
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int ssid;
	printf("Enter ssid to delete record-");
	scanf("%d",&ssid);
	if(ssid==start->ssid)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	else
	{
		for(ptr=start ; (ptr) && ptr->ssid!=ssid ; prev=ptr,ptr=ptr->next);
		if(!ptr)
		{
			printf("SSID  %d does not exist\n",ssid);
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		}
		prev->next=ptr->next;
		free(ptr);
		return EXIT_SUCCESS;

	}
}
