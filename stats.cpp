#include "stats.h"
#include <climits> 
#include <numeric>

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
	     stats.average = std::accumulate(v.begin(), v.end(), 0.0) / v.size();
	return 0;
}
