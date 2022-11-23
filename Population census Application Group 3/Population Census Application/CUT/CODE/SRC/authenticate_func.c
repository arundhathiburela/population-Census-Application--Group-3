#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"header.h"
int zone_details()
{
while(1)
{
        int id;
        char psd[20];
        system("read a");
        system("clear");
        printf("Enter admin_id");
        scanf("%d",&id);
        printf("Enter password:");
        scanf("%s",psd);
        if(strcmp(psd,"admin123")==0)
        {
                system("clear");
                int ch1=0;
                while(ch1!=5)
                {
                        printf("\n1.add zone details\n2.view zone details\n3.edit zone details\n4.exit\n");
                        printf("Enter your choice:\n");
                        scanf("%d",&ch1);
                        switch(ch1)
                        {
				case 1:void Citizen_Data_Create();
                                       break;
                                case 2:void Citizen_Data_View();
                                       break;
                                case 3:void Citizen_Data_Modify();
                                       break;
				case 4:break;
                                defauit:printf("Invalid choice");
                                        continue;
                       }
                }
	}
                else if(psd!="admin123")
                {
                        printf("\nWrong pssword\n");
                        printf("\nTry again\n");
                        continue;
                }
                else
		{

                        break;
		}
        //      return EXIT_SUCCESS;
         }
}







