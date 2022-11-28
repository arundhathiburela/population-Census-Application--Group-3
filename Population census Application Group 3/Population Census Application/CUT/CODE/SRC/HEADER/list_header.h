#ifndef LIST_HEADER_H
#define LIST_HEADER_H

typedef struct population
{
	int ssid;
	long long int adhar_no;
	char name[20];
	int age;
	int  sex;
	char address[20];
	char qualification[20];
	char occupation[20];
	int income;
	int nod;
	int house;
	int ur;
	struct population *next;
}st;

typedef struct temp 
{
	int ssid;
	long long int adhar_no;
	char name[20];
	int age;
	int sex;
	char address[20];
	char qualification[20];
	char occupation[20];
	int income;
	int nod;
	int house;
	int ur;
}t;

int zone();
int admin();
int  add_zone_data(int i);
int edit_zone_data(int i);
int view_zone_data( int i);
int delete_zone_data(int i);
//Prototype of validating functions

int alpha_valid(char *s);
int file_to_list(int i,char *fn);
int list_to_file(int i,char *fn);
int view_low_cgpa();


#endif
