#include <string>

long int ft_stol(std::string s)
{
    int i = 0;
    int sign = 1;
    long int num = 0;

    if (s[i] == '-')
        sign = -1;
    else if (s[i] == '+')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + s[i] - 48;
        i++;
    }
    return (i * sign);
}