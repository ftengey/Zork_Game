#ifndef ROOM_H_
#define ROOM_H_
#include <string>
#include <stdio.h>
#include "object.h"
#include "Status.h"
#include "Type.h"
#include "Description.h"
#include "Border.h"
#include "Container.h"
#include "Item.h"
#include "Creature.h"
#include "Trigger.h"
using namespace std; 

class room {
public:
    room(string);
    room();
    virtual ~room( );


private:
    string name;
    Status* status;
    Type* type;
    Description* deescription;
    Border* border;
    Container* container;
    Item* item;
    Creature* creature;
    Trigger* trigger;
};
#endif /* ROOM_H_ */