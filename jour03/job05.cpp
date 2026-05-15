#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    if (strlen(argv[1]) != 5)
        return 1;

    if (!(isdigit(argv[1][0]) && isdigit(argv[1][1])))
        return 1;

    if (!(argv[1][2] == 'h'))
        return 1;

    if (!(isdigit(argv[1][3]) && isdigit(argv[1][4])))
        return 1;

    return 0;
}
