#include "syscall.h"
#include "copyright.h"

int main(){
    int i = 0;
    while(i++<1000)
    {
        PrintChar('B');
    }
    return 0;
}