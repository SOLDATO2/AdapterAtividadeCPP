//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_TIKTOKSTRATEGY_H
#define ADAPTERATIVIDADECPP_TIKTOKSTRATEGY_H
#include "../gerenciadores/GerenciadorTikTok.h"
#include "iStrategy.h"


class TikTokStrategy : public iStrategy{
    GerenciadorTikTok* gerenciadorTikTok_;

public:
    explicit TikTokStrategy(GerenciadorTikTok* gerenciadorTwitter)
        : gerenciadorTikTok_(gerenciadorTwitter) {}

    void apresentarConteudo() override {
        gerenciadorTikTok_->exibirConteudo();
    }
    void uploadConteudo() override {
        gerenciadorTikTok_->enviarConteudo();
    }
    void apresentarEstatisticas() override {
        gerenciadorTikTok_->exibirEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_TIKTOKSTRATEGY_H