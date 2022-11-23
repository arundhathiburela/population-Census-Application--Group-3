#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"header.h"

void age_report_print(double below_18,double bet_18_40,double more_40)
{
        printf("\nPercentage of Population whose age is below 18  : ",below_18*100," %\n");
        printf("\nPercentage of Population whose age inbetween 18 to 40  : ",bet_18_40*100," %\n");
        printf("\nPercentage of Population whose age is more than 40  : ",more_40*100," %\n");
}

void gender_report_print(double male, double female, double transgender)
{
        printf("\nPercentage of male population   : ",male*100," %\n");
        printf("\nPercentage of female population  : ",female*100," %\n");
        printf("\nPercentage of transgender population : ",transgender*100," \n%");
}
void Age_Group_Report()
{
        printf("\nI am in Age Group Report\n");
        int arr[3];
        int arr[3]={z1}; // [ z1_18, z1_18_40, z1_40]
        int arr[3]=z2;
        array<int,3>z3;
        pop_z.fill(0);
        z1.fill(0);
        z2.fill(0);
        z3.fill(0);
        array<int,3>total;// [total_18,total_18_40,total_40]
        int total_pop = 0;
/*
        int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
        int z1_18=0, z1_18_40 = 0, z1_40 = 0;
        int z2_18=0, z2_18_40= 0, z2_40= 0;
        int z3_18=0, z3_18_40=0, z3_40=0;
        int total_18,total_18_40,total_40;
*/
        for(Citizen c : li)
        {
                if(strcmp(c.ret_zone_id(),"ZID100") == 0)
                {
                        pop_z[0]++;
                        if(atoi(c.ret_age()) < 18)
                        {
                                z1[0]++;
                        }
                        else if( atoi(c.ret_age()) >= 18 && atoi(c.ret_age()) <=40)
                        {
                                z1[1]++;
                        }
                        else
                        {
                                z1[2]++;
                        }
                }
                else if(strcmp(c.ret_zone_id(),"ZID200")==0)
                  {
                          pop_z[1]++;
                          if(atoi(c.ret_age()) < 18)
                         {
                                 z2[0]++;
                          }
                          else if( atoi(c.ret_age()) >= 18 && atoi(c.ret_age()) <=40)
                          {
                                  z2[1]++;
                          }
                          else
                          {
                                  z2[2]++;
                          }
                  }
                else
                  {
                         pop_z[2]++;
                          if(atoi(c.ret_age()) < 18)
                          {
                                  z3[0]++;
                          }
                          else if(atoi(c.ret_age()) >= 18 && atoi(c.ret_age()) <=40)
                          {
                                  z3[1]++;
                          }
                          else
                          {
                                  z3[2]++;
                          }
                  }
        }

        //calcultions

        for(int i = 0; i<3; i++)
        {
                total_pop += pop_z[i];
                total[i] = z1[i] + z2[i] + z3[i];
        }
        // total[ m, f, t]
        system("clear")
        printf("\n*****************  Age Group Report  *****************\n");
        printf("\n--------------  Zone 1 ----------------\n");
        if(pop_z[0] == 0)
        {
                age_report_print(0,0,0);
        }
        else
        {
                age_report_print((z1[0]/double(pop_z[0])) , (z1[1]/double(pop_z[0])), (z1[2]/double(pop_z[0])) );
        }

        printf("\n--------------  Zone 2 ----------------\n");

        if(pop_z[1] == 0)
        {
                age_report_print(0,0,0);
        }
        else
        {
                age_report_print((z2[0]/double(pop_z[1])) , (z2[1]/double(pop_z[1])), (z2[2]/double(pop_z[1])) );
        }


        printf("\n--------------  Zone 3 ----------------\n");

        if(pop_z[2] == 0)
        {
                age_report_print(0,0,0);
        }
        else
        {
                age_report_print((z3[0]/double(pop_z[2])) , (z3[1]/double(pop_z[2])), (z3[2]/double(pop_z[2])) );
        }


        printf("\n--------------  Country Dynaland Age Group Report  ----------------\n");

        if(total_pop == 0)
        {
                age_report_print(0,0,0);
        }
        else
        {
                age_report_print((total[0]/double(total_pop)) , (total[1]/double(total_pop)), (total[2]/double(total_pop)) );
        }


        printf("\n**********************************************************************\n");
        system("read n");
        system("clear");
}
void Gender_report()
{
        printf("\n I am in Gender Report\n");

        /*
        int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
        int z1_m = 0, z1_f = 0,z1_t = 0;
        int z2_m = 0, z2_f = 0 , z2_t = 0;
        int z3_m = 0,z3_f = 0 , z3_t = 0;
        int total_m,total_f,total_t;
        */
         array<int,3>pop_z;// [ pop_z1, pop_z2, pop_z3 ]
          array<int,3>z1; // [ z1_m, z1_f, z1_t]
          array<int,3>z2;
          array<int,3>z3;
          pop_z.fill(0);
          z1.fill(0);
          z2.fill(0);
          z3.fill(0);
          array<int,3>total;// [total_m,total_f,total_t]
          int total_pop = 0;

        for(Citizen c ; li)
        {
                if(strcmp(c.ret_zone_id(),"ZID100") == 0)
                {
                        pop_z[0]++;
                        if(strcmp(c.ret_gender(),"male") == 0 )
                        {
                                z1[0]++;
                        }
                        else if(strcmp(c.ret_gender(),"female") == 0)
                        {
                                z1[1]++;
                        }
                        else
                        {
                                z1[2]++;
                        }
                }
                else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++;
                        if(strcmp(c.ret_gender(),"male") == 0 )
                        {
                                z2[0]++;
                        }
                        else if(strcmp(c.ret_gender(),"female") == 0)
                        {
                                z2[1]++;
                        }
                        else
                        {
                                z2[2]++;
                        }
                }
                else
                {
                        pop_z[2]++;
                        if(strcmp(c.ret_gender(),"male") == 0)
                        {
                                z3[0]++;
                        }
                        else if(strcmp(c.ret_gender(),"female") == 0)
                        {
                                z3[1]++;
                        }
                        else
                        {
                                z3[2]++;
                        }
                }
        }

        //calculations

        for(int i = 0; i<3; i++)
         {
                 total_pop += pop_z[i];
                 total[i] = z1[i] + z2[i] + z3[i];
         }

        system("clear");
printf("\n*****************  Gender Wise  Report  *****************\n");
        printf("\n--------------  Zone 1 ----------------\n");

        if(pop_z[0] == 0)
        {
                gender_report_print(0,0,0);
        }
        else
        {
                gender_report_print((z1[0]/double(pop_z[0])) , (z1[1]/double(pop_z[0])), (z1[2]/double(pop_z[0])) );
        }


        printf("\n--------------  Zone 2 ----------------\n");

        if(pop_z[1] == 0)
        {
                gender_report_print(0,0,0);
        }
        else
        {
                gender_report_print((z2[0]/double(pop_z[1])) , (z2[1]/double(pop_z[1])), (z2[2]/double(pop_z[1])) );
        }


        printf("\n--------------  Zone 3 ----------------\n");

        if(pop_z[2] == 0)
        {
                gender_report_print(0,0,0);
        }
        else
        {
                gender_report_print((z3[0]/double(pop_z[2])) , (z3[1]/double(pop_z[2])), (z3[2]/double(pop_z[2]));

        }


        printf("\n--------------  Country Dynaland Gender Wise Report  ---------------\n");

        if(total_pop == 0)
        {
                gender_report_print(0,0,0);
        }
        else
        {
                gender_report_print((total[0]/double(total_pop)) , (total[1]/double(total_pop)), (total[2]/double(total_pop)) );
        }


        printf("\n**********************************************************************\n");
        system("read n");
        system("clear");

}
void BPL_zone_wise_report()
{

printf("\n I am in BPL Zone Wise Report\n");
/*
        int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
        int z1_bpl = 0;
        int z2_bpl = 0;
        int z3_bpl = 0;
        int total_bpl;
*/
        array<int,3>pop_z; //[pop_z1, pop_z2, pop_z3]
        pop_z.fill(0);
        array<int,3>z_bpl; //[z1_bpl, z2_bpl, z3_bpl]
        z_bpl.fill(0);
        int total_bpl=0,total_pop=0;
        for(Citizen c : li)
        {
                printf("\n c.annual_income\n");
                if(strcmp(c.ret_zone_id(),"ZID100") == 0)
                {
                        pop_z[0]++;
                        if(stod(c.ret_annual_income()) <100000 )
                        {
                                z_bpl[0]++;
                        }
                }
                else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++;
                        if(stod(c.ret_annual_income()) < 100000 )
                        {
                                z_bpl[1]++;
                        }
                }
                else
                {
                        pop_z[2]++;
                        if(stod(c.ret_annual_income()) < 100000 )
                        {
                                z_bpl[2]++;
                        }
                }
        }

        //calculations
        for(int i = 0; i<3; i++)
        {
                total_pop += pop_z[i];
                total_bpl += z_bpl[i];
        }

        system("clear");
        printf("\n*****************  Below Poverty line Zone Wise  Report  *****************\n");

        printf("\n--------------  Zone 1 ----------------\n");
        if(pop_z[0] == 0)
        {
        printf("\nPercentage of below poverty line population   : 0 %\n");
        }
        else
        {
        printf("\nPercentage of below poverty line population   : ",(z_bpl[0]/double(pop_z[0]))*100<<" %\n");
        }

        printf("\n--------------  Zone 2 ----------------\n");
        if(pop_z[1] == 0)
        {
        printf("\n Percentage of below poverty line population   : 0 %\n");
        }
        else
        {
        printf("\n Percentage of below poverty line population   : ",(z_bpl[1]/double(pop_z[1]))*100<<" % \n");
        }

        printf("\n --------------  Zone 3 ----------------\n");
        if(pop_z[2] == 0)
        {
        printf("\n Percentage of below poverty line population   : 0 %\n");
        }
        else
        {
        printf("\n Percentage of below poverty line population   : ",(z_bpl[2]/double(pop_z[2]))*100<<" %\n");
        }

        printf("\n --------------  Country Dynaland Below Poverty Line(BPL)  Report  ----------------\n");
        if(total_pop == 0)
        {
        printf("\nPercentage of BPL population across country  : 0 %\n");
        }
        else
        {
        printf("\nPercentage of BPL population across country  : ",(total_bpl/double(total_pop))*100<<" %\n");
        }

        printf("\n**********************************************************************\n");
        system("read n");
        system("clear");

}


void Farming_Population_Report()
{

        printf("\nI am in Farming Population Report\n");
/*
        int pop_z1=0, pop_z2=0, pop_z3 = 0, total_pop;
        int z1_farmer = 0;
        int z2_farmer = 0;
        int z3_farmer = 0;
        int total_farmer;
        */
        array<int,3>pop_z; //[pop_z1, pop_z2, pop_z3]
        pop_z.fill(0);
        array<int,3>z_farmer; //[z1_farmer, z2_farmer, z3_farmer]
        z_farmer.fill(0);
        int total_farmer = 0,total_pop=0;

        for(Citizen c : li)
        {
                if(strcmp(c.ret_zone_id(),"ZID100") == 0)
                {
                        pop_z[0]++;
                        if(strcmp(c.ret_occupation() ,"farmer") == 0)
                        {
                                z_farmer[0]++;
                        }
                }
                else if(strcmp(c.ret_zone_id(),"ZID200") == 0)
                {
                        pop_z[1]++;
                        if(strcmp(c.ret_occupation(),"farmer") == 0)
                        {
                                z_farmer[1]++;
                        }
                }
                else
                {
                        pop_z[2]++;
                        if(strcmp(c.ret_occupation(),"farmer") == 0)
                        {
                                z_farmer[2]++;
                        }
                }
        }

        //calculations
        for(int i = 0; i<3; i++)
         {
        //       cout<<pop_z[i]<<"   "<<z_farmer[i]<<endl;
                 total_pop += pop_z[i];
                 total_farmer += z_farmer[i];
         }
//      cout<<total_pop<<"   "<<total_farmer<<endl;


        system("clear");
        printf("\n*****************  Farming Population  Report  *****************\n");
        print("\n--------------  Zone 1 ----------------\n");
        if(pop_z[0] == 0)
        {
        printf("\nPercentage of Farming population   : 0 %\n");
        }
        else
        {
        printf("\nPercentage of Farming population   : ",(z_farmer[0]/double(pop_z[0]))*100<<" %\n");
        }

        printf("\n--------------  Zone 2 ----------------\n");
        if(pop_z[1] == 0)
        {
        printf("\nPercentage of Farming population   : 0 %\n");
        }
        else
        {
        printf("\nPercentage of Farming population   : ",(z_farmer[1]/double(pop_z[1]))*100<<" %\n");
        }
        printf("\n--------------  Zone 3 ----------------\n");
        if(pop_z[2] == 0)
        {
        printf("\nPercentage of Farming population   : 0 %\n");
        }
        else
        {
        printf("\nPercentage of Farming population   : ",(z_farmer[2]/double(pop_z[2]))*100<<" %\n");
        }
        printf("\n--------------  Country Dynaland Farming Population  Report  ---------------\n");
        if(total_pop == 0)
        {
        printf("\nPercentage of Farming population across country  : 0 %\n")
        }
        else
        {
        printf("\nPercentage of Farming population across country  : ",(total_farmer/double(total_pop))*100<<" %\n");
        }
        printf("\n**********************************************************************\n");
        system("read n");
        system("clear");


}

}

