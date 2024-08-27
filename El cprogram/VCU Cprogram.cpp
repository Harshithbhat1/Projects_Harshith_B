#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float batt_capacity=100;
float max_time=15;
float rateofcharging=11.654;
float radius=0.25;
int charging(float charge,float speed)
{
	char x;
	longh:
		{
			printf("             CHARGING AND DISCHARGING ANALYSIS\n");
			printf("________________________________________________\n");
	printf("Enter c whether your car battery is charging(The car is stationery)\nEnter d whether your car battery is discharging(the car is moving)\n");
	scanf("%s",&x);
	switch(x)
	{
		case 'c':
			checkagain:
				{
				
			printf("Enter the current charge in the battery in kWhr\n");
			scanf("%f",&charge);
			if(charge==0)
			{
				printf("The battery is dead\nCharge now\n");
			}
			else if(charge==100)
			{
				printf("The battery is FULL\nYou can remove the Charger\n");
			}
			else if(charge>0&&charge<100)
			{
			printf("The rate of charging is constant and is equal to %.2f kW/hr\n",rateofcharging);
			float diff=batt_capacity-charge;
			float time=diff/rateofcharging;
			printf("You need to keep for %.2f hours to full charge your battery\n",time);	
			}
			else
			{
				printf("Enter the correct charge between 0 and 100\n");
				goto checkagain;
			}
			char a;
			printf("Do you want to check again (y ar n)\n");
			scanf("%s",&a);
			if(a=='y')
			{
				goto checkagain;
			}
		}
		break;
		case 'd':
			check:
				{
			char b;
			printf("Enter the speed of the car in km/hr\n");
			scanf("%f",&speed);
			printf("Enter the charge remaining in kWhr\n");
			scanf("%f",&charge);
				if(charge==0)
			{
				printf("The battery is dead\nCharge now\n");
			}
			else
			{	
		float time=15-(0.1*speed);
		float totaltime=(charge/batt_capacity)*time;
		float distance=totaltime*speed;
		char b;
		printf("You can drive your car for %.2f hours(MAXIMUM value) with the speed of %.2f\n",totaltime,speed);
		printf("The max distance you can take the car with the speed of %.2f is %.2f km`s\n",speed,distance);
		printf("Do you want to check again?(y or n)\n");
		scanf("%s",&b);
		if(b=='y'||b=='Y')
		{
			goto check;
			}	
		}
		break;
	}
}
	char c;
	printf("Do you want to analyse the charging parameters again?(y or n)\n");
	scanf("%s",&c);
	if(c=='y')
	{
		goto longh;
	}
}
}
int motor(float rpm,float speed)
{
	label:
		{
			printf("           MOTOR RPM ANALYSIS\n");
			printf("______________________________\n");
	printf("Enter the Speed of car in km/hr\n");
	scanf("%f",&speed);
	printf("The radius of motor coil is %.2f meter\n",radius);
	rpm=(speed/radius)*(600/36);
	printf("The motor will exhibit %.1f rpm\n",rpm);
	char d;
	printf("Do you want to check the rpm again?(y or n)\n");
	scanf("%s",&d);
	if(d=='y')
	{
		goto label;
	}
}
}
int instant_working(float charge,float speed,float rpm)
{
	float dist=0;
	printf("             INSTANT WORKING ANALYSIS\n");
	printf("_______________________________________\n");
	printf("Enter the initial charge in battery in kWhr\n");
	scanf("%f",&charge);
	float rod=0.000277*charge;
	printf("The initial charge in kW is %.6fkW\n",rod);
	printf("//To exit enter speed as -1//\n");
	int i=0;
		while(i>=0)
		{
printf("Loop-%d//Enter the Speed of car in km/hr//\n",i+1);
	scanf("%f",&speed);
	if(speed==-1)
	{
		printf("THE SPEED LOOP IS ENDED\n");
		break;
	}
	else if(speed==0)
	{
		printf("\nTHE CAR IS AT REST\n");
		
	}
	else if(speed>=149)
	{
		printf("You have exceeded the max speed limit.The battery will burn off\n");
		break;
	}
else
{
	printf("The speed in m/s is %.2f\n",0.277*speed);
rpm=(speed/radius)*16.666;
printf("The motor will exhibit %.4f rpm at this instant\n",rpm);
	float rcc=(batt_capacity)/(3600*3600*(15-(0.0277*speed)));
	charge=charge-(rcc*3600);
	
	printf("The rate of discharging at this instant is %.6f\n ",rcc);
	printf("The remaining charge of the battery at this instant in kW is %.4f kW\n",charge);
}
	i=i+1;

dist=dist+(0.277*speed);
printf("The total distance travelled is %.2f\n",dist);
}
	printf("The Final Total Distance travelled is %.2f\n",dist);
}
int main()
{
	int z;
	float rpm,charge,speed;
	printf("                                        EV VEHICLE CONTROL UNIT\n");
	printf("________________________________________________________________________________________________________________________\n");
	printf("\nFor charging and discharging analysis,press 1\nFor For motor control and analysis,press 2\nFor both,press 3\nFor instant charging ,discharging rate and rpm analysis, press any number\n ");
	scanf("%d",&z);
	if(z==1)
	{
		charging(charge,speed);
	}
	else if(z==2)
	{
		motor(rpm,speed);
	}
	else if(z==3)
	{
		charging(charge,speed);
		motor(rpm,speed);
	}
	else
	{
		instant_working(charge,speed,rpm);
	}
	return 0;
}
