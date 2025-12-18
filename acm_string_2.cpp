#include <iostream>
#include <string>
int main()
{
    std::string s1;
    int temp = 0;
    std::cin >> s1;
    if (s1[0] == ')')
    {
        std::cout<< "NO";
        return 0;
    }
    else
    {
        for( int i = 0; i <= (s1.size() - 1); i++)
        {
            if (s1[i] == '(')
            {
                temp += 1;
            }
            else if ( s1[i] == ')')
            {
                temp -= 1;
                if ( temp < 0)
                {
                    std::cout << "NO";
                    return 0;
                }
            }
        }
        if ( temp == 0)
        {
            std::cout<< "YES";
            return 0;
        }
        else std::cout << "NO";
        return 0;
    }
}   