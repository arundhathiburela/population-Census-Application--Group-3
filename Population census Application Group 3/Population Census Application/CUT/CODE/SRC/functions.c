#include "header.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
pd *start,*new,*ptr,*prev,*last;


int Citizen_Data_Add(char zid[])
{
	//create
        if((new=(pd *)calloc(1,sizeof(pd)))==NULL)
	{
		printf("\nMemory allocation failure\n");
		return EXIT_FAILURE;
	}	system("clear");
	strcpy(new->zone_id,zid);
	temp *c;
	int flag=0;
	while(1)
	{
		int flag = 0;
		printf("\nEnter your ssid (It will be a 9 digit number):\n ");
		system("clear");
		scanf("%s",new->ssid);
		if(check_ssid(new->ssid) == 1)
		{
			for(ptr=start;(ptr);ptr=ptr->next)  
			{
				if(ptr->ssid == new->ssid)
				{
					//c=ptr;
					printf("\nThis ssid %s already exists!\n",new->ssid);
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				break;
			}
		}
	}
	while(1)
	{
		printf("Enter your name : \n");
	        system("clear");
	        scanf("%s",new->name);
		if(check_name(new->name) == 1)
                {
                        break;
                }

	}
	while(1)
	{
		printf("\nEnter your age : \n");
		system("clear");
	        scanf("%s",new->age);
		if(check_age(new->age) == 1)
                {
                        break;
                }
	}
	while(1)
	{
		printf("\nEnter your age : \n");
		system("clear");
	        scanf("%s",new->age);
		if(check_age(new->age) == 1)
                {
                        break;
                }
	}
	while(1)
	{
		printf("\nEnter your aadhar_no : \n");
		system("clear");
	        scanf("%s",new->aadhar_no);
		if(check_aadhar_no(new->aadhar_no) == 1)
                {
                        break;
                }
	}
	while(1)
	{
		printf("\nEnter your gender (m : male,  f : female, t : transgender) :\n ");
		system("clear");
	        scanf("%s",new->gender);
		if(check_gender(new->gender) == 1)
                {
			if(new->gender[0] == 'm' || new->gender[0] == 'M')
			{
				strcpy(new->gender,"male");
			}
			if(new->gender[0] == 'f' || new->gender[0] == 'F')
			{
				strcpy(new->gender,"female");
			}
			if(new->gender[0] == 't' || new->gender[0] == 'T')
			{
				strcpy(new->gender,"transgender");
			}
                        break;
                }

		//check gender male,female, transgender
	}

	while(1)
	{
		printf("\nEnter your address :\n ");
		system("clear");
	        scanf("%s",new->address);
		//fgets(address,50,stdin); //       mumbai
		if(strlen(new->address) == 0)
		{
			printf("\naddress cannot be blank\n");
			continue;
		}
		else if(isblank(new->address[0]))
		{
			printf("\naddress cannot start with blank space\n");
			continue;
		}
		else
		{
			break;
		}
	}
	
	while(1)
	{
		printf("\nEnter your qualification (If none please enter NA):\n ");
		system("clear");
	        scanf("%s",new->qualification);
		if(check_qualification(new->qualification) == 1)
                {
			if(strcmp(new->qualification,"NA") == 0)
			{
				strcpy(new->literate,"NO");
			}
			else
			{
				strcpy(new->literate,"YES");
			}
                        break;
                }

		//check qualification if it is NA put literate as NO or else YES
	}
	while(1)
	{
		printf("\nEnter your occupation :\n ");
		system("clear");
	        scanf("%s",new->occupation);
		if(check_occupation(new->occupation) == 1)
                {
                        break;
                }

		//check only characters
	}
	while(1)
	{
		printf("\nEnter your annual income :\n ");
		
		system("clear");
	        scanf("%s",new->annual_income); 
		if(check_annual_income(new->annual_income) == 1)
                {
                        break;
                }

		//check income numeric or not
	}
	while(1)
	{
		printf("\nEnter no_of_dependants :\n ");
		
		system("clear"); 
	        scanf("%s",new->no_of_dependants);
		if(check_no_of_dependants(new->no_of_dependants) == 1)
                {
                        break;
                }

		//check number
	}
	while(1)
	{
		printf("\nEnter your house type ( o : own or r : rented) :\n ");
		
		system("clear");
	        scanf("%s",new->house_type);
		if(check_house_type(new->house_type) == 1)
                {
			if(new->house_type[0] == 'o' || new->house_type[0] == 'O')
			{
				strcpy(new->house_type,"own");
			}
			if(new->house_type[0] == 'r' || new->house_type[0] == 'R')
			{
				strcpy(new->house_type,"rented");
			}
                        break;
                }

		//check only own or rented
	}
	while(1)
	{
		printf("\nEnter the area type ( r : rural or u : urban) :\n ");
		
	        scanf("%s",new->area_type);
		if(check_area_type(new->area_type) == 1)
                {
			if(new->area_type[0] == 'r' || new->area_type[0] == 'R')
			{
				strcpy(new->area_type,"rural");
			}
			
			if(new->area_type[0] == 'u' || new->area_type[0] == 'U')
			{
				strcpy(new->area_type,"urban");
			}
                        break;
                }

		//check rural or urban
	}
}
	
	
int check_no_of_dependants()
{
}



int Citizen_Data_View1()
{
	//view
	if(!start)
	{
	    printf("\n Empty list");
		system("read a");
		system("clear");
	}
	
	printf("\n************ Details of the Citizen ***************\n");
	printf("\nssid  Zoneid  Name  Age Aadhar_no  gender  address  qualification  literate occupation      Annual_income  NO_of_dependents  Housetype  Area_type\n");
	for(ptr=start ; (ptr) ; ptr=ptr->next)
	{

	printf("Zone id : ",ptr->zone_id);
	printf("SSID : ",ptr->ssid);
        printf("Name : ",ptr->name);
	printf("Age : ",ptr->age);
        printf("Gender : ",ptr->gender);
	printf("Address : ",ptr->address);
	printf("Qualification : ",ptr->qualification);
	printf("Literate : ",ptr->literate);
	printf("Occupation : ",ptr->occupation);
	printf("Annual Income : ",ptr->annual_income);
	printf("Number of Dependents : ",ptr->no_of_dependants);
	printf("House Type : ",ptr->house_type);
	printf("Area Type :",ptr->area_type);
        printf("\n***********************************************\n");
	system("read a");
	system("clear");
	}	
}



int Citizen_Data_Edit()
{
	char ch[15];
	//modify
	if(!start)
	{
	    printf("\n Empty list");
		system("read a");
		system("clear");
	}
	Citizen_Data_View();
	printf("Modify Citizen Details");
	char ch1[10];
	int ch2=sizeof ch;
	if(ch[0]=='1')
	{
		while(1)
		{
			printf("Enter new zone id : ");
			system("clear");
			scanf("%s",new->zone_id);
			if(check_zone_id(new->zone_id)==1)
			{
			    printf("Zone id updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='2')
	{
		while(1)
		{
			printf("Enter new name: ");
			system("clear");
			scanf("%s",new->name);
			if(check_name(new->name)==1)
			{
			    printf("name updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='3')
	{
		while(1)
		{
			printf("Enter new age: ");
			system("clear");
			scanf("%s",new->age);
			if(check_age(new->age)==1)
			{
			    printf("age updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='4')
	{
		while(1)
		{
			printf("Enter new address: ");
			system("clear");
			scanf("%s",new->address);
			if(strlen(new->address) == 0)
			{
				printf("\naddress cannot be blank");
				continue;
			}
			else if(isblank(new->address[0]))
			{
				printf("\naddress cannot start with blank space");
				continue;
			}
                        else if(check_address(new->address)==1)
			{
			    printf("address updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='5')
	{
		while(1)
		{
			printf("Enter new qualification: ");
			system("clear");
			scanf("%s",new->qualification);
			if(check_qualification(new->qualification)==1)
			{
			if(strcmp(new->qualification,"NA") == 0)
                          {
                                  strcpy(new->literate,"NO");
                          }
			else 
			{
				strcpy(new->literate,"YES");
			}
			    printf("qualification updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='6')
	{
		while(1)
		{
			printf("Enter occupation: ");
			system("clear");
			scanf("%s",new->occupation);
			if(check_occupation(new->occupation)==1)
			{
			    printf("occupation updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='7')
	{
		while(1)
		{
			printf("Enter new annual income: ");
			system("clear");
			scanf("%s",new->name);
			if(check_annual_income(new->annual_income)==1)
			{
			    printf("Annual incomeupdated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='8')
	{
		while(1)
		{
			printf("Enter new number of dependents: ");
			system("clear");
			scanf("%s",new->no_of_dependants);
			if(check_no_of_dependants(new->no_of_dependants)==1)
			{
			    printf("no_of_dependants updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch[0]=='9')
	{
		while(1)
		{
			printf("Enter new house_type: ");
			system("clear");
			scanf("%s",new->house_type);
			if(check_house_type(new->house_type)==1)
			{
			        if(new->house_type[0] == 'o' || new->house_type[0] == 'O')
			        {
				       strcpy(new->house_type,"own");
			        }
			        if(new->house_type[0] == 'r' || new->house_type[0] == 'R')
			        {
				strcpy(new->house_type,"rented");
			        }
			 printf("house type updated successfully!");
		         system("read a");
		         system("clear");
			 break;
			}
                }
	}
	else if(ch2==10)
	{
		while(1)
		{
			printf("Enter area type (u:urban||r:rural)");
			system("clear");
			scanf("%s",new->area_type);
			if(check_area_type(new->area_type)==1)
			{
				if(check_area_type(new->area_type)==1)
			        {   
					if(new->area_type[0] == 'r' || new->area_type[0] == 'R')
			                {
						strcpy(new->area_type,"rural");
			                }
			
			                if(new->area_type[0] == 'u' || new->area_type[0] == 'U')
			                {
				                strcpy(new->area_type,"urban");
			                }
				}
			    printf("area typeupdated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
                }
	}
	else if(ch2==11)
	{
		while(1)
		{
			printf("Enter area type aadhar no");
			system("clear");
			scanf("%s",new->aadhar_no);
			if(check_aadhar_no(new->aadhar_no)==1)
			{
			    printf("aadhar updated successfully!");
		            system("read a");
		            system("clear");
			    break;
			}
		}
	}
			    
				
		
}
int check_zone_id()
{
}
int check_address()
{
}
int Citizen_Data_Delete()
{
        if(!start)
        {
                printf("\nEmpty list\n");
                system("read a");
                system("clear");
                
        }
        char tssid[5];
        printf("Enter the ssid : ");
        scanf("%s", tssid);
        if(tssid==start->ssid)
        {
                ptr=start;
                start=start->next;
                free(ptr);
        }
        else
        {

            for(ptr=start ; (ptr)&& ptr ->ssid!=tssid; ptr=ptr->next);
            if(!ptr)
            {
                    printf(" ssid %s does not exist \n ",tssid);
                    system("read a");
                    system("clear");
             }
             prev->next=ptr->next;
             free(ptr);
         }
}


















