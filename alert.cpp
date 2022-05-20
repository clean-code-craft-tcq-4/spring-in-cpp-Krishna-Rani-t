#include "alert.h"
#include <climits> 

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
