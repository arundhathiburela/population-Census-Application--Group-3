#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "header.h"

int main()
{
    
	//puting the login details like admin and password into list;
	system("clear");
	file_to_list();
	char ch[6];
	int ch1=sizeof ch[6];
	void (*p[2])={"Ortiga_Zone_Wise_Registration","Ortiga_Central_Representative"};
	while(ch1 != 3)
	{
		printf("\n************** Welcome to Ortiga Population Census Portal **************\n");
		printf("\n--------- Main Menu --------\n1. Ortiga Zone Wise Registration\n2. Ortiga Central Representative\n3. Exit");
		printf("\nEnter your choice\n");
                system("read a");
		system("clear");
		scanf("%s",ch);
		int check_switchcase_choices(int ch1);
		switch(ch1)
		{
			case 1:Zone_Wise_Registration();
		             break;
			case 2:Central_Representative();
			     break;
		        case 3:break;
		        default:printf("invalid choice");
			      continue;
		}
                     


	}

        list_to_file();
	system("clear");
	
}
