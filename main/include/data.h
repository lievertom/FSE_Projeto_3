#ifndef DATA_H
#define DATA_H

/****************************************************************************/
/*!                            Structs                                      */
typedef struct Field
{
    double latitude;
    double longitude;
    double temperature;
    double temp_max;
    double temp_min;
    double humidity;
} Field;

/****************************************************************************/
/*!                         Functions                                       */

/**
  * @brief Function to print weather data.
  */
void print();

#endif /* DATA_H_ */
