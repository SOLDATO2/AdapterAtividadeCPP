//
// Created by squade on 10/21/25.
//

#ifndef ADAPTERATIVIDADECPP_GERENCIADORTIKTOK_H
#define ADAPTERATIVIDADECPP_GERENCIADORTIKTOK_H
#include "iGerenciadorMidiaSocial.h"
#include "../legados/TikTok.h"


class GerenciadorTikTok : iGerenciadorMidiaSocial{
private:
    TikTok *tiktok_;

public:
    explicit GerenciadorTikTok(TikTok *tiktok) : tiktok_(tiktok) {}

    void exibirConteudo() override {
        tiktok_->mostrarConteudo();
    }

    void enviarConteudo() override {
        tiktok_->publicarConteudo();
    }

    void exibirEstatisticas() override {
        tiktok_->mostrarEstatisticas();
    }
};


#endif //ADAPTERATIVIDADECPP_GERENCIADORTIKTOK_H