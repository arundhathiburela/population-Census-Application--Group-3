#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "header.h"

int Zone_Wise_Registration()
{
	char *arr[20]={"Zone-1CitizenRegister","Zone-2CitizenRegister","Zone-3Citizen_Register"};
	char ch[5];
	int ch1=sizeof ch[5];
	while(ch1 !=4)
	{
		system("clear");
		printf("\n------- Please select the Zone of Citizen Registration--------\n");
		printf("\n1.Zone-1 Citizen registration\n2.Zone-2 citizen registration\n3.Zone-3 citizen registration\n4.Back to main menu\n");
		system("read a");
		system("clear");
		scanf("%c",ch);
		int check_switchcase_choices(int ch1);
		switch(ch1)
		{
			case 1:Zone1_registration();
			       break;
			case 2:Zone2_registration();
			       break;
			case 3:Zone3_registration();
			       break;
			case 4:break;
			default:printf("invalid choice");
				continue;
		}
		
	}
	system("clear");
}
int Zone1_registration()
{
	char *arr[20]={"Citizen_data_create","Citizen_data_modify","Citizen_data_view"};
	char ch[5];
	int ch1=sizeof ch[5];
	while(ch1 !=4)
	{
		system("clear");
		printf("\n------- Please select the Zone of Citizen Registration--------\n");
		printf("\n1.Add data\n2.Edit data\n3.view data\n4.Back to main menu\n");
		system("read a");
		system("clear");
		scanf("%c",ch);
		switch(ch1)
		{
			case 1:Citizen_Data_Add();
			       break;
			case 2:Citizen_Data_Edit();
			       break;
			case 3:Citizen_Data_View1();
			       break;
			case 4:break;
			default:printf("invalid choice");
				continue;
		}
		
	}
}

int Zone2_registration()
{
	char *arr[20]={"Citizen_data_create","Citizen_data_modify","Citizen_data_view"};
	char ch[5];
	int ch1=sizeof ch[5];
	while(ch1 !=4)
	{
		system("clear");
		printf("\n------- Please select the Zone of Citizen Registration--------\n");
		printf("\n1.Add data\n2edit data\n3.view data\n4.Back to main menu\n");
		system("read a");
		system("clear");
		scanf("%c",ch);
		switch(ch1)
		{
			case 1:Citizen_Data_Add();
			       break;
			case 2:Citizen_Data_Edit();
			       break;
			case 3:Citizen_Data_View1();
			       break;
			case 4:break;
			default:printf("invalid choice");
				continue;
		}
	}
}
int Zone3_registration()
{
	char *arr[20]={"Citizen_data_create","Citizen_data_modify","Citizen_data_view"};
	char ch[5];
	int ch1=sizeof ch[5];
	while(ch1 !=4)
	{
		system("clear");
		printf("\n------- Please select the Zone of Citizen Registration--------\n");
		printf("\n1.Add data\n2.edit data\n3.view data\n4.Back to main menu\n");
		system("read a");
		system("clear");
		scanf("%c",ch);
		switch(ch1)
		{
			case 1:Citizen_Data_Add();
			       break;
			case 2:Citizen_Data_Edit();
			       break;
			case 3:Citizen_Data_View1();
			       break;
			case 4:break;
			default:printf("invalid choice");
				continue;
		}
	}
}
		
		
//int login_page();
int Central_Representative()
{
	//if(login_page()==1)
	
		system("read a");
		system("clear");
		char temp[25];
		scanf("\n%s",temp);
		char *arr[4]={"Change_id_password","Data_maintainence","Reports","Queries"};
		char ch[5];
		int ch1=sizeof ch[5];
		while(ch1 !=5)
		{

			printf("\n-------Select the option--------\n");
			printf("\n1.Change admin ID or password\n2.Data Maintainennce\n3.Reports\n4.Queries\n5.Back to main menu");
			system("read a");
			system("clear");
			scanf("%s",ch);
		        int check_switchcase_choices(int ch1);
		       switch(ch1)
		        {
			case 1: Change_id_password();
			       break;
			case 2: Data_Maintainance();
			       break;
			case 3: Reports();
			       break;
			case 4:Queries();
			       break;
			case 5:break;
			default:printf("invalid choice");
				continue;
		        }


			system("clear");
		}

	
}
int Change_id_password()
{
}
int Data_Maintainance()
{
	
		system("read a");
		system("clear");
		char temp[25];
		scanf("\n%s",temp);
		char *arr[4]={"Citizen_Data_View","Citizen_Data_Modify","Citizen_Data_Delete"};
		char ch[5];
		int ch1=sizeof ch[5];
		while(ch1 !=5)
		{

			printf("\n-------Select the option--------\n");
			printf("\n1.Citizen_Data_view\n2.Citizen_Data_Modify\n3.Citizen_Data_Delete\n4.Back to main menu");
			system("read a");
			system("clear");
			scanf("%s",ch);
		        int check_switchcase_choices(int ch1);
		       switch(ch1)
		        {
			case 1:Citizen_Data_View();
			       break;
			case 2:Citizen_Data_Modify();
			       break;
			case 3:Citizen_Data_Delete1();
			       break;
			case 4:break;
			default:printf("invalid choice");
				continue;
			}


			system("clear");
		  }
}
int Reports()
{
	
		system("read a");
		system("clear");
		char temp[25];
		scanf("\n%s",temp);
		char *arr[4]={"Age_Group_Report","Gender_Report","bPL_Zone_Wise_Report","Forming_Papulation_Report",};
		char ch[5];
		int ch1=sizeof ch[5];
		while(ch1 !=5)
		{

			printf("\n-------Select the option--------\n");
			printf("\n1.Age_Group_Report\n2.Gender_Report\n3.BPl_Zone_Wise_Report\n4.Farming_Population_Report\n5.back to main menu");
			system("read a");
			system("clear");
			scanf("%s",ch);
		        int check_switchcase_choices(int ch1);
		        switch(ch1)
		        {
			case 1: Age_Group_Report();
			       break;
			case 2: Gender_Report();
			       break;
			case 3: BPL_Zone_Wise_Report();
			       break;
			case 4: Farming_Population_Report();
			       break;
			case 5:break;
			default:printf("invalid choice");
				continue;
		        }


			system("clear");
		  
		}
}
int Age_Group_Report()
{
}
int Gender_Report()
{
}
int BPL_Zone_Wise_Report()
{
}
int Farming_Population_Report()
{
}
int Queries()
{
	
		system("read a");
		system("clear");
		char temp[25];
		scanf("\n%s",temp);
		char *arr[5]={"Literacy_Rate","Zone_with_highest_literacy","BPL_avarage_income","Rural_and_Urban_Population","Zone_with_highest_male_and_female"};
		char ch[5];
		int ch1=sizeof ch[5];
		while(ch1 !=5)
		{

			printf("\n-------Select the option--------\n");
		
		        printf("\n1.Literacy_Rate\n2.Zone_with_highest_literacy\n3.BPL_avarage_income\n4.Rural_and_Urban_Population\n5.Zone_with_highest_male_and_female\n6.back to main menu");
			system("clear");
			scanf("%s",ch);
		        int check_switchcase_choices(int ch1);
		       switch(ch1)
		        {
			case 1: Literacy_Rate();
			       break;
			case 2: Zone_with_highest_literacy();
			       break;
			case 3: BPL_average_income();
			       break;
			case 4: Rural_and_urban_population();
			       break;
			case 5: Zone_with_highest_male_and_female();
			       break;
			case 6:break;
			default:printf("invalid choice");
				continue;
		        }


			system("clear");
		  
		}
}
int Literacy_Rate()
{
}
int Zone_with_highest_literacy()
{
}
int BPL_average_income()
{
}
int Rural_and_urban_population()
{
}
int Zone_with_highest_male_and_female()
{
}




int login_page()
{
	char id[20];
	char pass_word[20];
	int chance=3;
	while(1)
	{
		if(chance>0)
		{
			char trying[10];
			int trying1=sizeof trying[10];
			trying[0]='a';
			system("clear");
			printf("\n-------Login Page--------\n");
			printf("\n Enter the Admin ID :\n");
			scanf("%s",id);
			printf("\n Enter your password:\n");
			scanf("%s",pass_word);
			/*calling authentication function
			  if(get_admin_id() == id)
			  {
			  if(get_password() == pass_word)
			  {
			  return EXIT_SUCCESS;
			  return 1;
			  }
			  }*/
			printf("\nInvalid Admin ID or Passwaord!\n");
		}
		chance --;
		if(chance==0)
		{
			printf("\nYou have reached maximum number of tries\n");
			printf("\nGetting back to main menu\n");
			system("read a");
			system("clear");
			return 0;
		}
		printf("Want to try again then press 1:\n");
		char temp[20];
		scanf("%s",temp);
		char trying[10];
		int trying1=sizeof trying[10];
		if(trying1 !=1)
		{
			printf("\nEnter a single digit only\n");
			system("read a");
			system("clear");
			continue;
		}
		if(isblank(trying[0]))
		{
			printf("\nChoice cannot be blank\n");
			system("read a");
			system("clear");
			continue;
		}
		if(isalpha(trying[0]))
		{
			printf("\nInvalid input!(Only members are allowed\n");
		}
		if(trying1 !=1)
		{
			return 0;
		}

	}
	return EXIT_SUCCESS;
}





























