#include "stats.h"
#include <climits> 

float Statistics::ComputeStatistics(const std::vector<float>& v) {
	Statistics stats;
    //Implement statistics here
	  float sum = 0.0;
	float num = 0;
	  stats.min = 10000.0;
	  stats.max = 0.0;
	    for (float i: v)
	    {
	        if (i < stats.min) {
	            stats.min = i;
	        }

	        if (i > stats.max) {
	            stats.max = i;
	        }
	    }
	    for (float j: v)
	    {
		    sum = sum + j ;
		    num = num + 1;
	    }
	     stats.average = sum / num;
	return 0;
}
