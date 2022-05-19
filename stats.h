#include <vector>

class Statistics {
public:
       static float average;
       static float min;
       static float max ;  
       static void ComputeStatistics(const std::vector<float>& v );
};

class IAlerter
{
  protected:
    bool emailSent;
    bool ledGlows;
};

class EmailAlert:public IAlerter
{
};

class LEDAlert:public IAlerter
{
};

class StatsAlerter
{
  std::vector<IAlerter*> m_Alerter;
  float m_MaxThreshold;
public:
    StartAlerter(float maxThreshold,std::vector<IAlerter*> alerter):m_MaxThreshold(maxThreshold),m_Alerter(alerter)
    {
    }
    void checkAndAlert(std::vector<float> inputData)
    {
        for(auto data:inputData)
        {
            if(data > maxThreshold)
            {
                if(!m_Alerter.empty()
                {
                    m_Alerter[0]->emailSent += true;
                    m_Alerter[1]->ledGlows += true;
                }
            }
        }
    } 
};
