#ifndef BORDER_H_
#define BORDER_H_
#include <string>

class Border : public Object
{
  public:
    Border();
    virtual ~Border();
     virtual void border();
};
#endif /* BORDER_H_ */