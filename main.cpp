#include <iostream>

static void ASCIIART() noexcept
{
    std::cout << R"(
         _                                                       
        | |__   __ _ _ __ __ _ ___  ___  ___  __   ___ __  _ __  
        | '_ \ / _` | '__/ _` / __|/ _ \/ __| \ \ / / '_ \| '_ \ 
        | | | | (_| | | | (_| \__ \  __/ (__   \ V /| |_) | | | |
        |_| |_|\__,_|_|  \__,_|___/\___|\___|   \_/ | .__/|_| |_|
                                                    |_|          
    )" << '\n';
}

int main() noexcept
{
    constexpr auto Vpn_Name = "HarasecVPN";
    constexpr auto Header = "Multi-hop VPN hosted by my own ISP.\n"
                            "You will appear in multiple locations.\n"
                            "Each app you use will be assigned a different IP.\n"
                            "No data will be stored for more than 120 seconds.\n"
                            "Traffic routed like Tor with enhanced encryption.\n"
                            "Totally free version available.\n"
                            "Yearly subscription version includes an additional email feature.\n"
                            "I have plans to release the first version of HarasecVPN on August 21st 2025.\n";

    ASCIIART();
    std::cout << Vpn_Name << '\n';
    std::cout << Header;

    return 0;
}
