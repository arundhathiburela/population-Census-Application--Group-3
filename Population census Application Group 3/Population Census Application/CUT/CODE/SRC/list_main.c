#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/list_header.h"

extern st *start1,*start2,*start3,*start4;
extern st *last1,*last2,*last3,*last4;
char fn[20];
int ps;

int main()
{
	for(int i=1;i<=3;i++)
	{
		if(i==1)
		{
			strcpy(fn,"../data/zone1_data");
			ps=1;
		}
		if(i==2)
		{
			strcpy(fn,"../data/zone2_data");
			ps=2;
		}
		if(i==3)
		{
			strcpy(fn,"../data/zone3_data");
			ps=3;
		}
		file_to_list(ps,fn);
	}
	int ch=0;
	while(ch!=3)
	{
		printf("\n1.Zone Corner \n2.Admin Corner \n3.Exit\n");
		printf("Enter choice-");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: zone();
				break;
			case 2: admin();
				break;
			case 3: break;
			default: printf("\nInvalid Choice\n");
				 continue;
		}
	}
	for(int i=1;i<=3;i++)
	{
		if(i==1)
		{
			strcpy(fn,"../data/zone1_data");
			ps=1;
		}
		if(i==2)
		{
			strcpy(fn,"../data/zone2_data");
			ps=2;
		}
		if(i==3)
		{
			strcpy(fn,"../data/zone3_data");
			ps=3;
		}
		list_to_file(ps,fn);
	}
	return EXIT_SUCCESS;
}

int zone()
{
	int ch1=0;
	while(ch1!=4)
	{
		printf("\n1.Add Zone Data \n2.Edit Zone Data \n3.View Zone Data\n4.Go Back\n");
		printf("Enter choice-");
		scanf("%d",&ch1);
		int zch=0;
		switch(ch1)
		{
			case 1: zch=0;
				printf("\nWhich zone data to add 1 or 2 or 3-");
				scanf("%d",&zch);
				add_zone_data(zch);
				break;
			case 2: zch=0;
				printf("\nWhich zone data to edit 1 or 2 or 3-");
				scanf("%d",&zch);
				edit_zone_data(zch);
				break;

			case 3: zch=0;
				printf("\nWhich zone data to view 1 or 2 or 3-");
				scanf("%d",&zch);
				view_zone_data(zch);
				break;
			case 4: break;
			default: printf("\nInvalid Choice\n");
				 continue;
		}
	}
	return EXIT_SUCCESS;
}

int admin()
{
	int ach=0;
	int gch=0;
	while(ach!=9)
	{
		printf("\n1.Edit Zone Data\n2.Delete Zone Data\n3.Report 1\n4.Report 2\n5.Report 3\n6.Report 4\n7.Rport 5\n8. Gather Zone Data \n9. Go back");
		printf("\nEnter Choice-");
		scanf("%d",&ach);
		switch(ach)
		{
			case 1: gch=0;
				printf("\nWhich zone data to edit 1 or 2 or 3-");
				scanf("%d",&gch);
				edit_zone_data(gch);
				break;

			case 2: gch=0;
				printf("\nWhich zone data to delete 1 or 2 or 3-");
				scanf("%d",&gch);
				delete_zone_data(gch);
				break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
			case 8: break;
			case 9: break;
			default:printf("\nInvalid choice\n");
				continue;
		}
	}
}
