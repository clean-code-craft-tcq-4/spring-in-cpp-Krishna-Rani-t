#include "stats.h"
#include <climits> 

int Statistics::ComputeStatistics(const std::vector<float>& v) {
	Statistics stats;
    //Implement statistics here
	  float sum = 0.0;
	  stats.min = INT_MAX;
	  stats.max = INT_MIN;
	    for (int i: v)
	    {
	        if (i < stats.min) {
	            stats.min = i;
	        }

	        if (i > stats.max) {
	            stats.max = i;
	        }
		sum = sum + i;
	    }
	     stats.average = sum/v.size();
	return 0;
}
