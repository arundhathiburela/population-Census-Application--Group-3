#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
#include<ctype.h>
extern pd *start,*new,*ptr,*prev,*next;
int Citizen_Data_View()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	char ssid[5];
	printf("Enter the ssid : ");
	scanf("%s", ssid);
        for(ptr=start ; (ptr) ; ptr=ptr->next)
        {
		if(ptr -> ssid== ssid)
		{
			ptr=Citizen_Data_View();
			return EXIT_SUCCESS;
		}
	}
	printf("the given ssid is not found ");
	system("read n");
	system("clear");
	return EXIT_FAILURE;
}
int Citizen_Data_Delete1()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	char ssid[5];
	printf("Enter the ssid : ");
	scanf("%s", ssid);
        for(ptr=start ; (ptr) ; ptr=ptr->next)
        {
		if(ptr -> ssid== ssid)
		{
			ptr=Citizen_Data_Delete();
			return EXIT_SUCCESS;
		}
	}
	printf("the given ssid is not found ");
	system("read n");
	system("clear");
	return EXIT_FAILURE;

}
int Citizen_Data_Modify()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	char ssid[5];
	printf("Enter the ssid : ");
	scanf("%s", ssid);
        for(ptr=start ; (ptr) ; ptr=ptr->next)
        {
		if(ptr -> ssid== ssid)
		{
			char temp[5];
			scanf("%s",temp);
			char ch[15];
			while(1)
			{
				system("clear");
				printf("Enter the option you want to edit");
				printf("1. Zone id\n""2. Name\n""3. Age\n""4. Address\n""5. Qualification\n""6. Occupation\n""7. Annual Income\n""8. Number of Dependants\n""9. House Type\n""10. Area Type\n""11.Aadhar number\n""11. <-Back\n");

				printf("Enter your choice");
				scanf("%s",ch);
				if(strlen(ch) == 0)
				{
					printf("It cannot be blank");
					system("read n");
					continue;
				}
				else if(isblank(ch[0]))
				{
					printf("It cannot start with blank space");
					system("read n");
					continue;
				}
				else if(isalpha(ch[0]) || isalpha(ch[1]))
				{
					printf("Only digits are allowed");
					system("read n");
					continue;
				}
				else if(strlen(ch) <3)
				{
					char char_arr[20];
					if(atoi(ch)>0 && atoi(ch)<11)
					{
						ptr= char_arr;
    						
    						//char_arr[]=ch[0];				
						ptr=Citizen_Data_Modify(char_arr);
						break;
					}
					else if(atoi(ch) == 11)
					{
						system("clear");
						break;
					}
					else
					{
						printf("Invalid input");
						system("read n");
					}
					
				}
				else
				{
					printf("Invalid input");
					system("read n");
				}

			}
			return EXIT_SUCCESS;
		}
	}
	printf("The given ssid is  not found");
	system("read n");
	system("clear");
	return EXIT_FAILURE;
}
