#include <stdio.h>

int main(){
 
    printf("\033[2J"); // clear terminal
    
    char logo_first_line[] = "\n  ______   ______   .__   __. .__   __.  _______   ______ .___________.    _______   ______    __    __  .______";
    
    char logo_second_line[] = "\n /      | /  __  \\  |  \\ |  | |  \\ |  | |   ____| /      ||           |   |   ____| /  __  \\  |  |  |  | |   _  \\        ";
    char logo_third_line[] = "\n|  ,----'|  |  |  | |   \\|  | |   \\|  | |  |__   |  ,----'`---|  |----`   |  |__   |  |  |  | |  |  |  | |  |_)  |       ";
    char logo_fourth_line[] = "\n|  |     |  |  |  | |  . `  | |  . `  | |   __|  |  |         |  |        |   __|  |  |  |  | |  |  |  | |      /        ";
    char logo_fifth_line[] = "\n|  `----.|  `--'  | |  |\\   | |  |\\   | |  |____ |  `----.    |  |        |  |     |  `--'  | |  `--'  | |  |\\  \\----.   ";
    char logo_sixth_line[] = "\n \\______| \\______/  |__| \\__| |__| \\__| |_______| \\______|    |__|        |__|      \\______/   \\______/  | _| `._____|   ";
    
    
    printf(logo_first_line);
    printf(logo_second_line);
    printf(logo_third_line);
    printf(logo_fourth_line);
    printf(logo_fifth_line);
    printf(logo_sixth_line);
    
    
    printf("It is \033[31mnot\033[39m intelligent to use \033[32mhardcoded ANSI\033[39m codes!");
    
    getchar();
    
    
    return 0; 
}
