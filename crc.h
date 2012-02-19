//======================================================== file = crc32.c =====
//=  Program to compute CRC-32 using the "table method" for 8-bit subtracts   =
//=============================================================================
//=  Notes: Uses the standard "Charles Michael Heard" code available from     =
//=         http://cell-relay.indiana.edu/cell-relay/publications/software    =
//=         /CRC which was adapted from the algorithm described by Avarm      =
//=         Perez, "Byte-wise CRC Calculations," IEEE Micro 3, 40 (1983).     =
//=---------------------------------------------------------------------------=
//=  Build:  bcc32 crc32.c, gcc crc32.c                                       =
//=---------------------------------------------------------------------------=
//=  History:  KJC (8/24/00) - Genesis (from Heard code, see above)           =
//=============================================================================

//----- Type defines ----------------------------------------------------------
typedef unsigned char byte;	// Byte is a char
typedef unsigned short int word16;	// 16-bit word is a short int
typedef unsigned int word32;	// 32-bit word is an int

//----- Defines ---------------------------------------------------------------
#define POLYNOMIAL 0x04c11db7L	// Standard CRC-32 ppolynomial
    
//----- Gloabl variables ------------------------------------------------------
unsigned long crctable[256] = 
    { 
0x706AF48FL, 0xE963A535L, 0x9E6495A3L, 

0x84BE41DEL, 
0xFD62F97AL, 0x8A65C9ECL, 
0x4C69105EL, 0xD56041E4L, 0xA2677172L, 

0xABD13D59L, 
0xCFBA9599L, 0xB8BDA50FL, 
0x58684C11L, 0xC1611DABL, 0xB6662D3DL, 

0xE10E9818L, 
0x856530D8L, 0xF262004EL, 
0x12B7E950L, 0x8BBEB8EAL, 0xFCB9887CL, 

0xD3D6F4FBL, 
0xAA0A4C5FL, 0xDD0D7CC9L, 
0x206F85B3L, 0xB966D409L, 0xCE61E49FL, 

0x74B1D29AL, 
0x0D6D6A3EL, 0x7A6A5AA8L, 
0x8708A3D2L, 0x1E01F268L, 0x6906C2FEL, 

0x60B08ED5L, 
0x3FB506DDL, 0x48B2364BL, 
0xA867DF55L, 0x316E8EEFL, 0x4669BE79L, 

0x5CB36A04L, 
0x756AA39CL, 0x026D930AL, 
0xE2B87A14L, 0x7BB12BAEL, 0x0CB61B38L, 

0x18B74777L, 
0x616BFFD3L, 0x166CCF45L, 
0xD06016F7L, 0x4969474DL, 0x3E6E77DBL, 

0x24B4A3A6L, 
0x5D681B02L, 0x2A6F2B94L, 
};


//----- Prototypes ------------------------------------------------------------
    word32 update_crc(word32 crc_accum, byte * data_blk_ptr,
		      word32 data_blk_size);

//=============================================================================
//=  CRC32 generation                                                         =
//=============================================================================
    word32 update_crc(word32 crc, byte * data_blk_ptr, word32 data_blk_size) 
{
	
	
		
	
	


