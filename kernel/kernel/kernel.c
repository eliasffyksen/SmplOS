#include <stdio.h>

#include <kernel/tty.h>
#include <kernel/arch.h>

void kernel_main(void)
{
	terminal_init();
	puts("Terminal initialized");

	puts("\nInitializing arch...");
	arch_init();

	puts("\nKernel initialized");
}
