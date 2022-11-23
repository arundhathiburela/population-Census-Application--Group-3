#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"
pd *start,*new,*ptr,*prev,*last;
int file_to_list()
{
	FILE *p;
	pd t;
	if((p=fopen("password_data_file.txt","rb"))==NULL)
	{
		printf("\npassword_data_File is not there to read from\n");
		
	}
	while(!feof(p))
	{
		if((new=(pd*)calloc(1,sizeof(pd)))==NULL)
		{
			printf("\nMemory Allocation failed\n");
		}
		//new->admin_id=t.admin_id;
		strcpy(new->admin_id,t.admin_id);
		//new->password=t.password;
		strcpy(new->password,t.password);

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
		fread(&t,sizeof(pd),1,p);
	}
	fclose(p);
	FILE *p1;
	pd tmp;
	if((p1=fopen("Central_database","rb"))==NULL)
	{
		printf("\ncentral is not there to read from\n");
	}
	fread(&tmp,sizeof(pd),1,p1);
	while(!feof(p1))
		//Citizen c;
		{
		       strcpy(new->zone_id,tmp.zone_id);
		       strcpy(new->ssid,tmp.ssid);
		       strcpy(new->name,tmp.name);
		       strcpy(new->age,tmp.age);
		       strcpy(new->gender,tmp.gender);
		       strcpy(new->address,tmp.address);
		       strcpy(new->qualification,tmp.qualification);
		       strcpy(new->occupation,tmp.occupation);
		       strcpy(new->literate,tmp.literate);
		       strcpy(new->annual_income,tmp.annual_income);
		       strcpy(new->no_of_dependants,tmp.no_of_dependants);
		       strcpy(new->house_type,tmp.house_type);
		       strcpy(new->area_type,tmp.area_type);
		       strcpy(new->aadhar_no,tmp.aadhar_no);
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
		        fread(&tmp,sizeof(pd),1,p1);
		}
                fclose(p1);

}
int list_to_file()
{
	pd t2;
	if(!start)
	{
		printf("\nTHERE IS NO PASSWORD DATA IS ENTERED BY ADMIN\n");
	}
	FILE *p3;
	if((p3=fopen("password_data_file","wb"))==NULL)
	{
		printf("\nFile is not there to write from\n");
	}
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		//new->admin_id=t2.admin_id;
		strcpy(new->admin_id,t2.admin_id);
		//new->password=t2.password;
		strcpy(new->password,t2.password);
	}
	fwrite(&t2,sizeof(pd),1,p3);
	fclose(p3);
	FILE *fl1;
	pd tmp1;
	if(!start)
	{
		printf("\nTHERE IS NO DATA ENTERED\n");
	}
	if((fl1=fopen("Zone1_database","wb"))==NULL)
        {
	       printf("\nFile is not there to write from\n");
        }
	for(ptr=start;(ptr);ptr=ptr->next)
	{
	       
		strcpy(tmp1.zone_id,ptr->zone_id);
		strcpy(tmp1.ssid,ptr->ssid);
		strcpy(tmp1.name,ptr->name);
		strcpy(tmp1.age,ptr->age);
		strcpy(tmp1.gender,ptr->gender);
		strcpy(tmp1.address,ptr->address);
		strcpy(tmp1.qualification,ptr->qualification);
		strcpy(tmp1.literate,ptr->literate);
		strcpy(tmp1.occupation,ptr->occupation);
		strcpy(tmp1.annual_income,ptr->annual_income);
		strcpy(tmp1.no_of_dependants,ptr->no_of_dependants);
		strcpy(tmp1.house_type,ptr->house_type);
		strcpy(tmp1.area_type,ptr->area_type);
		strcpy(tmp1.aadhar_no,ptr->aadhar_no);




		/*strcpy(tmp1.zone_id,ptr->ret_zone_id);
		strcpy(tmp1.ssid,ptr->ret_ssid());
		strcpy(tmp1.name,ptr->ret_name());
		strcpy(tmp1.age,ptr->ret_age());
		strcpy(tmp1.gender,ptr->ret_gender());
		strcpy(tmp1.address,ptr->ret_address());
		strcpy(tmp1.qualification,ptr->ret_qualification());
		strcpy(tmp1.literate,ptr->ret_literate());
		strcpy(tmp1.occupation,ptr->ret_occupation());
		strcpy(tmp1.annual_income,ptr->ret_annual_income());
		strcpy(tmp1.no_of_dependants,ptr->ret_no_of_dependants());
		strcpy(tmp1.house_type,ptr->ret_house_type());
		strcpy(tmp1.area_type,ptr->ret_area_type());
		strcpy(tmp1.aadhar_no,ptr->ret_aadhar_no());*/
		if(strcmp(ptr->zone_id,"ZID100") == 0)
		{
		     fwrite(&tmp1,sizeof(pd),1,fl1);
				
		}
		fclose(fl1);
	}

	FILE *fl2;
	pd tmp2;
	if(!start)
	{
		printf("\nTHERE IS NO DATA ENTERED\n");
	}
	if((fl2=fopen("Zone2_database","wb"))==NULL)
        {
	       printf("\nFile is not there to write from\n");
        }
	for(ptr=start;(ptr);ptr=ptr->next)
	{
	        
		strcpy(tmp2.zone_id,ptr->zone_id);
		strcpy(tmp2.ssid,ptr->ssid);
		strcpy(tmp2.name,ptr->name);
		strcpy(tmp2.age,ptr->age);
		strcpy(tmp2.gender,ptr->gender);
		strcpy(tmp2.address,ptr->address);
		strcpy(tmp2.qualification,ptr->qualification);
		strcpy(tmp2.literate,ptr->literate);
		strcpy(tmp2.occupation,ptr->occupation);
		strcpy(tmp2.annual_income,ptr->annual_income);
		strcpy(tmp2.no_of_dependants,ptr->no_of_dependants);
		strcpy(tmp2.house_type,ptr->house_type);
		strcpy(tmp2.area_type,ptr->area_type);
		strcpy(tmp2.aadhar_no,ptr->aadhar_no);




		if(strcmp(ptr->zone_id,"ZID200") == 0)
		{
		     fwrite(&tmp2,sizeof(pd),1,fl2);
				
		}
		fclose(fl2);
	}
	FILE *fl3;
	pd tmp3;
	if(!start)
	{
		printf("\nTHERE IS NO DATA ENTERED\n");
	}
	if((fl3=fopen("Zone2_database","wb"))==NULL)
        {
	       printf("\nFile is not there to write from\n");
        }
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		
		strcpy(tmp3.zone_id,ptr->zone_id);
		strcpy(tmp3.ssid,ptr->ssid);
		strcpy(tmp3.name,ptr->name);
		strcpy(tmp3.age,ptr->age);
		strcpy(tmp3.gender,ptr->gender);
		strcpy(tmp3.address,ptr->address);
		strcpy(tmp3.qualification,ptr->qualification);
		strcpy(tmp3.literate,ptr->literate);
		strcpy(tmp3.occupation,ptr->occupation);
		strcpy(tmp3.annual_income,ptr->annual_income);
		strcpy(tmp3.no_of_dependants,ptr->no_of_dependants);
		strcpy(tmp3.house_type,ptr->house_type);
		strcpy(tmp3.area_type,ptr->area_type);
		strcpy(tmp3.aadhar_no,ptr->aadhar_no);




		if(strcmp(ptr->zone_id,"ZID300") == 0)
		{
		     fwrite(&tmp3,sizeof(pd),1,fl3);
				
		}
		fclose(fl3);
	}
	FILE *fl4;
	pd tmp4;
	if(!start)
	{
		printf("\nTHERE IS NO DATA ENTERED\n");
	}
	if((fl4=fopen("Central_database","wb"))==NULL)
        {
	       printf("\nFile is not there to write from\n");
        }
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		
		strcpy(tmp4.zone_id,ptr->zone_id);
		strcpy(tmp4.ssid,ptr->ssid);
		strcpy(tmp4.name,ptr->name);
		strcpy(tmp4.age,ptr->age);
		strcpy(tmp4.gender,ptr->gender);
		strcpy(tmp4.address,ptr->address);
		strcpy(tmp4.qualification,ptr->qualification);
		strcpy(tmp4.literate,ptr->literate);
		strcpy(tmp4.occupation,ptr->occupation);
		strcpy(tmp4.annual_income,ptr->annual_income);
		strcpy(tmp4.no_of_dependants,ptr->no_of_dependants);
		strcpy(tmp4.house_type,ptr->house_type);
		strcpy(tmp4.area_type,ptr->area_type);
		strcpy(tmp4.aadhar_no,ptr->aadhar_no);

		fwrite(&tmp4,sizeof(pd),1,fl4);
				
		fclose(fl4);
	}
         return EXIT_SUCCESS;
}
