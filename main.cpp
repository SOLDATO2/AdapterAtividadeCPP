#include <iostream>

#include "include/factories/FactoryInstagram.h"
#include "include/factories/FactoryLinkedIn.h"
#include "include/factories/FactoryTikTok.h"
#include "include/factories/FactoryTwitter.h"


int main() {

    //classes legadas
    std::cout << "Escolha uma rede:" << std::endl;
    std::cout << "1. Instagram" << std::endl;
    std::cout << "2. LinkedIn" << std::endl;
    std::cout << "3. TikTok" << std::endl;
    std::cout << "4. Twitter" << std::endl;

    int escolha;
    std::cin >> escolha;

    iStrategy *strategy = nullptr;

    switch (escolha) {
        case 1: {
            std::cout << "Instagram selecionado!" << std::endl;
            FactoryInstagram factoryInstagram;
            strategy = factoryInstagram.createStrategy();
            break;
        }
        case 2: {
            std::cout << "LinkedIn selecionado!" << std::endl;
            FactoryLinkedIn factoryLinked;
            strategy = factoryLinked.createStrategy();
            break;
        }
        case 3:{
            std::cout << "TikTok selecionado!" << std::endl;
            FactoryTikTok factoryTikTok;
            strategy = factoryTikTok.createStrategy();
            break;
        }
        case 4:{
            std::cout << "Twitter selecionado!" << std::endl;
            FactoryTwitter factoryTwitter;
            strategy = factoryTwitter.createStrategy();
            break;
        }
        default:{
            std::cout << "Opcao invalida!" << std::endl;
            break;
        }
    }

    strategy->apresentarConteudo();
    strategy->uploadConteudo();
    strategy->apresentarEstatisticas();








}
