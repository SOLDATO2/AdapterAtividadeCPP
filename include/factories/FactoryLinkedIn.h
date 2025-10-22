//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_FACTORYLINKEDIN_H
#define ADAPTERATIVIDADECPP_FACTORYLINKEDIN_H

#include "iFactoryStrategy.h"
#include "../strategies/iStrategy.h"
#include "../legados/LinkedIn.h"
#include "../gerenciadores/GerenciadorLinkedIn.h"
#include "../strategies/LinkedInStrategy.h"

class FactoryLinkedIn : public iFactoryStrategy{
public:
    iStrategy* createStrategy() override{
        LinkedIn* linkedin = new LinkedIn();
        GerenciadorLinkedIn* gerenciadorLinkedIn = new GerenciadorLinkedIn(linkedin);
        return new LinkedInStrategy(gerenciadorLinkedIn);
    }
};


#endif //ADAPTERATIVIDADECPP_FACTORYLINKEDIN_H