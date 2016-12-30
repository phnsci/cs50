#include <stdint.h>
#include <inttypes.h>
/**
 * Common Data Types 
 *
 * The data types in this section are essentially aliases for C/C++ 
 * primitive data types.
 *
 * Adapted from http://msdn.microsoft.com/en-us/library/cc230309.aspx.
 * See http://en.wikipedia.org/wiki/Stdint.h for more on stdint.h.
 */
typedef uint8_t  BYTE;			// 1 byte
typedef uint16_t WORD;			// 2 bytes
typedef uint32_t DWORD;			// 4 bytes
typedef int32_t  LONG;		

// constant
#define BLOCK_SIZE 512 			// BYTE

/**
	* JPEG block size in bytes
	*/
typedef struct
{
	DWORD dword[BLOCK_SIZE];
} __attribute__((__packed__))
BLOCK;

/**
	* Signature of JPEG beginning block
	* The signature marks the beginning of JPEG file
	*/
BYTE signature[][] = {{0xff, 0xd8, 0xff, 0xe0}, {0xff, 0xd8, 0xff, 0xe1}, 
											{0xff, 0xd8, 0xff, 0xe2}, {0xff, 0xd8, 0xff, 0xe3},
											{0xff, 0xd8, 0xff, 0xe4}, {0xff, 0xd8, 0xff, 0xe5},
											{0xff, 0xd8, 0xff, 0xe6}, {0xff, 0xd8, 0xff, 0xe7},
											{0xff, 0xd8, 0xff, 0xe8}, {0xff, 0xd8, 0xff, 0xe9},
											{0xff, 0xd8, 0xff, 0xea}, {0xff, 0xd8, 0xff, 0xeb},
											{0xff, 0xd8, 0xff, 0xec}, {0xff, 0xd8, 0xff, 0xed},
											{0xff, 0xd8, 0xff, 0xee}, {0xff, 0xd8, 0xff, 0xef}};
	
// size of signature array in DWORD
int sizeD = 16;

// size of each DWORD in BYTE
int sizeB = 4;
