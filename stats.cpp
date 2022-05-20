#include "stats.h"
#include <climits> 

int Statistics::ComputeStatistics(const std::vector<float>& v) {
    //Implement statistics here
	  float sum = 0.0;
	  min = INT_MAX, max = INT_MIN;
	    for (int i: v)
	    {
	        if (i < min) {
	            min = i;
	        }

	        if (i > max) {
	            max = i;
	        }
		sum = sum + i;
	    }
	     average = sum/v.size();
	return min, max, average;
}
