#ifndef config_ftdi_h
#define config_ftdi_h


#define FTDI_PORT 0
/*
#define FIFO_SYNCHRONOUS_MODE  	0x40
#define FIFO_ASYNCHRONOUS_MODE  	0x00
#define MSG_TYPE_VERSION_RD 		0x03
#define MSG_TYPE_DEBUG_CFG_WR 	0x12
#define MSG_TYPE_CONFIG_AC_RD 	0x24
#define MSG_TYPE_CONFIG_AC_WR 	0x33
#define MSG_TYPE_CONFIG_PID_ONE_RD 	0x47
#define MSG_TYPE_CONFIG_PID_ONE_WR 	0x57
#define MSG_TYPE_CONFIG_LOCKIN_RD 	0x06
#define MSG_TYPE_CONFIG_LOCKIN_WR 	0x07
#define MSG_TYPE_CONFIG_PID_TWO_RD 	0x86
#define MSG_TYPE_CONFIG_PID_TWO_WR 	0x96
#define MSG_TYPE_DAC_OUT_RD 		0xA2
#define MSG_TYPE_DAC_OUT_WR 		0xB9
*/

#define BUFFER_SIZE 20
#define HALF_BUFFER_SIZE (BUFFER_SIZE/2)

typedef enum ENU_MSG_TYPE {
	MSG_TYPE_VERSION_RD = 0,
	MSG_TYPE_DEBUG_CFG_WR,   
	MSG_TYPE_CONFIG_AC_RD,      
	MSG_TYPE_CONFIG_AC_WR,      
	MSG_TYPE_CONFIG_PID_ONE_RD, 
	MSG_TYPE_CONFIG_PID_ONE_WR, 
	MSG_TYPE_CONFIG_LOCKIN_RD,  
	MSG_TYPE_CONFIG_LOCKIN_WR,  
	MSG_TYPE_CONFIG_PID_TWO_RD, 
	MSG_TYPE_CONFIG_PID_TWO_WR, 
	MSG_TYPE_DAC_OUT_RD,        
	MSG_TYPE_LED_STATUS,        
	MSG_TYPE_RUN_TEST,         
	MSG_TYPE_7_WR,              
	MSG_TYPE_8_RD,             
	MSG_TYPE_8_WR
} t_msg_type;



#define TxtFtStatus(x) ( \
	(x == FT_OK)                          ? "FT_OK"                         : \
	(x == FT_INVALID_HANDLE)              ? "FT_INVALID_HANDLE"             : \
	(x == FT_DEVICE_NOT_FOUND)            ? "FT_DEVICE_NOT_FOUND"           : \
	(x == FT_DEVICE_NOT_OPENED)           ? "FT_DEVICE_NOT_OPENED"          : \
	(x == FT_IO_ERROR)                    ? "FT_IO_ERROR"                   : \
	(x == FT_INSUFFICIENT_RESOURCES)      ? "FT_INSUFFICIENT_RESOURCES"     : \
	(x == FT_INVALID_PARAMETER)           ? "FT_INVALID_PARAMETER"          : \
	(x == FT_INVALID_BAUD_RATE)           ? "FT_INVALID_BAUD_RATE"          : \
	(x == FT_DEVICE_NOT_OPENED_FOR_ERASE) ? "FT_DEVICE_NOT_OPENED_FOR_ERASE": \
	(x == FT_DEVICE_NOT_OPENED_FOR_WRITE) ? "FT_DEVICE_NOT_OPENED_FOR_WRITE": \
	(x == FT_FAILED_TO_WRITE_DEVICE)      ? "FT_FAILED_TO_WRITE_DEVICE"     : \
	(x == FT_EEPROM_READ_FAILED)          ? "FT_EEPROM_READ_FAILED"         : \
	(x == FT_EEPROM_WRITE_FAILED)         ? "FT_EEPROM_WRITE_FAILED"        : \
	(x == FT_EEPROM_ERASE_FAILED)         ? "FT_EEPROM_ERASE_FAILED"        : \
	(x == FT_EEPROM_NOT_PRESENT)          ? "FT_EEPROM_NOT_PRESENT"         : \
	(x == FT_EEPROM_NOT_PROGRAMMED)       ? "FT_EEPROM_NOT_PROGRAMMED"      : \
	(x == FT_INVALID_ARGS)                ? "FT_INVALID_ARGS"               : \
	(x == FT_NOT_SUPPORTED)               ? "FT_NOT_SUPPORTED"              : \
	(x == FT_OTHER_ERROR)                 ? "FT_OTHER_ERROR"                : \
	(x == FT_DEVICE_LIST_NOT_READY)       ? "FT_DEVICE_LIST_NOT_READY"      : \
	"???")



#endif

