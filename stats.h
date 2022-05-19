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
  public:
    bool emailSent;
    bool ledGlows;
    void setEmailSent(bool flag);
    void setLedAlert(bool flag);
};

class EmailAlert:public IAlerter
{
       
};

class LEDAlert:public IAlerter
{
   
};

class StatsAlerter
{
  const float m_MaxThreshold;
  std::vector<IAlerter*> m_Alerter;
public:
    StatsAlerter(const float maxThreshold,std::vector<IAlerter*> alerter):m_MaxThreshold(maxThreshold),m_Alerter(alerter)
    {
    }
    void checkAndAlert(std::vector<float> inputData);
};
