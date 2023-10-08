/*
 * Файл:  main.c
 * Автор: Andrew Salo <salo@cs.karelia.ru>
 * Дата:  07.09.2004
 *
 * Главный модуль программы.
 */

#include <stdio.h>
#include <stdlib.h>

#include "inout.h"

/*
 * Старт программы.
 */
int
main ()
{
  /* Вывод "Hello, World!" на экран.  */
  const char *name = input_name ();
  output_hello (name);

  /* Завершение программы с нулевым кодом возврата.  */
  exit (0);
}
