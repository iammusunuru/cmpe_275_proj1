#include <iostream>
int calcSpeedBin(float);
int calcDirectionBin(float,int);
int numSector=16;
int NumSpeedBin = 5;

int main()
{

	std::cout<<calcSpeedBin(30.34);
	std::cout<<calcDirectionBin(130.34,numSector);

	//read from file and find aggregation matrix



}

//here we have 5 bins from 0-5 for 0,5-15,15-25,>25
int calcSpeedBin(float windspeed)
{
	if(windspeed == 0)
	{
		return 0;
	}
	else if((windspeed>0) && (windspeed<=5))
	{
		return 1;
	}
	else if((windspeed>5) && (windspeed<=15))
	{
		return 2;
	}
	else if((windspeed>15) && (windspeed<=25))
	{
		return 3;
	}
	else
	{
		return 4;
	}	
}

int calcDirectionBin(float WindDir)
{
	//makes bin depending on number of sectors
	return WindDir%numSector;
}

void agg_data()
{
long *data_matrix = (int *)malloc(numSector*NumSpeedBin*sizeof(long));

}
