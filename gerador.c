#include <stdio.h>
#include <string.h>
int main(void) {
    FILE * f;
    int i = 0,n;
    char novo[20], materia[13];
    printf("Insira a materia: ");
    scanf("%[^\n]s", materia);
    printf("Insira o numero de abas: ");
    scanf("%d", &n);
    sprintf(novo, "%s.html", materia);
    f = fopen(novo, "w");
    fprintf(f,"<!DOCTYPE html>\n");
    fprintf(f,"<html lang='pt-BR'>\n");
    fprintf(f,"<head>\n");
    fprintf(f,"<meta name='viewport' content='width=device-width, initial-scale=1, user-scalable=no' charset='utf-8'>\n");
    fprintf(f,"<title>Estante Virtual - %s </title>\n", materia);
    fprintf(f,"<link rel='stylesheet' type='text/css' href='css/bootstrap.css' />\n");
    fprintf(f,"<link rel='stylesheet' type='text/css' href='css/font-awesome.css' />\n");
    fprintf(f,"<link rel='stylesheet' type='text/css' href='css/style.css' />\n");
    fprintf(f,"</head>\n");
    fprintf(f,"<body>\n");
    fprintf(f,"<div class='page-header'>\n");
    fprintf(f,"<h1>%s <small>Resumos disponiveis</small></h1>\n",materia);
    fprintf(f,"</div>\n");
    // Inicio Accordion
    fprintf(f,"<div class='panel-group' id='accordion' role='tablist' aria-multiselectable='true'>\n");
    for(i = 0; i < n; i++){
    fprintf(f,"<div class='panel panel-default'>\n");
    fprintf(f,"<div class='panel-heading' role='tab' id='heading%d'>\n",i);
    fprintf(f,"<h4 class='panel-title'>\n");
    fprintf(f,"<a role='button' data-toggle='collapse' data-parent='#accordion' href='#collapse%d' aria-expanded='true' aria-controls='collapse%d'>\n",i,i);
    }
    //Fim Accordion
    fprintf(f,"</body>\n");
    fclose(f);
    return 0;
}
