//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_FACTORYTIKTOK_H
#define ADAPTERATIVIDADECPP_FACTORYTIKTOK_H
#include "iFactoryStrategy.h"
#include "../gerenciadores/GerenciadorTikTok.h"
#include "../legados/TikTok.h"
#include "../strategies/iStrategy.h"
#include "../strategies/TikTokStrategy.h"


class FactoryTikTok : public iFactoryStrategy {
public:
    iStrategy* createStrategy() override{
        TikTok* tiktok = new TikTok();
        GerenciadorTikTok* gerenciadorTikTok = new GerenciadorTikTok(tiktok);
        return new TikTokStrategy(gerenciadorTikTok);
    }
};


#endif //ADAPTERATIVIDADECPP_FACTORYTIKTOK_H