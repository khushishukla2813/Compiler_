#ifndef COMPILER_H
#define COMPILER_H
#include <stddef.h>
#include <stdbool.h>


struct command_argument
{
    char argument[512];
    struct command_argument* next;
};

struct process_arguments
{
    int argc;
    char** argv;
};


void print(const char* filename);
int compiler_getkey();

void* compiler_malloc(size_t size);
void compiler_free(void* ptr);
void compiler_putchar(char c);
int compiler_getkeyblock();
void compiler_terminal_readline(char* out, int max, bool output_while_typing);
void compiler_process_load_start(const char* filename);
struct command_argument* compiler_parse_command(const char* command, int max);
void compiler_process_get_arguments(struct process_arguments* arguments);
int compiler_system(struct command_argument* arguments);
int compiler_system_run(const char* command);
void compiler_exit();
#endif
