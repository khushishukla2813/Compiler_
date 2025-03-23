#include "shell.h"
#include "stdio.h"
#include "stdlib.h"
#include "compiler.h"
int main(int argc, char** argv)
{
    print("compiler v1.0.0\n");
    while(1) 
    {
        print("> ");
        char buf[1024];
        compiler_terminal_readline(buf, sizeof(buf), true);
        print("\n");
        compiler_system_run(buf);
        
        print("\n");
    }
    return 0;
}
