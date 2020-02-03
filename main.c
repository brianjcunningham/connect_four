#include <stdio.h>

void printlogo();
void print_game_board();

int main(){
    
    printlogo();
    print_game_board();
    
    return 0; 
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

void print_game_board(){
     char game_board_lines[] = "  | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ | _ _ _ |\n";
     char game_board_blanks[] = "  |       |       |       |       |       |       |       |\n";
    
    printf("\e[1;33m");
    
    
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
       
    //make board blue
    printf("\e[1;33m");
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    printf(game_board_blanks);
    printf(game_board_blanks);
    printf(game_board_lines);
    
    //stop making the board blue
    printf("\e[0m");
    
    printf("\n\n\n\n\n\n");
 
    //stop making the board blue
    printf("\e[0m");
    
    printf("\n\n\n\n\n\n");
    
}

