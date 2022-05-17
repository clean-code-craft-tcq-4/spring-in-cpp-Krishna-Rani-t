#include "stats.h"
#include <climits> 

void Statistics::ComputeStatistics(const std::vector<float>& v) {
    //Implement statistics here
	average = accumulate( v.begin(), v.end(), 0.0/ v.size());
	 int min = INT_MAX, max = INT_MIN;
	    for (int i: v)
	    {
	        if (i < min) {
	            min = i;
	        }

	        if (i > max) {
	            max = i;
	        }
	    }

