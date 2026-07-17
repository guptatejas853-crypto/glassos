#ifndef CONVERTER_H
#define CONVERTER_H

void converter_init(void);

int convert_exe_to_atp(const char *exe_path, char *output_path);

int convert_elf_to_atp(const char *elf_path, char *output_path);

#endif
