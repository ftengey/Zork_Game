#ifndef TRIGGER_H_
#define TRIGGER_H_
#include <string>

using namespace std

class Trigger
{
  public:
    Trigger();
    virtual ~Trigger();
    virtual void trigger();
};
#endif /* TRIGGER_H_ */