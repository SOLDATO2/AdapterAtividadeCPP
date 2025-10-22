cmake_minimum_required(VERSION 4.0)
project(AdapterAtividadeCPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(AdapterAtividadeCPP main.cpp
        include/gerenciadores/iGerenciadorMidiaSocial.h
        include/legados/Twitter.h
        include/legados/Instagram.h
        include/legados/TikTok.h
        include/legados/LinkedIn.h
        include/gerenciadores/GerenciadorInstagram.h
        include/gerenciadores/GerenciadorLinkedIn.h
        include/gerenciadores/GerenciadorTikTok.h
        include/gerenciadores/GerenciadorTwitter.h
        include/strategies/iStrategy.h
        include/strategies/InstagramStrategy.h
        include/strategies/TwitterStrategy.h
        include/strategies/LinkedInStrategy.h
        include/strategies/TikTokStrategy.h
        include/factories/FactoryInstagram.h
        include/factories/iFactoryStrategy.h
        include/factories/FactoryLinkedIn.h
        include/factories/FactoryTikTok.h
        include/factories/FactoryTwitter.h
)
