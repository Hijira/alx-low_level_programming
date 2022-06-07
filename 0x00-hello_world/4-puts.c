#include <unistd.h> 

#include <sys/syscall.h> 

int main(void) 

{ 

    const char msg[] = "Programming is like building a multilingual puzzle\n";
syscall(SYS_write, 1, msg, sizeof(msg)); 

    return 0; 

} 
