#include "kernel.h"
#include "lib.h"

#include "arch/i686/gdt.h"
#include "arch/i686/idt.h"
#include "arch/i686/legacytty.h"

void kernel_main(void) {
  // temporary term output using VGA text mode
  init_term();

  // Global and Interrupt Descriptor Tables
  init_gdt();
  init_idt();

  printf("mateOS kernel started\n");
  while (1) {
    // printf("dmOS kernel running %d\n", x++);
  }
}
