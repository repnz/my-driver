#pragma once

#define FILE_DEVICE_CALCULATOR 0x00008337 
#define BUILD_CALCULATOR_IOCTL(Opcode) CTL_CODE(FILE_DEVICE_CALCULATOR, Opcode, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define CALCULATOR_ADD_OPCODE 1
#define CALCULATOR_SUB_OPCODE 2
#define CALCULATOR_DIV_OPCODE 3
#define CALCULATOR_MUL_OPCODE 4

