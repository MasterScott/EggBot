/* 
 * File:   serial.h
 * Author: bschmalz
 *
 * Created on May 29, 2020, 9:49 PM
 */

#ifndef SERIAL_H
#define	SERIAL_H

void serialInitDrivers(void);
void serialInit(void);
void parseDRCommand(void);
void parseDWCommand(void);

#endif	/* SERIAL_H */

