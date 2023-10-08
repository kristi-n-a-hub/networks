/*
 * Файл:  inout.h
 * Автор: Andrew Salo <salo@cs.karelia.ru>
 * Дата:  07.09.2004
 *
 * Декларация функций для ввода имени и вывода приветствия.
 */

#ifndef INOUT_H
#define INOUT_H

/* Вывод "Hello, <name>!" на экран.  */
void output_hello (const char *name);
char* input_name ();

#endif /* INOUT_H */
