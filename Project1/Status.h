#ifndef STATUS_H_
#define STATUS_H_
#include <string>

class Status : public Object
{
  public:
    Status();
    virtual ~Status();
    virtual void status();
};
#endif /* STATUS_H_ */