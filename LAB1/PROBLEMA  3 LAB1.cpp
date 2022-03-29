#include <iostream>
#include <stdio.h>
#include <string.h>

struct Element
{
    char cuvant[100];
    int lungime;
};
Element element[100];
char prop[256];
int main()
{
    scanf("%[^\n]", prop);
    const char s[2] = " ";
    char* token;
    token = strtok(prop, s);
    int i = 0;   
    while (token != NULL)
    {
        
        strcpy(element[i].cuvant, token);
        element[i].lungime = strlen(element[i].cuvant);
        //std::cout << element[i].cuvant;
        token = strtok(NULL, s);
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
                element[i + 1] = aux;
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
