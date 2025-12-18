#include <iostream>
#include <string>
int main()
{
    std::string s1 ;
    std::string s2 ;
    std::cin >> s1 ;
    std::cin >> s2;
    if ( s1.size() > s2.size())
    {
        for (int n = 0 ; n < s2.size(); n++){
            if ( s1[n] > s2[n]){
                std::cout << ">";
                return 0;
            }
            else if ( s2[n] > s1[n]){
                std::cout << "<";
                return 0;
            }
        }
        std::cout << ">";
        return 0;
    }
    else if ( s1.size() < s2.size())
    {
        for (int n = 0 ; n < s1.size(); n++)
        {
            if ( s1[n] > s2[n])
            {
                std::cout << ">";
                return 0;
            }
            else if ( s2[n] > s1[n])
            {
                std::cout << "<";
                return 0;
            }
        }
        std::cout << "<";
        return 0;
    }
    else if ( s1.size() == s2.size())
    {
        if ( s1 == s2 )
        {
            std::cout<< "=";
            return 0;
        }
        for ( int n = 0; n < s1.size(); n++)
        {
            if ( s1[n] > s2[n])
            {
                std::cout << ">";
                return 0;
            }
            else if ( s1[n] < s2[n])
            {
                std::cout << "<";
                return 0;
            }
        }
    }
}