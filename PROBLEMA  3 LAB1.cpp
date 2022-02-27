#include <iostream>
#include <stdio.h>
#include <cstring>

struct Element
{
    char cuvant[100];
    int lungime;
};

int main()
{
    Element element[100];
    char prop[256];
    scanf("%[^\n]", prop);
    printf("%s", prop);
    const char s[2] = " ";
    char* token;

    token = strtok(prop, s);
    int i = 0;
    while (token != NULL)
    {
        token = strtok(NULL, s);
        strcpy(element[i].cuvant, token);
        printf(" %s\n", element[i].cuvant);
        element[i].lungime = strlen(element[i].cuvant);
        i++;
    }
    int n = i;
    bool t = false;
    while (t == false) //sortare naiva
    {
        t = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (element[i].lungime < element[i + 1].lungime)
            {
                Element aux = element[i];
                element[i] = element[i + 1];
                element[i + 1] = element[i];
                t = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%s", element[i].cuvant);
    }
    system("pause");
    return 0;

}
