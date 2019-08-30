#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void limpa_tela(){
    system("clear");
}

void posicionar_navios(char tabuleiro[10][10]){
    
    int linha_pos=0, coluna_pos=0;
    int i_cont=0, j_cont=0, k_cont=0, l_cont=0, m_cont=0;
    int linha=0, coluna=0;
    
    printf("Posicione seus navios Jogador 1\n");
    
    while(i_cont<4){
        printf("Informe a linha para posicionar seu navio[4]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[4]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro[linha_pos-1][coluna_pos-1] = 'N';
            i_cont++;
        }
        
    }    
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    
    
    while(k_cont<3){
        printf("Informe a linha para posicionar seu navio[3]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[3]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro[linha_pos-1][coluna_pos-1] = 'N';
            k_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
               
    while(l_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro[linha_pos-1][coluna_pos-1] = 'N';
            l_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    
   
    while(m_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro[linha_pos-1][coluna_pos-1] = 'N';
            m_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    
   
    while(j_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro[linha_pos-1][coluna_pos-1] = 'N';
            j_cont++;
        }
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    limpa_tela();
    
    
       
}

void posicionar_navios2(char tabuleiro2[10][10]){

    int linha_pos=0, coluna_pos=0;
    int i_cont=0, j_cont=0, k_cont=0, l_cont=0, m_cont=0;
    int linha=0, coluna=0;
    
    printf("Posicione seus navios Jogador 2\n");
    
    while(i_cont<4){
        printf("Informe a linha para posicionar seu navio[4]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[4]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro2[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro2[linha_pos-1][coluna_pos-1] = 'N';
            i_cont++;
        }
        
    }    
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    
    
    
    while(k_cont<3){
        printf("Informe a linha para posicionar seu navio[3]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[3]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro2[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro2[linha_pos-1][coluna_pos-1] = 'N';
            k_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    
               
    while(l_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro2[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro2[linha_pos-1][coluna_pos-1] = 'N';
            l_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    
    
   
    while(m_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro2[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro2[linha_pos-1][coluna_pos-1] = 'N';
            m_cont++;
        }
        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    
    
   
    while(j_cont<1){
        printf("Informe a linha para posicionar seu navio[1]:\n");
        scanf("%d", &linha_pos);
        printf("Informe a coluna para posicionar seu navio[1]:\n");
        scanf("%d", &coluna_pos);
        
        if(linha_pos<1 || linha_pos>10 || coluna_pos<1 || coluna_pos>10){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else if(tabuleiro2[linha_pos-1][coluna_pos-1] == 'N'){
            printf("Posicao invalida. Tente novamente uma nova posicao para inserir o navio\n");
        }else{
            tabuleiro2[linha_pos-1][coluna_pos-1] = 'N';
            j_cont++;
        }
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    
    limpa_tela();
       
}
    

void iniciar_tabuleiro(char tabuleiro[10][10], char mascara_tabuleiro[10][10]){
    
    int linha=0, coluna=0;
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            tabuleiro[linha][coluna] = ' ';
            mascara_tabuleiro[linha][coluna] = ' ';
        }
    }
}

void iniciar_tabuleiro2(char tabuleiro2[10][10], char mascara_tabuleiro2[10][10]){
    
    int linha=0, coluna=0;
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            tabuleiro2[linha][coluna] = ' ';
            mascara_tabuleiro2[linha][coluna] = ' ';
        }
    }
}

void exibir_tabuleiro(char mascara_tabuleiro[10][10]){
    
    int linha=0, coluna=0;
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", mascara_tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    printf("Jogador 1\n");
}

void exibir_tabuleiro2(char mascara_tabuleiro2[10][10]){
    
    int linha=0, coluna=0;
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            printf("\t [%c]", mascara_tabuleiro2[linha][coluna]);
        }
        printf("\n");
    }
    printf("Jogador 2\n");
}


void executar_jogo(){
    
    char tabuleiro[10][10], mascara_tabuleiro[10][10], tabuleiro2[10][10], mascara_tabuleiro2[10][10];
    int linha_jogar=0, coluna_jogar=0, linha_jogar2=0, coluna_jogar2=0;
    int status_jogo=1; 
    int jogador_vez=0;
    int jogador1=0, jogador2=0;
    int linha=0, coluna=0;
    
    
    
    iniciar_tabuleiro(tabuleiro, mascara_tabuleiro);
    iniciar_tabuleiro2(tabuleiro2, mascara_tabuleiro2);
    posicionar_navios(tabuleiro);
    posicionar_navios2(tabuleiro2);
    
    
    while(status_jogo==1){
        
        
        
        exibir_tabuleiro(mascara_tabuleiro);
        
        printf("\n\n");
        
        exibir_tabuleiro2(mascara_tabuleiro2);
        
        
        if(jogador_vez%2==0){
            
            printf("\nJogador 1:\n");
            
            
            printf("Digite a linha da sua jogada:\n");
            scanf("%d", &linha_jogar);
            printf("Digite a coluna da sua jogada:\n");
            scanf("%d", &coluna_jogar);
            
            while(linha_jogar<1 || linha_jogar>10 || coluna_jogar<1 || coluna_jogar>10){
                printf("Jogada invalida, escolha a linha e coluna novamente\n");
                printf("Digite a linha da sua jogada:\n");
                scanf("%d", &linha_jogar);
                printf("Digite a coluna da sua jogada:\n");
                scanf("%d", &coluna_jogar);
            }
            while((tabuleiro2[linha_jogar-1][coluna_jogar-1] == 'O') || (tabuleiro2[linha_jogar-1][coluna_jogar-1] == 'X')){
                printf("Jogada invalida, escolha a linha e coluna novamente\n");
                printf("Digite a linha da sua jogada:\n");
                scanf("%d", &linha_jogar);
                printf("Digite a coluna da sua jogada:\n");
                scanf("%d", &coluna_jogar);
            }
            if(tabuleiro2[linha_jogar-1][coluna_jogar-1] == ' '){
                tabuleiro2[linha_jogar-1][coluna_jogar-1] = 'X';
                mascara_tabuleiro2[linha_jogar-1][coluna_jogar-1] = tabuleiro2[linha_jogar-1][coluna_jogar-1];
                printf("AGUAAAAA!!!\n");
            }else if(tabuleiro2[linha_jogar-1][coluna_jogar-1] == 'N'){
                tabuleiro2[linha_jogar-1][coluna_jogar-1] = 'O';
                mascara_tabuleiro2[linha_jogar-1][coluna_jogar-1] = tabuleiro2[linha_jogar-1][coluna_jogar-1];
                printf("Navio Atingido!!!\n");
                jogador1++;
                    if(jogador1>=10){
                        printf("PARABÉNS, JOGADOR 1 GANHOU!!!!\n");
                            for(linha=0; linha<10; linha++){
                                for(coluna=0; coluna<10; coluna++){
                                    printf("\t [%c]", mascara_tabuleiro2[linha][coluna]);
                                }
                            printf("\n");
                        }
                        break;
                        
                    }
            }
        
        jogador_vez++;
    }else{
        
            printf("\nJogador 2:\n");
            
            
            printf("Digite a linha da sua jogada:\n");
            scanf("%d", &linha_jogar2);
            printf("Digite a coluna da sua jogada:\n");
            scanf("%d", &coluna_jogar2);
            
            while(linha_jogar2<1 || linha_jogar2>10 || coluna_jogar2<1 || coluna_jogar2>10){
                printf("Jogada invalida, escolha a linha e coluna novamente\n");
                printf("Digite a linha da sua jogada:\n");
                scanf("%d", &linha_jogar2);
                printf("Digite a coluna da sua jogada:\n");
                scanf("%d", &coluna_jogar2);
            }
            while((tabuleiro[linha_jogar2-1][coluna_jogar2-1] == 'O') || (tabuleiro[linha_jogar2-1][coluna_jogar2-1] == 'X')){
                printf("Jogada invalida, escolha a linha e coluna novamente\n");
                printf("Digite a linha da sua jogada:\n");
                scanf("%d", &linha_jogar2);
                printf("Digite a coluna da sua jogada:\n");
                scanf("%d", &coluna_jogar2);
            }
            if(tabuleiro[linha_jogar2-1][coluna_jogar2-1] == ' '){
                tabuleiro[linha_jogar2-1][coluna_jogar2-1] = 'X';
                mascara_tabuleiro[linha_jogar2-1][coluna_jogar2-1] = tabuleiro[linha_jogar2-1][coluna_jogar2-1];
                printf("AGUAAAAA!!!\n");
            }else if(tabuleiro[linha_jogar2-1][coluna_jogar2-1] == 'N'){
                tabuleiro[linha_jogar2-1][coluna_jogar2-1] = 'O';
                mascara_tabuleiro[linha_jogar2-1][coluna_jogar2-1] = tabuleiro[linha_jogar2-1][coluna_jogar2-1];
                printf("Navio Atingido!!!\n");
                jogador2++;
                    if(jogador2>=10){
                        printf("PARABÉNS, JOGADOR 2 GANHOU!!!!\n");
                        for(linha=0; linha<10; linha++){
                            for(coluna=0; coluna<10; coluna++){
                                printf("\t [%c]", mascara_tabuleiro[linha][coluna]);
                            }
                        printf("\n");
                        }
                        break;
                    }
                
            }
        
        jogador_vez++;
        }
        
    } 
}
    

void menu_inicial(){
    
    int opcao=0;
    
    while(opcao!=3){
    
    //limpa_tela();
    
    printf("Seja bem vindo ao jogo da Batalha Naval!\n");
    printf("----------------------------------\n");
    printf("Opcao - 1: Jogar\n");
    printf("Opcao - 2: Informacoes sobre o jogo\n");
    printf("Opcao - 3: Sair\n");
    printf("----------------------------------\n");
    printf("Escolha uma opcao:\n");
 
    scanf("%d", &opcao);
    
    
        if(opcao==1){
                printf("Vamos começar!\n");
                executar_jogo();
        }
        else if(opcao==2){                
                printf("O tabuleiro possui um tamanho 10x10, ou seja 10 LINHAS e 10 COLUNAS\n");
                printf("Cada jogador possui 5 navios de guerra: [1] tamanho 4, [1] tamanho 3, [3] tamanho 1\n");
                printf("O objetivo do jogo e afundar os navios de guerra do adversario antes que ele destrua os seus\n");
                printf("Quando acertar um alvo sera marcado: O\n");
                printf("Quando errar um alvo sera marcado:   X\n");
                printf("Escolha a linha e a coluna sabiamente. Bom Jogo!\n\n\n\n\n\n");
        }
        else if(opcao==3){
                printf("Já?? Vamos jogar mais... =(\n");
        }else{
                printf("Opcao invalida, tente novamente...\n");
        
        }
        
    }
}

int main(){
     
    
    menu_inicial();
    
    return 0;
    
}
