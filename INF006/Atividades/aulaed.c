#include <stdio.h>
#include <stdlib.h>


typedef struct list{
    int value;
    struct list *next_pointer;
}list;

void show_menu(){
    
    puts(" =====================================");
    puts("|         Welcome                     |");
    puts("| 0 - Exit                            |");
    puts("| 1 - Insert value in List 1          |");
    puts("| 2 - Insert value in List 2          |");
    puts("| 3 - Show values and add up          |");
    puts(" =====================================");
}
void clear_screen(){
    system("clear");
}
int info_status(int status){
    
    switch(status){
        case 1:
            puts("Verifying...STATUS SUCESS.");
            break;
        case 2:
            puts("Verifying...STATUS FAIL -> Memory FULL.");
            break;
        default:
            puts("Verifying...STATUS FAIL.");
    }
}
int end_program(list *begin){
    
    list *current_list = begin;
    list *temporary;
    
    while(current_list != NULL){
        
        temporary = current_list->next_pointer;
        free(current_list);
        current_list = temporary;
    }
       
}
int insert_list(list *begin){
    
    list *new_node = (list*) malloc(sizeof(list));
    list *aux_pointer;
    
    if(new_node == NULL){
        
        return 2;
        
    }
        
    puts("Inform a value to insert:");
    scanf("%d", &new_node->value);
    
    new_node->next_pointer = NULL;
    
        if(begin->next_pointer == NULL){
            
            begin->next_pointer = new_node;
            
        }else{
            
            aux_pointer = begin->next_pointer;
            
            while(aux_pointer->next_pointer != NULL){
                
                aux_pointer = aux_pointer->next_pointer;
                
            }
            
            aux_pointer->next_pointer = new_node;
        }
        return 1;

}
int add_values(list *begin_one, list *begin_two){
    
    int result=0;
    
    list *aux_pointer_1 = begin_one->next_pointer;
    list *aux_pointer_2 = begin_two->next_pointer;
    
    while(aux_pointer_1 != NULL || aux_pointer_2 != NULL){
        
        result = (aux_pointer_1->value) + (aux_pointer_2->value); // quando as listas estão pareadas, somar os dois valores;
        printf("The result of %d + %d is: %d\n", aux_pointer_1->value, aux_pointer_2->value, result);
        
        aux_pointer_1 = aux_pointer_1->next_pointer;
        aux_pointer_2 = aux_pointer_2->next_pointer;
    }
    
    if(aux_pointer_2->next_pointer == NULL){ // quando a primeira lista for maior que a segunda, mostrar apenas o valor da primeira lista;
        //return 3;
        
    }
        while(aux_pointer_1 != NULL){
            
            printf("The result is: %d\n", aux_pointer_1->value);
            aux_pointer_1 = aux_pointer_1->next_pointer; // caminhando pela lista;
        }
    
    
    if(aux_pointer_1->next_pointer == NULL){
        
        //return 3;
        
    }
    
        
        while(aux_pointer_2 != NULL){
            
            printf("The result is: %d\n", aux_pointer_2->value);
            aux_pointer_2 = aux_pointer_2->next_pointer; // caminhando pela segunda lista;
            
        }
        
    return 1;
    

}
    
int main(){
    
    int op=0;
    int sair=0;
    int status=0;
    
    list *begin_one = (list*) malloc(sizeof(list)); // criando cabeçote da primeira lista;
    list *begin_two = (list*) malloc(sizeof(list)); // criando cabeçote da segunda lista;
    
    begin_one->next_pointer = NULL;
    begin_two->next_pointer = NULL;
    
    
    while(!sair){
        
        show_menu();
        scanf("%d", &op);   
  
        switch(op){
            case 0:
                clear_screen(); // limpar tela;
                end_program(begin_one);  // liberando memoria alocada;
                end_program(begin_two);  // liberando memoria alocada segunda lista;
                sair=1;
                break;
            case 1:
                clear_screen();
                status = insert_list(begin_one); // funcao para inserir na lista um;
                info_status(status);             // informar status para o usuario;
                break;
            case 2:
                clear_screen();
                status = insert_list(begin_two); // funcao para inserir na lista dois;
                info_status(status);             // informar status para o usuario;
                break;
            case 3:
                clear_screen();
                status = add_values(begin_one, begin_two);          // funcao para adicionar valores das listas e mostrar;
                info_status(status);                                // informar status para o usuario;
                break;
            default:
                puts("Verifying...STATUS FAIL -> Invalid Option.");
        }
    }

    return 0;
    
}
