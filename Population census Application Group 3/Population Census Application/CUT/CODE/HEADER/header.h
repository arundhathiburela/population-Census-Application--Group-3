#ifndef HEADER_H
#define HEADER_H

typedef struct population_details
{
	        char zone_id[7];
		char ssid[10];
		char name[20];
		char age[4];
		char aadhar_no[20];
		char gender[12];
		char address[50];
		char qualification[20];
		char literate[4];
		char occupation[10];
		char annual_income[30];
		char no_of_dependants[3];
		char house_type[7];
		char area_type[6];
		char admin_id[20];
	        char password[20];
	        struct population_details *next;
}pd;
typedef struct temp 
{
	
	        char zone_id[7];
		char ssid[10];
		char name[20];
		char age[4];
		char aadhar_no[20];
		char gender[12];
		char address[50];
		char qualification[20];
		char literate[4];
		char occupation[10];
		char annual_income[30];
		char no_of_dependants[3];
		char house_type[7];
		char area_type[6];
		char admin_id[20];
	        char password[20];
}temp;
int Citizen_Data_Add();
int Citizen_Data_View1();
int Citizen_Data_Edit();
int Citizen_Data_Delete();
int Citizen_Data_Delete1();
int Citizen_Data_Create();
int Citizen_Data_View();
int Citizen_Data_Modify();
int check_zone_id();
int check_ssid();
int check_name();
int check_age();
int check_gender();
int check_address();
int check_literate();
int check_occupation();
int check_qualification();
int check_annual_income();
int check_no_of_dependants();
int check_house_type();
int check_area_type();
int check_aadhar_no();
int get_admin_id();
int get_password();
int put_admin_id(char);
int put_password(char);
int Zone_Wise_Registration();
int Central_Representative();
int Zone1_registration();
int Zone2_registration();
int Zone3_registration();
int Change_id_password();
int Data_Maintainence();
int Reports();
int Queries();
int Zone_1_Citizen_Register();
int Zone_2_Citizen_Register();
int Zone_3_Citizen_Register();
int list_to_file();
int file_to_list();



/*int ret_zone_id();
int ret_ssid();
int ret_name();
int ret_age();
int ret_gender();
int ret_address();
int ret_literate();
int ret_occupation();
int ret_annual_income();
int ret_no_of_dependants();
int ret_house_type();
int ret_area_type();
int ret_aadhar_no();
int put_zone_id(char zid[]);
int put_ssid(char sid[]);
int put_name(char n[]);
int put_age(char a[]);
int put_gender(char gend[]);
int put_address(char add[]);
int put_qualification(char qualify[]);
int put_literate(char lit[]);
int put_occupation(char occ[]);
int put_annual_income(char ann[]);
int put_no_of_dependants(char dep[]);
int put_house_type(char house[]);
int put_area_type(char area[]);
int put_aadhar(char aano[]);
int create_account(char,char);
int get_admin_id();
int get_password();
int put_admin_id(char);
int put_password(char);
int Zone_1_Citizen_Register();
int Zone_2_Citizen_Register();
int Zone_3_Citizen_Register();*/



/*void Citizen_Data_Create(char []);
void Citizen_Data_View();
void Citizen_Data_Modify(char []);
int citizen_Data_Delete();
char ret_zone_id();
char ret_ssid();
char ret_name();
char ret_age();
char ret_gender();
char ret_address();
char ret_literate();
char ret_occupation();
char ret_annual_income();
char ret_no_of_dependants();
char ret_house_type();
char ret_area_type();
char aadhar_no();
void put_zone_id(char zid[]);
void put_ssid(char sid[]);
void put_name(char n[]);
void put_age(char a[]);
void put_gender(char gend[]);
void put_address(char add[]);
void put_qualification(char qualify[]);
void put_literate(char lit[]);
void put_occupation(char occ[]);
void put_annual_income(char ann[]);
void put_no_of_dependants(char dep[]);
void put_house_type(char house[]);
void put_area_type(char area[]);
void put_aadhar(char aano[]);
int create_account(char,char);
char get_admin_id();
char get_password();
int put_admin_id(char);
int put_password(char);
int Zone_1_Citizen_Register();
int Zone_2_Citizen_Register();*/



#endif


