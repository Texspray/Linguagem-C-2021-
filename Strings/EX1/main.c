#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *SelecionaVogais(char *s)
{
    int i, qtdVogais=0, tamanhoString, j=0;
    char *vogais;
    tamanhoString = strlen(s);
    for(i=0; i<tamanhoString; i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='o'  || s[i]=='i'  || s[i]=='u')
            qtdVogais++;



    vogais = (char*)malloc((qtdVogais+1)*sizeof(char));
    for(i=0; i<tamanhoString; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='o'  || s[i]=='i'  || s[i]=='u'  ){
            vogais[j]=s[i];
            j++;

        }
        vogais[qtdVogais]='\0';


    }
    return vogais;
}

int main(){

    char str[10]="Carvalho", *vogais;
    vogais = SelecionaVogais(str);
    printf("As vogais da string são %s\n", vogais);
    return 0;
}
