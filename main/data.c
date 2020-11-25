/****************************************************************************/
/*                       Header includes                                    */

#include <stdio.h>

/****************************************************************************/
/*! @file data.c
 * @brief Data structure to save the data
 */
#include "data.h"

/****************************************************************************/
/*!                        Global Statements                                */

extern Field field;

/****************************************************************************/
/*!                         Functions                                       */

/*!
 * @brief This function print weather data.
 */
void print()
{
    printf(" Temperatura Atual: %.2lf °C\n", field.temperature);
    printf("Temperatura Mínima: %.2lf °C\n", field.temp_min);
    printf("Temperatura Máxima: %.2lf °C\n", field.temp_max);
    printf("          Humidade: %.2lf %%\n", field.humidity);
}
