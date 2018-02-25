#include "ROADS.h"
#include<string>
#include<iostream>

using namespace std;

void ROAD::setno_of_lanes(int x){			// Setter methods
	no_of_lanes = x;
}		
void ROAD::setlane_width(float x){
	lane_width = x;
}
void ROAD::setspeed_limit(float x){
	speed_limit = x;
}

int ROAD::getno_of_lanes(){					// Setter methods
	return no_of_lanes;
}		
float ROAD::getlane_width(){
	return lane_width;
}
float ROAD::getspeed_limit(){
	return speed_limit;
}

bool ROAD::istraffic_lights(string s){		// Boolean methods
	if (s == "yes" || s == "y")
	{
		traffic_lights = true;
	}

	else if (s == "no" || s == "n")
	{
		traffic_lights = false;
	}
}	
bool ROAD::isbi_directional(string s){
	if (s == "yes" || s == "y")
	{
		bi_directional= true;
	}

	else if (s == "no" || s == "n")
	{
		bi_directional = false;
	}

}
bool ROAD::ispedestrian_crossing(string s){
	if (s == "yes" || s == "y")
	{
	pedestrian_crossing = true;
	}

	else if (s == "no" || s == "n")
	{
		pedestrian_crossing = false;
	}
}

