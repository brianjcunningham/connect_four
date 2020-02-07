#include <stdio.h>
#include <limits.h>

/*
 * This version of the program hardcodes the dimensions of the board as 6x7 because my C compiler requires the explicit dimenions of the array to be called out in the function. 
 * 
 * 
 * The bottom-left part of the board (from the user's perspective) is the 0,0 origin. 
 */


#define EMPTY 0 
#define BLUE 1
#define RED 2

void printlogo();
void print_game_board(int game[6][7]);
void get_game_status(int game[6][7]);
void reset_the_game(int game[6][7]);
void place_a_chip(int game[6][7],int column, int color);
int determine_where_chip_falls(int game[6][7],int column);

int main(){

    int game_status[6][7]; 
    int blue_selection=8, red_selection;
    
    // printlogo();

    reset_the_game(game_status);
    print_game_board(game_status);
    
    
    //2 player gameplay
    
   while (1){    // blue player turn
        printf("Blue Player, please enter 0-6 to place a chip:");
        
       
        while (blue_selection !='0' && blue_selection !='1' && blue_selection !='2' && blue_selection !='3' && blue_selection !='4' && blue_selection !='5' && blue_selection !='6'){
            blue_selection = getchar();
        }
    
    place_a_chip(game_status,blue_selection-'0',BLUE); // needs to be minus zero to convert ASCII number to an actual integer number
    print_game_board(game_status);
    blue_selection=8;
        
    print_game_board(game_status);
    
    //red player turn
    printf("Red Player, please enter 0-6 to place a chip:");
        
       
        while (red_selection !='0' && red_selection !='1' && red_selection !='2' && red_selection !='3' && red_selection !='4' && red_selection !='5' && red_selection !='6'){
            red_selection = getchar();
        }
    
    place_a_chip(game_status,red_selection-'0',RED); // needs to be minus zero to convert ASCII number to an actual integer number
    print_game_board(game_status);
    red_selection=8;
        
    print_game_board(game_status);
    
    
    
    
   }
}

void printlogo(){
    printf("\033[2J"); // clear terminal
    
    char logo_first_line[] = "\n  ______   ______   .__   __. .__   __.  _______   ______ .___________.    _______   ______    __    __  .______";
    char logo_second_line[] = "\n /      | /  __  \\  |  \\ |  | |  \\ |  | |   ____| /      ||           |   |   ____| /  __  \\  |  |  |  | |   _  \\        ";
    char logo_third_line[] = "\n|  ,----'|  |  |  | |   \\|  | |   \\|  | |  |__   |  ,----'`---|  |----`   |  |__   |  |  |  | |  |  |  | |  |_)  |       ";
    char logo_fourth_line[] = "\n|  |     |  |  |  | |  . `  | |  . `  | |   __|  |  |         |  |        |   __|  |  |  |  | |  |  |  | |      /        ";
    char logo_fifth_line[] = "\n|  `----.|  `--'  | |  |\\   | |  |\\   | |  |____ |  `----.    |  |        |  |     |  `--'  | |  `--'  | |  |\\  \\----.   ";
    char logo_sixth_line[] = "\n \\______| \\______/  |__| \\__| |__| \\__| |_______| \\______|    |__|        |__|      \\______/   \\______/  | _| `._____|   ";
    char game_board_lines[] = "  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\n";
    char game_board_blanks[] = "  |       |       |       |       |       |       |       |\n";
    
    
    printf(logo_first_line);
    printf(logo_second_line);
    printf(logo_third_line);
    printf(logo_fourth_line);
    printf(logo_fifth_line);
    printf(logo_sixth_line);
    
    printf("\n\n\n\n\n\n");
    
    
}

void print_game_board(int game[][7]){
    
    int i,j; 
    printf("\033[2J\n"); //clear terminal
    
    for ( i = 5; i >= 0; i-- ) {
        printf("\e[1;33m|");
      for ( j = 0; j <= 6; j++ ) {
          switch (game[i][j]){
              case 1: {
                  printf("\e[1;34m X \e[1;33m");
                  break;
                }
              case 2: {
                    printf("\e[1;31m 0 \e[1;33m");
                    break;
                }
            default: {
                printf(" - ");
                break;
                  
                }
            }
        }
    printf("|\n\e[0m");
            //printf(" has a byte size of %i ",sizeof(int));
        }
    
    //printf("\n");
    }
    
    
    
    
//      char game_board_lines[] = "  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\n";
//      char game_board_blanks[] = "  |       |       |       |       |       |       |       |\n";
//     
// 
//        
//     //make board blue
//     printf("\e[1;33m");
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//     printf(game_board_blanks);
//     printf(game_board_blanks);
//     printf(game_board_lines);
//     
//  
//     //stop making the board blue
//     printf("\e[0m");
//     
//     printf("\n\n\n\n\n\n");
//     return;
    


void reset_the_game(int game[][7]){
    int i,j; 
    
    for ( i = 0; i <= 5; i++ ) {
      for ( j = 0; j <= 6; j++ ) {
            game[i][j] = 0;
            //printf("\n row %i, col %i has a value of %i ",i,j,game[i][j]);
        }
    
    
    printf("\n");
    }
    return;
}


void get_game_status(int game[][7]){
    int i,j; 
    
    for ( i = 0; i <= 5; i++ ) {
      for ( j = 0; j <= 6; j++ ) {
            printf("\n row %i, col %i has a value of %i ",i,j,game[i][j]);
            //printf(" has a byte size of %i ",sizeof(int));
        }
    
    
    printf("\n");
    }
    
 return;   
    
}


int determine_where_chip_falls(int game[6][7],int column){
    int i,running_sum=0; 
    
    for ( i =0; i <=6; i++){
        if (!game[i][column]){
            break;
        }
        else {
        running_sum++;
            
        }
        
    }
    //printf("\nThe first onoccupied row in column %i is row %i",column, running_sum);
    return running_sum;
    
    
}

void place_a_chip(int game[6][7],int column, int color){
        int row_placeholder = determine_where_chip_falls(game,column);
        game[row_placeholder][column]=color;
        printf("\n row %i, col %i has a value of %i ",row_placeholder,column,game[row_placeholder][column]);
           }

