//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_GERENCIADORTWITTER_H
#define ADAPTERATIVIDADECPP_GERENCIADORTWITTER_H
#include "iGerenciadorMidiaSocial.h"
#include "../legados/Twitter.h"


class GerenciadorTwitter : public iGerenciadorMidiaSocial {
private:
    Twitter *twitter_;

public:
    explicit GerenciadorTwitter(Twitter *tiktok) : twitter_(tiktok) {}

    void exibirConteudo() override {
        twitter_->mostrarConteudo();
    }

    void enviarConteudo() override {
        twitter_->publicarConteudo();
    }

    void exibirEstatisticas() override {
        twitter_->mostrarEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_GERENCIADORTWITTER_H