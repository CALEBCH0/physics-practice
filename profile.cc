#include <iostream>
#include "profile.h"
#include "math.h"

const double Profile::GetTime() {
	double timeF;
	ProfilePoint initial;
	double gDistance = goal_.position;
	double iVelocity = initial.velocity;
	int problem;

	double time1;
	double time2;

	std::cout << "which problem? (1,2)" << std::endl;
	std::cin >> problem;

	if(problem == 2){
	timeF = 
	(
		(-1*iVelocity) + 
		sqrt(
			(iVelocity*iVelocity)+(4*0.5*kMaxAcceleration*gDistance)
				)
	)
	/kMaxAcceleration;
	}
	else if(problem == 1){
		time1 = kMaxVelocity/kMaxAcceleration;
		time2 = ((gDistance*(-2*kMaxVelocity*kMaxVelocity))/kMaxAcceleration/kMaxVelocity) + time1;
		timeF = time2 + 2 * time1;
	}
  return timeF;
}