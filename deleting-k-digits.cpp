#include <iostream>

void removeLeastK(char* s, unsigned k)
{
    if (!s) return;
    unsigned j = 1;

    for(int i = 0, deleted = 0; s[j] != '\0'; j++)
    {
        for(; deleted < k && i >= 0 && s[i] > s[j]; deleted++, i--);
        s[++i] = s[j];
    }

    if (k > j) k = j;
    s[j - k] = '\0';

    std::cout << s << std::endl;
}

int main(void)
{
    char s1[] = "24635";
    removeLeastK(s1, 3);

    removeLeastK(s1, 6);
}
