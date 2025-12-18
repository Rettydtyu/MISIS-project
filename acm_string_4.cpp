#include <iostream>
#include <string>
int main()
{
    std::string s1 ;
    std::string temp;
    std::cin >> s1;
    for ( int i = 0; i <= (s1.size() - 1);)
    {
        int temp1 = 0;
        while ( isdigit(s1[i]))
        {
            temp1 = temp1*10 + (s1[i] - '0');
            i++;
        }
        for ( int j = 0; j < temp1; j++)
        {
            temp.push_back(s1[i]);
        }
        i++;
    }
    std::cout << temp;
    return 0;
}