#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar_tabuleiro(char m_tabuleiro[3][3]){
    
    system("clear");
    printf("\t %c | %c | %c\n", m_tabuleiro[0][0],m_tabuleiro[0][1],m_tabuleiro[0][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c\n", m_tabuleiro[1][0],m_tabuleiro[1][1],m_tabuleiro[1][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c\n", m_tabuleiro[2][0],m_tabuleiro[2][1],m_tabuleiro[2][2]);
    

}

int main(){
    
    
    char tabuleiro[3][3];                         
    char resposta;
    int contador_jogadas=0, vez_jogador=0;
    int linha=0, coluna=0;
    int i_cont=0, j_cont=0;
                            
        
    do{
        
        for(i_cont=0; i_cont<=2; i_cont++){
            for(j_cont=0; j_cont<=2; j_cont++){
                tabuleiro[i_cont][j_cont] = ' ';
            }
        }
        
        
        do{
            
            
            mostrar_tabuleiro(tabuleiro);
            if(vez_jogador%2==0){
                printf("Jogador X:\n");
            }else{
                printf("Jogador O:\n");
            }
                        
            printf("Informe a linha:\n");
            scanf("%d", &linha);
            
            printf("Informe a coluna:\n");
            scanf("%d", &coluna);
            
            if(linha<1 || linha>3 || coluna<1 || coluna>3){ 
                
                linha=0;
                coluna=0;
                
            }else if(tabuleiro[linha-1][coluna-1] != ' '){
                
                linha=0;
                coluna=0;

            }else{
                if(vez_jogador%2==0){
                    tabuleiro[linha-1][coluna-1] = 'X';
                    
                }else{
                    tabuleiro[linha-1][coluna-1] = 'O';
                    
                }
                
                contador_jogadas++;
                vez_jogador++;
            }
            
            // VALIDANDO CONDIÇÕES DE VITÓRIA:
            
            if(tabuleiro[0][0] == 'X' && tabuleiro[0][1] == 'X' && tabuleiro[0][2] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[1][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[1][2] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[2][0] == 'X' && tabuleiro[2][1] == 'X' && tabuleiro[2][2] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[0][0] == 'X' && tabuleiro[1][0] == 'X' && tabuleiro[2][0] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[0][1] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][1] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[0][2] == 'X' && tabuleiro[1][2] == 'X' && tabuleiro[2][2] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X'){
                contador_jogadas=11;
            }
            if(tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'){
                contador_jogadas=11;
            }
            
            
            if(tabuleiro[0][0] == 'O' && tabuleiro[0][1] == 'O' && tabuleiro[0][2] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[1][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[1][2] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[2][0] == 'O' && tabuleiro[2][1] == 'O' && tabuleiro[2][2] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[0][0] == 'O' && tabuleiro[1][0] == 'O' && tabuleiro[2][0] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[0][1] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][1] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[0][2] == 'O' && tabuleiro[1][2] == 'O' && tabuleiro[2][2] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O'){
                contador_jogadas=12;
            }
            if(tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O'){
                contador_jogadas=12;
            }
            
                
          
        
        }while(contador_jogadas<9);
        
        mostrar_tabuleiro(tabuleiro);
        
        if(contador_jogadas==9){
            printf("Jogo empatado, ninguém venceu\n");
        }
        if(contador_jogadas==11){
            printf("Jogador X venceu! PARABÉNS\n");
        }
        if(contador_jogadas==12){
            printf("Jogador O venceu! PARABÉNS\n");
        }
        
        
        printf("Deseja jogar novamente? [s/n]\n");
        scanf("%s", &resposta);
        
        vez_jogador=0;
        contador_jogadas=0;
        
    }while(resposta=='s');
        
        
        
        
}
