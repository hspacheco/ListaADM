/*QUESTAO 1*/
int main(){
    int i;
    int* p;

    p = malloc (10 * sizeof (int));

    for(i=0;i<10;i++){
        p[i] = i+1;
    }

    for(i=0;i<10;i++){
        printf("%d\n", p[i]);
    }


}

/*FIM*/

/*QUESTAO 2*/
int main(){
    char** matriz;
    int n=5,i; /*n sendo a quantidade de nomes*/

    matriz = malloc(n * sizeof(char *));

    for(i=0;i<n;i++){
        matriz[i] = malloc(20*sizeof(char)); /*NOMES DE ATE 20 CARACT.*/
        gets(matriz[i]);
    }

    for(i=0;i<n;i++){
        printf("NOME %i , %s\n", i, matriz[i]);
    }


}

/*FIM*/

/*QUESTAO 3*/
int main(){
    int n,i;
    int* p;

    scanf("%d", &n);

    p = malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d", &p[i]);
    }

    for(i=0;i<n;i++){
        printf("%d\n", p[i]);
    }


/*FIM*/

/*QUESTAO 4*/
int main(){
    int linha,coluna,i,j,k;
    int** matriz;

    linha=4;
    coluna=4;

    /*ALOCAÇÃO DAS LINHAS E COLUNAS*/
    matriz = malloc(linha * sizeof(int *));

    for(i=0;i<coluna;i++){
        matriz[i] = malloc(coluna * sizeof(int *));
    }

    /*INSERIR NA MATRIZ*/
    for(j=0;j<linha;j++){
        for(k=0;k<coluna;k++){
            matriz[j][k] = j;
        }
    }

    /*EXIBIR NA TELA */
    for(j=0;j<linha;j++){
        printf("\n");
        for(k=0;k<coluna;k++){
            printf("%d ", matriz[j][k]) ;
        }
    }

}

/*FIM*/

/*QUESTAO 5*/
int main(){
    int* p;
    int i,n=10;

    p = malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d", &p[i]);
        if(p[i] == 0)
            break;
           if(i == n-1) /*CHEGOU NO ULTIMO E NAO ENCONTROU 0 AINDA, REALLOC PARA n+10*/
               n = n + 10;
               p = realloc (p, n * sizeof(int));
    }

    for(i=0;i<n;i++){
        printf("%d ", p[i]);
        if (p[i] == 0) break;
    }



}

/*FIM*/
