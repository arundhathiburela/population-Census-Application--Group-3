#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include "header.h"


int check_ssid(char ssid[])
{

    if(strlen(ssid) == 0)
    {
        printf("\nssid cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(ssid[0]))
    {
        printf("\nssid cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	if(strlen(ssid) != 9)
	{
		printf("\nSSID number length should be 9.\n");
		return EXIT_FAILURE;
	}

	for(int i = 0; i<strlen(ssid); i++)
	{
		if(!isdigit(ssid[i]))
		{
			printf("\nSSID should have only numbers.\n");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}

int check_zoneid(char zoneid [])
{

    if(strlen(zoneid) == 0)
    {
        printf("\nZone ID cannot be blank\n");
        return EXIT_FAILURE;
    }
    if(isblank(zoneid[0]))
    {
        printf("\nZone ID cannot start with blank space\n");
	return EXIT_FAILURE;
    }
        if(strlen(zoneid) != 6)
        {
                printf("\nLength Zone ID should be 6.\n");
		return EXIT_FAILURE;
        }

	if( (strcmp(zoneid,"ZID100") != 0) && (strcmp(zoneid,"ZID200") != 0) && (strcmp(zoneid,"ZID300") != 0))
	{
		printf("\nInvalid Zone ID! (It should be ZID100 or ZID200 or ZID300)\n");
		return EXIT_FAILURE;
	}

        return EXIT_SUCCESS;
}



int check_name(char name[])
{
	
    if(strlen(name) == 0)
    {
        printf("\nName cannot be blank\n");
        return EXIT_FAILURE;
    }
    if(isblank(name[0]))
    {
        printf("\nName cannot start with blank space\n");
        return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(name); i++)
	{
		if(!isalpha(name[i]))
		{
			printf("\nEnter a valid name. (It should only contain alphabets)\n");
		}
	}
	return EXIT_SUCCESS;
}




int check_age(char age[])
{
	
    if(strlen(age) == 0)
    {
        printf("\nage cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(age[0]))
    {
        printf("\nage cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(age); i++)
	{
		if(!isdigit(age[i]))
		{
			printf("\nEnter a valid Age! (It should only include numbers)\n");
			return EXIT_FAILURE;
		}
	}

	if(atoi(age)<1 || atoi(age)>120)
	{
		printf("\nEnter a valid Age! (In the range of 1 to 120)\n");
	        return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}



int check_gender(char gender[])
{
	
    if(strlen(gender) == 0)
    {
        printf("\ngender cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(gender[0]))
    {
        printf("\ngender cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(gender); i++)
	{
		if(!isalpha(gender[i]))
		{
			printf("\nEnter a valid gender!  ( m : male/ f : female / t : transgender )\n");
			return EXIT_FAILURE;
		}
	}
	if((strcmp(gender,"m")!=0) && (strcmp(gender,"f")!=0) && (strcmp(gender,"t")!=0) && (strcmp(gender,"M")!=0) && (strcmp(gender,"F")!=0) && (strcmp(gender,"T")!=0))
	{
		printf("\nEnter a valid gender!  ( m : male / f : female / t : transgender )\n");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}


int check_annual_income(char annual_income[])
{
	
    if(strlen(annual_income) == 0)
    {
        printf("\nAnnual income cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(annual_income[0]))
    {
        printf("\nAnnual income cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(annual_income); i++)
	{
		if(!isdigit(annual_income[i]))
		{
			printf("\nAnnual Income should only contain numbers!\n");
			return EXIT_FAILURE;
		}

	}
	if (atoi(annual_income)<1000)
	{
		printf("\nEnter a valid Annual Income! (Annual income cannot be less than 1000)\n");
                return EXIT_FAILURE;
	}
       return EXIT_SUCCESS;
}
int check_occupation(char occupation[])
{
	
    if(strlen(occupation) == 0)
    {
        printf("\noccupation cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(occupation[0]))
    {
        printf("\noccupation cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(occupation); i++)
	{
		if(!isalpha(occupation[i]))
		{
			printf("\nOccupation field should only consists of alphabets!\n");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}

int check_qualification(char qualification[])
{
	
    if(strlen(qualification) == 0)
    {
        printf("\nqualification cannot be blank\n");
        return EXIT_FAILURE;
    }
    if(isblank(qualification[0]))
    {
        printf("\nqualification cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(qualification); i++)
	{
		if(qualification[i] != '-' && qualification[i] != '.' && !isalpha(qualification[i]))
		{
			printf("\nQualification field should have only alphabets!\n");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}
int check_house_type(char house_type[])
{
	
    if(strlen(house_type) == 0)
    {
        printf("\nhouse type cannot be blank\n");
        return EXIT_FAILURE;
    }
    if(isblank(house_type[0]))
    {
        printf("\nhouse type cannot start with blank space\n");
        return 0;
    }
	for(int i = 0; i<strlen(house_type); i++)
	{
		if(!isalpha(house_type[i]))
		{
		        printf("\nHouse type field should have only alphabets!\n");
			return 0;
		}
	}
	if( (strcmp(house_type,"o")!=0) && (strcmp(house_type,"r")!=0) && (strcmp(house_type,"O")!=0) && (strcmp(house_type,"R")!=0))
	{
		printf( "\nEnter your valid house type!  ( o : own or r : rented )\n ");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}


int check_dependants(char dependants[])
{
	
    if(strlen(dependants) == 0)
    {
        printf("\ndependants cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(dependants[0]))
    {
        printf("\ndependants cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(dependants); i++)
	{
		if(!isdigit(dependants[i]))
		{
			printf("\nThe Dependants field can only contain numeric values. \n ");
			return EXIT_FAILURE;
		}
	}
	if(atoi(dependants)<1 || atoi(dependants)>20)
	{
		printf("\nEnter a valid Age! (In the range of 1 to 20)\n"); 
	        return EXIT_FAILURE;
	}
	return EXIT_FAILURE;
}
int check_area_type(char area_type[])
{
	
    if(strlen(area_type) == 0)
    {
        printf("\nArea type cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(area_type[0]))
    {
        printf("\nArea type cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	for(int i = 0; i<strlen(area_type); i++)
	{
		if(!isalpha(area_type[i]))
		{
		printf("\nArea type field should consists only alphabets!\n");
		return EXIT_FAILURE;
		}
	}
	if ((strcmp(area_type,"u")!=0) && (strcmp(area_type,"r")!=0) && (strcmp(area_type,"U")!=0) && (strcmp(area_type,"R")!=0))
	{
		printf( "\nEnter your valid area type!  ( u : urban or r : rural )\n ");
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
int check_aadhar_no(char aadhar_no[])
{

    if(strlen(aadhar_no) == 0)
    {
        printf("\nAadhar_no cannot be blank\n");
	return EXIT_FAILURE;
    }
    if(isblank(aadhar_no[0]))
    {
        printf("\nAadhar_No cannot start with blank space\n");
	return EXIT_FAILURE;
    }
	if(strlen(aadhar_no) != 12)
	{
		printf("\nAadhar_no number length should be 12.\n");
		return EXIT_FAILURE;
	}

	for(int i = 0; i<strlen(aadhar_no); i++)
	{
		if(!isdigit(aadhar_no[i]))
		{
			printf("\nAadhar_no should have only numbers.\n");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}
int check_switchcase_choices(int ch1 )
{
	        char ch[5];

                while(1)
                {

                if(ch1!=1)
                {
                        perror("\nEnter single digit only\n");
                        system("read a");
                        system("clear");
                        continue;
                }
                if(isblank(ch[0]))
                {
                        perror("\nChoice cannot be blank\n");
                        system("read a");
                        system("clear");
                        continue;
                }
                if(isalpha(ch[0]))
                {
                        perror("\nInvalid input!(Only members are allowed\n");
                }
                if(ch1<1 || ch1>4)
                {
                        perror("\nInvalid input\n");
                        system("read a");
                        system("clear");
                        continue;
                }
                else
                {
                        if(ch1==4)

                                break;

                }
		}
		return EXIT_FAILURE;
}


