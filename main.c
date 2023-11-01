/*
  ufz - UTF-8 fuzzy string search implement with Levenshtein distance
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>

/* unicode */
#include <wchar.h>
#include <locale.h>

extern void read_file(const char* file) {
  FILE *textdata = fopen(file, "r");
  if (!textdata) {
    perror("can't open file");
    EXIT_FAILURE;
  }
}

/* compute word distance by walk entire strings in file */
void word_dst(const char* phase, const char* walk) {
  if (strlen(phase) == 0 &&  strlen(walk) == 0)
    puts(phase);
}

void show_help(void) {
  puts("usage:\n"
       "  ufz [options] <file> <search word>\n"
       "\n ufz - unicode fuzzy string search implement with Levenshtein distance\n"
       "\noptions:\n"
       "  -f : input textfile\n"
       "  -s : search string\n"
       "  -l : similiarity range [0-9]\n"
       "  -h : print help and exit\n"
       );
}

int main(int argc, char** argv) {
  int opt;
  const char* optstring = "fslh:";
  if ((opt = getopt(argc, argv, optstring)) != -1) {
    switch (opt) {
      case 'f':
        break;
      case 's':
        break;
      case 'l':
        break;
      case 'h':
        break;
      default:
        show_help();
        break;
    }
  } else {
    show_help();
  }
  EXIT_SUCCESS;
}
