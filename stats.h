#include <vector>

class Statistics {
public:
       static float average;
       static float min;
       static float max ;  
       static void ComputeStatistics(const std::vector<float>& v );
};


