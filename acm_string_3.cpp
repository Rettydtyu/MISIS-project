#include <iostream>
#include <string>
int main()
{
    std::string s1 ;
    std::string s2 ;
    std::string temp;
    int score = 0;
    std::cin >> s1 >> s2;
    for ( int i = 0; i <= (s2.size() - 1); i++ )
    {
        if ( s1[0] == s2[i])
        {
            for ( int j = i; j <= (s1.size() - 1 + i); j++)
            {
                if ( j > (s2.size() - 1))
                {
                    std::cout << score;
                    return 0;
                }
                else temp.push_back(s2[j]);
            }
            if ( s1 == temp )
            {
                score++;
                temp = "";
            }
            else temp = "";
        }
    }

    std::cout << score;
}