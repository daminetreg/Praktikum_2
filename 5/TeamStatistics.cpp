#include "TeamStatistics.hpp"
#include <iostream>
#include <string>

    void TeamStatistics::teamkuerzel(std::string a) {

    }
    
    void TeamStatistics::showshortening(){

        std::cout << teamshortaning << std::endl;
    }
    
    void TeamStatistics::tordifference(){
        int ergebnis = toregeschossen - toreerhalten; 
        std::cout << teamshortaning << " " << anzahlspiele << " " << punkte << " "<< toregeschossen 
                << ":"  << toreerhalten << " " << std::showpos << ergebnis << std::noshowpos << std::endl;
    };

