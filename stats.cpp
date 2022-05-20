#include "stats.h"
#include <climits> 

void Statistics::ComputeStatistics(const std::vector<float>& v) {
    //Implement statistics here
	 int sum = 0;
	int average = 0;
	 int min = INT_MAX, max = INT_MIN;
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
}
