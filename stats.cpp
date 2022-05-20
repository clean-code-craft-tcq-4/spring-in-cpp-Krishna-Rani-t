#include "stats.h"
#include <climits> 

void Statistics::ComputeStatistics(const std::vector<float>& v) {
    //Implement statistics here
	  float sum = 0.0;
	float num = 0;
	  min = 10000.0;
	max = 0.0;
	    for (float i: v)
	    {
	        if (i < min) {
	            min = i;
	        }

	        if (i > max) {
	            max = i;
	        }
	    }
	    for (float j: v)
	    {
		    sum = sum + j ;
		    num = num + 1;
	    }
	     average = sum / num;
	
}
