/*
 * Файл:  inout.c
 * Автор: Andrew Salo <salo@cs.karelia.ru>
 * Дата:  07.09.2004
 *
 * Содержит код функций для ввода имени и вывода приветствия.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Включить файл с декларациями функций.  */
#include "inout.h"
#include "config.h"


/*
 * Функция чтения имени.
 */
char*
input_name ()
{
  char *name; /* Переменная, содержащая имя.  */
  int i; /* Счетчик.  */

  /* Динамическое выделение пямяти для имени.  */
  name = (char *) malloc (MAX_NAME_LENGTH);

  /* Проверка корректности выделения памяти.  */
  if (name == NULL)
    {
      perror ("malloc");
      exit (1);
    }

  /* Приглашение и ввод имени.  */
  fprintf (stdout, "Enter your name: ");
  fgets (name, MAX_NAME_LENGTH, stdin);

  /* Удаление перевода строки из имени.  */
  for (i = strlen (name) - 1; name[i] == '\n'; name[i--] = '\0');

  return name;
}


/*
 * Функция вывода на экран приветствия в формате "Hello, <name>!".
 */
void
output_hello (const char *name)
{
  fprintf (stdout, "Hello, %s!\n", name);
}
