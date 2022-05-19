#include "stats.h"
#include <climits> 

void Statistics::ComputeStatistics(const std::vector<float>& v) {
    //Implement statistics here
	 int sum = 0;
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
void IAlerter::setEmailSent(bool flag)
{
     emailSent += flag;
}
void IAlerter::setLedAlert(bool flag)
{
    ledGlows += flag;
}
void StatsAlerter::checkAndAlert(std::vector<float> inputData)
    {
        for(auto data:inputData)
        {
            if(data > m_MaxThreshold)
            {
                if(!m_Alerter.empty())
                {
                    m_Alerter[0]->setEmailSent(true);
                    m_Alerter[1]->setLedAlert(true);
                }
            }
            else
            {
                if(!m_Alerter.empty())
                {
                    m_Alerter[0]->setEmailSent(false);
                    m_Alerter[1]->setLedAlert(false);
                }
            }
        }
    } 
