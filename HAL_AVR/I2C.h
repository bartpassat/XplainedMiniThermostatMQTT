/*
 * I2C.h
 *
 * Created: 01/11/2018 19:20:51
 *  Author: Petervg
 */ 

#include <util/twi.h>
#include <stdint.h>

#ifndef I2C_H_
#define I2C_H_

#define I2C_READ 0x01
#define I2C_WRITE 0x00


void i2c_init(void);
uint8_t i2c_start(uint8_t address);
uint8_t i2c_write(uint8_t data);
uint8_t i2c_read_ack(void);
uint8_t i2c_read_nack(void);
uint8_t i2c_transmit(uint8_t address, uint8_t* data, uint16_t length);
uint8_t i2c_receive(uint8_t address, uint8_t* data, uint16_t length);
uint8_t i2c_writeReg(uint8_t devaddr, uint8_t regaddr, uint8_t* data, uint16_t length);
uint8_t i2c_readReg(uint8_t devaddr, uint8_t regaddr, uint8_t* data, uint16_t length);
void i2c_stop(void);



#endif /* I2C_H_ */