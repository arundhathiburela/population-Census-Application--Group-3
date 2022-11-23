#include<stdio.h>
#include<map>
#include<string>
#include<vector>
#include <cmath>
#include "class"


{

void Literacy_Rate()
{
	
	// traverse through list
	// check literate == "YES"  increase literate_count variable
	int total_pop = 0, total_l = 0;
	for(Citizen c : li)
	{
		total_pop++;
		if(strcmp(c.ret_literate(),"YES") == 0)
		{
			total_l++;
		}
	}

	//calcultions
	if(total_pop == 0)
	{	
	printf("Literacy Rate of Dynaland is : 0 %\n");
	}
	else
	{
	printf("Literacy Rate of Dynaland is : "(total_l/double(total_pop))*100" %"m ,k\n);
	}
	system("read n");
	system("clear");

}

//--------------------------------------------Zone with highest literacy ----------------------------------------//
/*******************************************************************************************************************************************
**
** FUNCTION NAME : Zone_with_highest_literacy.
** DESCRIPTION   : This function checks the highest literacy rate according to zone wise by calculating the zone wise literates by total 
                   population in zone.
** RETURN        : void
**
*******************************************************************************************************************************************/

void Zone_with_highest_literacy()
{
	/*
        int z1_pop = 0, z2_pop = 0, z3_pop = 0;
        int z1_l = 0, z2_l = 0, z3_l = 0;
	*/
	vector<int>z_pop;
	vector<int>z_lit; 
	z_pop.assign(3,0); // inserting 3 elements of 0
	z_lit.assign(3,0); // inserting 3 elements of 0

        for(Citizen c : li)
        {
                if(strcmp(c.ret_zone_id(),"ZID100") == 0)
                {
                        z_pop[0]++;
                        if(strcmp(c.ret_literate(), "YES") == 0)
                        {
                                z_lit[0]++;
                        }
                }
                else if(strcmp(c.ret_zone_id() , "ZID200") == 0)
                {
                        z_pop[1]++;
                        if(strcmp(c.ret_literate() , "YES")==0)
                        {
                                z_lit[1]++;
                        }

                }
                else
                {
                        z_pop[2]++;
                        if(strcmp(c.ret_literate(),"YES") ==0)
                        {
                                z_lit[2]++;
                        }

                }
        }

        //calcultions
/*
	double p1=0,p2=0,p3=0;
	p1 = (z1_l/double(z1_pop))*100;
	p2 = (z2_l/double(z2_pop))*100;
	p3 = (z3_l/double(z3_pop))*100;
	*/
	vector<int>p;
	p.assign(3,0);
	for(int i = 0; i<3; i++)
	{
		p[i] = (z_lit[i]/double(z_pop[i]))*100;
	}

	if(p[0] >= p[1] || std::isnan(p[1]))
	{
		if(p[0]>=p[2] || std::isnan(p[2]))
		{
			printf("The Zone With Highest literate rate "p[0]" %"" is Zone 1" \n);
		}
		else
		{
			printf("The Zone With Highest literate rate "p[2]" %"" is Zone 3" \n);
		}
	}
	else
	{	
		if(p[1]>=p[2] || std::isnan(p[2]))
		{
			printf("The Zone With Highest literate rate "p[1]" %"" is Zone 2" \n);
		}
		else
		{
			printf("The Zone With Highest literate rate "p[2]" %"" is Zone 3" \n);
		}
	}
	system("read n");
	system("clear");


}
//--------------------------------------BPL average income----------------------------------//
/******************************************************************************************************************************************
**
** FUNCTION NAME  : BPL_average_income.
** DESCRIPTION    : This function checks the average annual income of population below poverty line in dynaland.
** RETURN         : void
**
******************************************************************************************************************************************/

void BPL_average_income()
{
/*
	int total_pop = 0;
	int total_BPL = 0;
	map<string, double> m;
	m["pop"]=0;
	m["BPL"]=0;*/
	double BPL = 0;
	double BPL_total_income = 0;

	for(Citizen c : li)
	{
		
		if(stod(c.ret_annual_income()) < 100000)
		{
			BPL++;
			BPL_total_income += stod(c.ret_annual_income());
		}
	}
	if(BPL == 0)
	{
	printf("Average Annual Income of population below poverty line in Dynaland is 0 \n");
	}
	else
	{
	printf("Average Annual Income of population below poverty line in Dynaland is "(BPL_total_income/BPL)\n);
	}	
	system("read n");
	system("clear");
	

}

//----------------------------------------Rural and urbal population---------------------------//-
/*****************************************************************************************************************************************
**
** FUNCTION NAME  : Rural_and_Urban_Population.
** DESCRIPTION    : This function checks the Percentage of population living in rural and urban by calculating the rural and urban by total 
                    population.
** RETURN         : void
**
******************************************************************************************************************************************/

void Rural_and_Urban_Population()
{
/*
	int total_pop = 0;
        int r_pop = 0;
	int u_pop = 0;*/
	map<string, int>m;
	m["pop"] = 0;
	m["rural"] = 0;
	m["urban"] = 0;

        for(Citizen c : li)
        {
                m["pop"]++;
                if(strcmp(c.ret_area_type() , "rural")== 0)
                {
                        m["rural"]++;
                }
		else
		{
			m["urban"]++;
		}
        }
	if(m["pop"] == 0)
	{
        printf("Percentage of population living in Rural Area in Dynaland is 0 % \n");
        printf("Percentage of population living in Urban Area in Dynaland is 0 % \n");
	}
	else
	{
        printf("Percentage of population living in Rural Area in Dynaland is "(m["rural"]/double(m["pop"]))*100" %" \n);
        printf("Percentage of population living in Urban Area in Dynaland is "(m["urban"]/double(m["pop"]))*100" %" \n);
	}
	system("read n");
	system("clear");


}
/*-----------------------------------------Zone with highest male and female-----------------------------//
******************************************************************************************************************************************
**
** FUNCTION NAME  : Zone_with_highest_male_and_female
** DESCRIPTION    : This function checks the highest percentage of males,females and transgender by calculating in zone wise.
** RETURN         : void
**
*******************************************************************************************************************************************
*/
void Zone_with_highest_male_and_female()
{
	/*
	int z1_pop = 0, z2_pop = 0, z3_pop = 0;
        int z1_m = 0, z2_m = 0, z3_m = 0;
        int z1_f = 0, z2_f = 0, z3_f = 0;
        int z1_t = 0, z2_t = 0, z3_t = 0;
*/
	map<string, vector<int>>m;
	vector<int>z_pop; // [z1_pop, z2_pop, z3_pop]
	z_pop.assign(3,0);
	vector<int>z1; // [z1_m, z1_f, z1_t]
	z1.assign(3,0);
	vector<int>z2;
	z2.assign(3,0);
	vector<int>z3;
	z3.assign(3,0);
	m["pop"] = z_pop;
	m["zone1"] = z1;
	m["zone2"] = z2;
	m["zone3"] = z3;

        for(Citizen c : li)
        {
                if(strcmp(c.ret_zone_id() ,"ZID100")==0)
                {
                        m["pop"][0]++;
                        if(strcmp(c.ret_gender() , "male")==0)
                        {
                                m["zone1"][0]++;
                        }
			else if(strcmp(c.ret_gender(),"female")==0)
			{
				m["zone1"][1]++;

			}
			else
			{
				m["zone1"][2]++;
			}
                }
                else if(strcmp(c.ret_zone_id(), "ZID200")==0)
                {
                        m["pop"][1]++;
                        if(strcmp(c.ret_gender() , "male")==0)
                        {
                                m["zone2"][0]++;
                        }
			else if(strcmp(c.ret_gender() , "female")==0)
			{
				m["zone2"][1]++;
			}
			else
			{
				m["zone2"][2]++;
			}

                }
                else
                {
                        m["pop"][2]++;
                        if(strcmp(c.ret_gender() ,"male")==0)
                        {
                                m["zone3"][0]++;
                        }
			else if(strcmp(c.ret_gender() ,"female")==0)
			{
				m["zone3"][1]++;
			}
			else
			{
				m["zone3"][2]++;
			}

                }
        }

        //calcultions
/*	double p1_m = 0,p1_f = 0,p1_t = 0;
	double p2_m = 0,p2_f = 0,p2_t = 0;
	double p3_m = 0,p3_f = 0,p3_t = 0;
*/
	array<int,3>p1; // [p1_m, p1_f, p1_t]
	p1.fill(0);
	array<int,3>p2;
        p2.fill(0);
	array<int,3>p3;
        p3.fill(0);
/*
	p1_m = (z1_m/double(z1_pop))*100;
	p2_m = (z2_m/double(z2_pop))*100;
	p3_m = (z3_m/double(z3_pop))*100;
	p1_f = (z1_f/double(z1_pop))*100;
	p2_f = (z2_f/double(z2_pop))*100;
	p3_f = (z3_f/double(z3_pop))*100;
	p1_t = (z1_t/double(z1_pop))*100;
	p2_t = (z2_t/double(z2_pop))*100;
	p3_t = (z3_t/double(z3_pop))*100;
*/
	for(int i = 0; i<3; i++)
	{
		p1[i] = (m["zone1"][i]/double(m["pop"][i])*100);
		p2[i] = (m["zone2"][i]/double(m["pop"][i])*100);
		p3[i] = (m["zone3"][i]/double(m["pop"][i])*100);
	}

	//  for males comparing
	if((m["zone1"][0] + m["zone2"][0] + m["zone3"][0]) == 0)
	{
		printf("None of the zones have male gender population\n");
	}
	else
	{
		if(p1[0] >= p2[0] || std::isnan(p2[0]) )
		{
			if(p1[0]>=p3[0] || std::isnan(p3[0]))
			{
				printf("The Zone With Highest percentage of males "p1[0]" %"" is Zone 1\n");
			}
			else
			{
				printf("The Zone With Highest percentage of males "p3[0]" %"" is Zone 3\n");
			}
		}
		else
		{
			if(p2[0]>=p3[0] || std::isnan(p3[0]))
			{
				printf("The Zone With Highest percentage of males  "p2[0]" %"" is Zone 2 \n");
			}
			else
			{
				printf("The Zone With Highest percentage of males "p3[0]" %"" is Zone 3\n");
			}
		}
	}
	//  comparing for females
	if((m["zone1"][1] + m["zone2"][1] + m["zone3"][1]) == 0)
	{
		printf("None of the zones have female gender population\n");
	}
	else
	{
		if(p1[1] >= p2[1] || std::isnan(p2[1]))
		{

			if(p1[1]>=p3[1] || std::isnan(p3[1]))
			{
				printf("The Zone With Highest percentage of females "p1[1]" %"" is Zone 1\n");
			}
			else
			{
				printf("The Zone With Highest percentage of females "p3[1]" %"" is Zone 3\n");
			}
		}
		else
		{
			if(p2[1]>=p3[1] || std::isnan(p3[1]))
			{
				printf("The Zone With Highest percentage of females  "p2[1]" %"" is Zone 2\n");
			}
			else
			{
				printf("The Zone With Highest percentage of females "p3[1]" %"" is Zone 3\n");
			}
		}
	}
	// comparing for transgender

	if((m["zone1"][2] + m["zone2"][2] + m["zone3"][2]) == 0)
	{
		printf("None of the zones have  transgender gender population\n");
	}
	else
	{
		if(p1[2] >= p2[2] || std::isnan(p2[2]))
		{
			if(p1[2]>=p3[2] || std::isnan(p3[2]))
			{
				printf("The Zone With Highest percentage of transgender "p1[2]" %"" is Zone 1\n");
			}
			else
			{
				printf("The Zone With Highest percentage of transgender "p3[2]" %"" is Zone 3\n");
			}
		}
		else
		{
			if(p2[2]>=p3[2] || std::isnan(p3[2]))
			{
				printf("The Zone With Highest percentage of transgender "p2[2]" %"" is Zone 2\n");
			}
			else
			{
				printf("The Zone With Highest percentage of transgender "p3[2]" %"" is Zone 3\n");
			}
		}
	}
	system("read n");
	system("clear");



}
};
