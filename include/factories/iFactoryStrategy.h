//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_IFACTORYSTRATEGY_H
#define ADAPTERATIVIDADECPP_IFACTORYSTRATEGY_H

#include "../strategies/iStrategy.h"

class iFactoryStrategy {
public:
    virtual ~iFactoryStrategy() = default;
    virtual iStrategy* createStrategy() = 0;
};


#endif //ADAPTERATIVIDADECPP_IFACTORYSTRATEGY_H