#include <stdlib.h>

#define BLD_IMPLEMENTATION
#include "bld.h"

int main(int argc, char **argv) {
//  rebuild(argc, argv);
  cmd("tectonic main.tex");
  cmd("cp main.pdf ~/vault/EL_Informe_03.pdf");
  cmd("rm main.pdf");
  return 0;
}
