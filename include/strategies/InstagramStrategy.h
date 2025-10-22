//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_INSTAGRAMSRATEGY_H
#define ADAPTERATIVIDADECPP_INSTAGRAMSRATEGY_H
#include "../gerenciadores/GerenciadorInstagram.h"
#include "iStrategy.h"


class InstagramStrategy : public iStrategy {
    GerenciadorInstagram* gerenciadorInstagram_;

public:
    explicit InstagramStrategy(GerenciadorInstagram* gerenciadorInstagram)
        : gerenciadorInstagram_(gerenciadorInstagram) {}

    void apresentarConteudo() override {
        gerenciadorInstagram_->exibirConteudo();
    }
    void uploadConteudo() override {
        gerenciadorInstagram_->enviarConteudo();
    }
    void apresentarEstatisticas() override {
        gerenciadorInstagram_->exibirEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_INSTAGRAMSRATEGY_H