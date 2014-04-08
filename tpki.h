#pragma once

// AES KEYS
static const unsigned char zeros_aesKey[16] = 
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// RSA KEYS
static const unsigned char tpki_rsa_privExp[256] = 
{
	0xE3, 0xC6, 0x76, 0x57, 0x2E, 0xCB, 0xA5, 0xE6, 
	0x0C, 0x01, 0xBD, 0x5C, 0x32, 0x2D, 0x90, 0xE0, 
	0xFF, 0x9A, 0x80, 0xE8, 0x66, 0x8D, 0x84, 0xDC, 
	0xF7, 0x75, 0x5F, 0x3F, 0x98, 0x7C, 0x97, 0x40, 
	0x20, 0x21, 0xB7, 0x24, 0xC0, 0x61, 0x2D, 0x83, 
	0xB0, 0x91, 0x8E, 0xE3, 0xC2, 0xD0, 0x2C, 0xA1, 
	0x2C, 0x99, 0x4F, 0x48, 0xF7, 0x4E, 0x13, 0xD3, 
	0x01, 0x71, 0x25, 0x9B, 0x3C, 0x75, 0x7C, 0xC4, 
	0xE5, 0x89, 0x7E, 0xDA, 0xF9, 0x99, 0x5C, 0x83, 
	0xE4, 0xDD, 0x36, 0x62, 0x5B, 0x0E, 0x12, 0x91, 
	0xD6, 0x39, 0x45, 0x69, 0x62, 0x20, 0xCA, 0xF4, 
	0xBA, 0x6B, 0x28, 0x1A, 0x7C, 0xBF, 0xB9, 0x97, 
	0x37, 0x46, 0xC2, 0x7A, 0xCF, 0x10, 0x68, 0xC2, 
	0xC9, 0xF1, 0x48, 0xDA, 0x8A, 0x2F, 0x4C, 0xBC, 
	0x3B, 0x1C, 0xB8, 0x8F, 0x04, 0x7F, 0xFD, 0x9D, 
	0xE2, 0x0A, 0xD2, 0x09, 0x39, 0xC7, 0xD9, 0x81, 
	0x59, 0x17, 0x73, 0xB2, 0xEC, 0xEB, 0x36, 0x67, 
	0xA5, 0xA8, 0xD5, 0x71, 0xD9, 0x38, 0x6A, 0xD1, 
	0x28, 0xB9, 0x46, 0x85, 0x3A, 0x81, 0x85, 0x4E, 
	0x55, 0xA7, 0x74, 0x79, 0xBB, 0xC5, 0x97, 0xF7, 
	0xEF, 0xE0, 0x81, 0x20, 0xE0, 0xEA, 0x45, 0x8F, 
	0xED, 0x70, 0x8E, 0xD6, 0xFF, 0x49, 0xCF, 0x7F, 
	0xF2, 0xFF, 0x22, 0x20, 0x3F, 0xE9, 0x92, 0x99, 
	0xDE, 0x81, 0xD6, 0x27, 0xF7, 0xB8, 0x3A, 0x1D, 
	0x4F, 0xA2, 0x50, 0xFB, 0xA5, 0xE7, 0x98, 0x08, 
	0xB5, 0x2B, 0xA2, 0x94, 0xA9, 0x17, 0x1A, 0xA8, 
	0x34, 0xF6, 0x5E, 0x24, 0x2D, 0x40, 0x2F, 0xCB, 
	0x3C, 0xB0, 0xF8, 0x7E, 0x84, 0xB4, 0x87, 0x82, 
	0x19, 0xAF, 0x87, 0xB6, 0xFA, 0xA9, 0x67, 0x27, 
	0x07, 0x28, 0xBA, 0x2E, 0xA5, 0x8E, 0xDD, 0xE5, 
	0xD4, 0xFD, 0x06, 0x09, 0xDF, 0xBD, 0x87, 0x95, 
	0x95, 0x25, 0x05, 0x5E, 0xB2, 0x00, 0x18, 0x41
};

static const unsigned char tpki_rsa_pubMod[256] =
{
	0xE6, 0x64, 0x06, 0x6C, 0x49, 0x6B, 0xEC, 0xEE, 
	0x59, 0xAE, 0x11, 0x92, 0xF1, 0x03, 0x43, 0x87, 
	0x8E, 0xEB, 0x4D, 0x70, 0xA9, 0x71, 0xB4, 0x6D, 
	0x25, 0x19, 0x02, 0x4A, 0x9E, 0x4D, 0xA3, 0x10, 
	0xFD, 0xB2, 0x27, 0x56, 0xA3, 0xFB, 0xDD, 0xE5, 
	0xE4, 0x4E, 0xE0, 0x62, 0x8F, 0xC3, 0x2E, 0xEE, 
	0x8F, 0x9D, 0x4D, 0x6E, 0x00, 0xDB, 0x88, 0x49, 
	0xA2, 0xFC, 0x30, 0xFE, 0x94, 0xF3, 0x06, 0x92, 
	0x75, 0x61, 0x11, 0x1D, 0x24, 0x07, 0xE9, 0x12, 
	0xB6, 0xB1, 0x57, 0xF5, 0xDC, 0x01, 0xF7, 0x54, 
	0xBF, 0xC3, 0xAC, 0x8C, 0x73, 0x2C, 0x73, 0x17, 
	0x8E, 0xBF, 0x2F, 0x68, 0x3C, 0x61, 0x75, 0x32, 
	0x15, 0x39, 0x93, 0xDD, 0xBA, 0x12, 0x42, 0xD3, 
	0x25, 0x85, 0xFA, 0xA6, 0x4B, 0xAF, 0x81, 0x4B, 
	0xCA, 0xD2, 0x9C, 0xF1, 0x3D, 0x37, 0xAE, 0xB9, 
	0xFD, 0x77, 0x59, 0x78, 0xB9, 0x32, 0x95, 0x19, 
	0xD1, 0x47, 0xE1, 0xC6, 0xE1, 0x16, 0x13, 0x5D, 
	0xCC, 0x99, 0x31, 0x63, 0xAD, 0xBB, 0xA5, 0x4F, 
	0xE4, 0x41, 0x67, 0xFD, 0x7F, 0x1E, 0xA8, 0x9A, 
	0x35, 0x65, 0xEB, 0xC4, 0x4D, 0xD4, 0xC4, 0x29, 
	0x0F, 0x40, 0x95, 0xFD, 0x8A, 0x30, 0x67, 0x79, 
	0xFB, 0xD4, 0x76, 0x6F, 0xD1, 0xDE, 0x8C, 0x72, 
	0x32, 0x05, 0x97, 0x5A, 0x26, 0x0D, 0x37, 0xCA, 
	0x12, 0x2C, 0xDC, 0x14, 0x3F, 0xD3, 0x59, 0x00, 
	0x66, 0xD2, 0x8E, 0xF5, 0x6E, 0x22, 0x08, 0x63, 
	0x59, 0xB5, 0x3F, 0xBB, 0x3A, 0x4D, 0xD4, 0xD1, 
	0xC1, 0x21, 0xA7, 0x4D, 0x02, 0x96, 0x08, 0xF5, 
	0x2B, 0x11, 0xE5, 0x85, 0xD2, 0x6E, 0x91, 0xD6, 
	0x8F, 0x77, 0x72, 0xEF, 0x37, 0xE3, 0x79, 0x19, 
	0xA9, 0xEE, 0x58, 0x5D, 0x52, 0x9B, 0x2D, 0x47, 
	0x7D, 0x27, 0xB8, 0xC3, 0x76, 0xCA, 0xDA, 0xC2, 
	0xF4, 0xFC, 0xF4, 0x53, 0x7C, 0xD8, 0x43, 0x87
};

//Certificates
static const unsigned char ca3_tpki_cert[0x400] =
{
	0x00, 0x01, 0x00, 0x03, 0x70, 0x41, 0x38, 0xEF, 
	0xBB, 0xBD, 0xA1, 0x6A, 0x98, 0x7D, 0xD9, 0x01, 
	0x32, 0x6D, 0x1C, 0x94, 0x59, 0x48, 0x4C, 0x88, 
	0xA2, 0x86, 0x1B, 0x91, 0xA3, 0x12, 0x58, 0x7A, 
	0xE7, 0x0E, 0xF6, 0x23, 0x7E, 0xC5, 0x0E, 0x10, 
	0x32, 0xDC, 0x39, 0xDD, 0xE8, 0x9A, 0x96, 0xA8, 
	0xE8, 0x59, 0xD7, 0x6A, 0x98, 0xA6, 0xE7, 0xE3, 
	0x6A, 0x0C, 0xFE, 0x35, 0x2C, 0xA8, 0x93, 0x05, 
	0x82, 0x34, 0xFF, 0x83, 0x3F, 0xCB, 0x3B, 0x03, 
	0x81, 0x1E, 0x9F, 0x0D, 0xC0, 0xD9, 0xA5, 0x2F, 
	0x80, 0x45, 0xB4, 0xB2, 0xF9, 0x41, 0x1B, 0x67, 
	0xA5, 0x1C, 0x44, 0xB5, 0xEF, 0x8C, 0xE7, 0x7B, 
	0xD6, 0xD5, 0x6B, 0xA7, 0x57, 0x34, 0xA1, 0x85, 
	0x6D, 0xE6, 0xD4, 0xBE, 0xD6, 0xD3, 0xA2, 0x42, 
	0xC7, 0xC8, 0x79, 0x1B, 0x34, 0x22, 0x37, 0x5E, 
	0x5C, 0x77, 0x9A, 0xBF, 0x07, 0x2F, 0x76, 0x95, 
	0xEF, 0xA0, 0xF7, 0x5B, 0xCB, 0x83, 0x78, 0x9F, 
	0xC3, 0x0E, 0x3F, 0xE4, 0xCC, 0x83, 0x92, 0x20, 
	0x78, 0x40, 0x63, 0x89, 0x49, 0xC7, 0xF6, 0x88, 
	0x56, 0x5F, 0x64, 0x9B, 0x74, 0xD6, 0x3D, 0x8D, 
	0x58, 0xFF, 0xAD, 0xDA, 0x57, 0x1E, 0x95, 0x54, 
	0x42, 0x6B, 0x13, 0x18, 0xFC, 0x46, 0x89, 0x83, 
	0xD4, 0xC8, 0xA5, 0x62, 0x8B, 0x06, 0xB6, 0xFC, 
	0x5D, 0x50, 0x7C, 0x13, 0xE7, 0xA1, 0x8A, 0xC1, 
	0x51, 0x1E, 0xB6, 0xD6, 0x2E, 0xA5, 0x44, 0x8F, 
	0x83, 0x50, 0x14, 0x47, 0xA9, 0xAF, 0xB3, 0xEC, 
	0xC2, 0x90, 0x3C, 0x9D, 0xD5, 0x2F, 0x92, 0x2A, 
	0xC9, 0xAC, 0xDB, 0xEF, 0x58, 0xC6, 0x02, 0x18, 
	0x48, 0xD9, 0x6E, 0x20, 0x87, 0x32, 0xD3, 0xD1, 
	0xD9, 0xD9, 0xEA, 0x44, 0x0D, 0x91, 0x62, 0x1C, 
	0x7A, 0x99, 0xDB, 0x88, 0x43, 0xC5, 0x9C, 0x1F, 
	0x2E, 0x2C, 0x7D, 0x9B, 0x57, 0x7D, 0x51, 0x2C, 
	0x16, 0x6D, 0x6F, 0x7E, 0x1A, 0xAD, 0x4A, 0x77, 
	0x4A, 0x37, 0x44, 0x7E, 0x78, 0xFE, 0x20, 0x21, 
	0xE1, 0x4A, 0x95, 0xD1, 0x12, 0xA0, 0x68, 0xAD, 
	0xA0, 0x19, 0xF4, 0x63, 0xC7, 0xA5, 0x56, 0x85, 
	0xAA, 0xBB, 0x68, 0x88, 0xB9, 0x24, 0x64, 0x83, 
	0xD1, 0x8B, 0x9C, 0x80, 0x6F, 0x47, 0x49, 0x18, 
	0x33, 0x17, 0x82, 0x34, 0x4A, 0x4B, 0x85, 0x31, 
	0x33, 0x4B, 0x26, 0x30, 0x32, 0x63, 0xD9, 0xD2, 
	0xEB, 0x4F, 0x4B, 0xB9, 0x96, 0x02, 0xB3, 0x52, 
	0xF6, 0xAE, 0x40, 0x46, 0xC6, 0x9A, 0x5E, 0x7E, 
	0x8E, 0x4A, 0x18, 0xEF, 0x9B, 0xC0, 0xA2, 0xDE, 
	0xD6, 0x13, 0x10, 0x41, 0x70, 0x12, 0xFD, 0x82, 
	0x4C, 0xC1, 0x16, 0xCF, 0xB7, 0xC4, 0xC1, 0xF7, 
	0xEC, 0x71, 0x77, 0xA1, 0x74, 0x46, 0xCB, 0xDE, 
	0x96, 0xF3, 0xED, 0xD8, 0x8F, 0xCD, 0x05, 0x2F, 
	0x0B, 0x88, 0x8A, 0x45, 0xFD, 0xAF, 0x2B, 0x63, 
	0x13, 0x54, 0xF4, 0x0D, 0x16, 0xE5, 0xFA, 0x9C, 
	0x2C, 0x4E, 0xDA, 0x98, 0xE7, 0x98, 0xD1, 0x5E, 
	0x60, 0x46, 0xDC, 0x53, 0x63, 0xF3, 0x09, 0x6B, 
	0x2C, 0x60, 0x7A, 0x9D, 0x8D, 0xD5, 0x5B, 0x15, 
	0x02, 0xA6, 0xAC, 0x7D, 0x3C, 0xC8, 0xD8, 0xC5, 
	0x75, 0x99, 0x8E, 0x7D, 0x79, 0x69, 0x10, 0xC8, 
	0x04, 0xC4, 0x95, 0x23, 0x50, 0x57, 0xE9, 0x1E, 
	0xCD, 0x26, 0x37, 0xC9, 0xC1, 0x84, 0x51, 0x51, 
	0xAC, 0x6B, 0x9A, 0x04, 0x90, 0xAE, 0x3E, 0xC6, 
	0xF4, 0x77, 0x40, 0xA0, 0xDB, 0x0B, 0xA3, 0x6D, 
	0x07, 0x59, 0x56, 0xCE, 0xE7, 0x35, 0x4E, 0xA3, 
	0xE9, 0xA4, 0xF2, 0x72, 0x0B, 0x26, 0x55, 0x0C, 
	0x7D, 0x39, 0x43, 0x24, 0xBC, 0x0C, 0xB7, 0xE9, 
	0x31, 0x7D, 0x8A, 0x86, 0x61, 0xF4, 0x21, 0x91, 
	0xFF, 0x10, 0xB0, 0x82, 0x56, 0xCE, 0x3F, 0xD2, 
	0x5B, 0x74, 0x5E, 0x51, 0x94, 0x90, 0x6B, 0x4D, 
	0x61, 0xCB, 0x4C, 0x2E, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x43, 0x41, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x7B, 0xE8, 0xEF, 0x6C, 
	0xB2, 0x79, 0xC9, 0xE2, 0xEE, 0xE1, 0x21, 0xC6, 
	0xEA, 0xF4, 0x4F, 0xF6, 0x39, 0xF8, 0x8F, 0x07, 
	0x8B, 0x4B, 0x77, 0xED, 0x9F, 0x95, 0x60, 0xB0, 
	0x35, 0x82, 0x81, 0xB5, 0x0E, 0x55, 0xAB, 0x72, 
	0x11, 0x15, 0xA1, 0x77, 0x70, 0x3C, 0x7A, 0x30, 
	0xFE, 0x3A, 0xE9, 0xEF, 0x1C, 0x60, 0xBC, 0x1D, 
	0x97, 0x46, 0x76, 0xB2, 0x3A, 0x68, 0xCC, 0x04, 
	0xB1, 0x98, 0x52, 0x5B, 0xC9, 0x68, 0xF1, 0x1D, 
	0xE2, 0xDB, 0x50, 0xE4, 0xD9, 0xE7, 0xF0, 0x71, 
	0xE5, 0x62, 0xDA, 0xE2, 0x09, 0x22, 0x33, 0xE9, 
	0xD3, 0x63, 0xF6, 0x1D, 0xD7, 0xC1, 0x9F, 0xF3, 
	0xA4, 0xA9, 0x1E, 0x8F, 0x65, 0x53, 0xD4, 0x71, 
	0xDD, 0x7B, 0x84, 0xB9, 0xF1, 0xB8, 0xCE, 0x73, 
	0x35, 0xF0, 0xF5, 0x54, 0x05, 0x63, 0xA1, 0xEA, 
	0xB8, 0x39, 0x63, 0xE0, 0x9B, 0xE9, 0x01, 0x01, 
	0x1F, 0x99, 0x54, 0x63, 0x61, 0x28, 0x70, 0x20, 
	0xE9, 0xCC, 0x0D, 0xAB, 0x48, 0x7F, 0x14, 0x0D, 
	0x66, 0x26, 0xA1, 0x83, 0x6D, 0x27, 0x11, 0x1F, 
	0x20, 0x68, 0xDE, 0x47, 0x72, 0x14, 0x91, 0x51, 
	0xCF, 0x69, 0xC6, 0x1B, 0xA6, 0x0E, 0xF9, 0xD9, 
	0x49, 0xA0, 0xF7, 0x1F, 0x54, 0x99, 0xF2, 0xD3, 
	0x9A, 0xD2, 0x8C, 0x70, 0x05, 0x34, 0x82, 0x93, 
	0xC4, 0x31, 0xFF, 0xBD, 0x33, 0xF6, 0xBC, 0xA6, 
	0x0D, 0xC7, 0x19, 0x5E, 0xA2, 0xBC, 0xC5, 0x6D, 
	0x20, 0x0B, 0xAF, 0x6D, 0x06, 0xD0, 0x9C, 0x41, 
	0xDB, 0x8D, 0xE9, 0xC7, 0x20, 0x15, 0x4C, 0xA4, 
	0x83, 0x2B, 0x69, 0xC0, 0x8C, 0x69, 0xCD, 0x3B, 
	0x07, 0x3A, 0x00, 0x63, 0x60, 0x2F, 0x46, 0x2D, 
	0x33, 0x80, 0x61, 0xA5, 0xEA, 0x6C, 0x91, 0x5C, 
	0xD5, 0x62, 0x35, 0x79, 0xC3, 0xEB, 0x64, 0xCE, 
	0x44, 0xEF, 0x58, 0x6D, 0x14, 0xBA, 0xAA, 0x88, 
	0x34, 0x01, 0x9B, 0x3E, 0xEB, 0xEE, 0xD3, 0x79, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char xsC_tpki_cert[0x300] = 
{
	0x00, 0x01, 0x00, 0x04, 0x91, 0x9E, 0xBE, 0x46, 
	0x4A, 0xD0, 0xF5, 0x52, 0xCD, 0x1B, 0x72, 0xE7, 
	0x88, 0x49, 0x10, 0xCF, 0x55, 0xA9, 0xF0, 0x2E, 
	0x50, 0x78, 0x96, 0x41, 0xD8, 0x96, 0x68, 0x3D, 
	0xC0, 0x05, 0xBD, 0x0A, 0xEA, 0x87, 0x07, 0x9D, 
	0x8A, 0xC2, 0x84, 0xC6, 0x75, 0x06, 0x5F, 0x74, 
	0xC8, 0xBF, 0x37, 0xC8, 0x80, 0x44, 0x40, 0x95, 
	0x02, 0xA0, 0x22, 0x98, 0x0B, 0xB8, 0xAD, 0x48, 
	0x38, 0x3F, 0x6D, 0x28, 0xA7, 0x9D, 0xE3, 0x96, 
	0x26, 0xCC, 0xB2, 0xB2, 0x2A, 0x0F, 0x19, 0xE4, 
	0x10, 0x32, 0xF0, 0x94, 0xB3, 0x9F, 0xF0, 0x13, 
	0x31, 0x46, 0xDE, 0xC8, 0xF6, 0xC1, 0xA9, 0xD5, 
	0x5C, 0xD2, 0x8D, 0x9E, 0x1C, 0x47, 0xB3, 0xD1, 
	0x1F, 0x4F, 0x54, 0x26, 0xC2, 0xC7, 0x80, 0x13, 
	0x5A, 0x27, 0x75, 0xD3, 0xCA, 0x67, 0x9B, 0xC7, 
	0xE8, 0x34, 0xF0, 0xE0, 0xFB, 0x58, 0xE6, 0x88, 
	0x60, 0xA7, 0x13, 0x30, 0xFC, 0x95, 0x79, 0x17, 
	0x93, 0xC8, 0xFB, 0xA9, 0x35, 0xA7, 0xA6, 0x90, 
	0x8F, 0x22, 0x9D, 0xEE, 0x2A, 0x0C, 0xA6, 0xB9, 
	0xB2, 0x3B, 0x12, 0xD4, 0x95, 0xA6, 0xFE, 0x19, 
	0xD0, 0xD7, 0x26, 0x48, 0x21, 0x68, 0x78, 0x60, 
	0x5A, 0x66, 0x53, 0x8D, 0xBF, 0x37, 0x68, 0x99, 
	0x90, 0x5D, 0x34, 0x45, 0xFC, 0x5C, 0x72, 0x7A, 
	0x0E, 0x13, 0xE0, 0xE2, 0xC8, 0x97, 0x1C, 0x9C, 
	0xFA, 0x6C, 0x60, 0x67, 0x88, 0x75, 0x73, 0x2A, 
	0x4E, 0x75, 0x52, 0x3D, 0x2F, 0x56, 0x2F, 0x12, 
	0xAA, 0xBD, 0x15, 0x73, 0xBF, 0x06, 0xC9, 0x40, 
	0x54, 0xAE, 0xFA, 0x81, 0xA7, 0x14, 0x17, 0xAF, 
	0x9A, 0x4A, 0x06, 0x6D, 0x0F, 0xFC, 0x5A, 0xD6, 
	0x4B, 0xAB, 0x28, 0xB1, 0xFF, 0x60, 0x66, 0x1F, 
	0x44, 0x37, 0xD4, 0x9E, 0x1E, 0x0D, 0x94, 0x12, 
	0xEB, 0x4B, 0xCA, 0xCF, 0x4C, 0xFD, 0x6A, 0x34, 
	0x08, 0x84, 0x79, 0x82, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x58, 0x53, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x63, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x7A, 0x08, 0x94, 
	0xAD, 0x50, 0x5B, 0xB6, 0xC6, 0x7E, 0x2E, 0x5B, 
	0xDD, 0x6A, 0x3B, 0xEC, 0x43, 0xD9, 0x10, 0xC7, 
	0x72, 0xE9, 0xCC, 0x29, 0x0D, 0xA5, 0x85, 0x88, 
	0xB7, 0x7D, 0xCC, 0x11, 0x68, 0x0B, 0xB3, 0xE2, 
	0x9F, 0x4E, 0xAB, 0xBB, 0x26, 0xE9, 0x8C, 0x26, 
	0x01, 0x98, 0x5C, 0x04, 0x1B, 0xB1, 0x43, 0x78, 
	0xE6, 0x89, 0x18, 0x1A, 0xAD, 0x77, 0x05, 0x68, 
	0xE9, 0x28, 0xA2, 0xB9, 0x81, 0x67, 0xEE, 0x3E, 
	0x10, 0xD0, 0x72, 0xBE, 0xEF, 0x1F, 0xA2, 0x2F, 
	0xA2, 0xAA, 0x3E, 0x13, 0xF1, 0x1E, 0x18, 0x36, 
	0xA9, 0x2A, 0x42, 0x81, 0xEF, 0x70, 0xAA, 0xF4, 
	0xE4, 0x62, 0x99, 0x82, 0x21, 0xC6, 0xFB, 0xB9, 
	0xBD, 0xD0, 0x17, 0xE6, 0xAC, 0x59, 0x04, 0x94, 
	0xE9, 0xCE, 0xA9, 0x85, 0x9C, 0xEB, 0x2D, 0x2A, 
	0x4C, 0x17, 0x66, 0xF2, 0xC3, 0x39, 0x12, 0xC5, 
	0x8F, 0x14, 0xA8, 0x03, 0xE3, 0x6F, 0xCC, 0xDC, 
	0xCC, 0xDC, 0x13, 0xFD, 0x7A, 0xE7, 0x7C, 0x7A, 
	0x78, 0xD9, 0x97, 0xE6, 0xAC, 0xC3, 0x55, 0x57, 
	0xE0, 0xD3, 0xE9, 0xEB, 0x64, 0xB4, 0x3C, 0x92, 
	0xF4, 0xC5, 0x0D, 0x67, 0xA6, 0x02, 0xDE, 0xB3, 
	0x91, 0xB0, 0x66, 0x61, 0xCD, 0x32, 0x88, 0x0B, 
	0xD6, 0x49, 0x12, 0xAF, 0x1C, 0xBC, 0xB7, 0x16, 
	0x2A, 0x06, 0xF0, 0x25, 0x65, 0xD3, 0xB0, 0xEC, 
	0xE4, 0xFC, 0xEC, 0xDD, 0xAE, 0x8A, 0x49, 0x34, 
	0xDB, 0x8E, 0xE6, 0x7F, 0x30, 0x17, 0x98, 0x62, 
	0x21, 0x15, 0x5D, 0x13, 0x1C, 0x6C, 0x3F, 0x09, 
	0xAB, 0x19, 0x45, 0xC2, 0x06, 0xAC, 0x70, 0xC9, 
	0x42, 0xB3, 0x6F, 0x49, 0xA1, 0x18, 0x3B, 0xCD, 
	0x78, 0xB6, 0xE4, 0xB4, 0x7C, 0x6C, 0x5C, 0xAC, 
	0x0F, 0x8D, 0x62, 0xF8, 0x97, 0xC6, 0x95, 0x3D, 
	0xD1, 0x2F, 0x28, 0xB7, 0x0C, 0x5B, 0x7D, 0xF7, 
	0x51, 0x81, 0x9A, 0x98, 0x34, 0x65, 0x26, 0x25, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char cpB_tpki_cert[0x300] = 
{
	0x00, 0x01, 0x00, 0x04, 0x2E, 0xA6, 0x6C, 0x66, 
	0xCF, 0xF3, 0x35, 0x79, 0x7D, 0x04, 0x97, 0xB7, 
	0x7A, 0x19, 0x7F, 0x9F, 0xE5, 0x1A, 0xB5, 0xA4, 
	0x13, 0x75, 0xDC, 0x73, 0xFD, 0x9E, 0x0B, 0x10, 
	0x66, 0x9B, 0x1B, 0x9A, 0x5B, 0x7E, 0x8A, 0xB2, 
	0x8F, 0x01, 0xB6, 0x7B, 0x62, 0x54, 0xC1, 0x4A, 
	0xA1, 0x33, 0x14, 0x18, 0xF2, 0x5B, 0xA5, 0x49, 
	0x00, 0x4C, 0x37, 0x8D, 0xD7, 0x2F, 0x0C, 0xE6, 
	0x3B, 0x1F, 0x70, 0x91, 0xAA, 0xFE, 0x38, 0x09, 
	0xB7, 0xAC, 0x6C, 0x28, 0x76, 0xA6, 0x1D, 0x60, 
	0x51, 0x6C, 0x43, 0xA6, 0x37, 0x29, 0x16, 0x2D, 
	0x28, 0x0B, 0xE2, 0x1B, 0xE8, 0xE2, 0xFE, 0x05, 
	0x7D, 0x8E, 0xB6, 0xE2, 0x04, 0x24, 0x22, 0x45, 
	0x73, 0x1A, 0xB6, 0xFE, 0xE3, 0x0E, 0x53, 0x35, 
	0x37, 0x3E, 0xEB, 0xA9, 0x70, 0xD5, 0x31, 0xBB, 
	0xA2, 0xCB, 0x22, 0x2D, 0x96, 0x84, 0x38, 0x7D, 
	0x5F, 0x2A, 0x1B, 0xF7, 0x52, 0x00, 0xCE, 0x06, 
	0x56, 0xE3, 0x90, 0xCE, 0x19, 0x13, 0x5B, 0x59, 
	0xE1, 0x4F, 0x0F, 0xA5, 0xC1, 0x28, 0x1A, 0x73, 
	0x86, 0xCC, 0xD1, 0xC8, 0xEC, 0x3F, 0xAD, 0x70, 
	0xFB, 0xCE, 0x74, 0xDE, 0xEE, 0x1F, 0xD0, 0x5F, 
	0x46, 0x33, 0x0B, 0x51, 0xF9, 0xB7, 0x9E, 0x1D, 
	0xDB, 0xF4, 0xE3, 0x3F, 0x14, 0x88, 0x9D, 0x05, 
	0x28, 0x29, 0x24, 0xC5, 0xF5, 0xDC, 0x27, 0x66, 
	0xEF, 0x06, 0x27, 0xD7, 0xEE, 0xDC, 0x73, 0x6E, 
	0x67, 0xC2, 0xE5, 0xB9, 0x38, 0x34, 0x66, 0x80, 
	0x72, 0x21, 0x6D, 0x1C, 0x78, 0xB8, 0x23, 0xA0, 
	0x72, 0xD3, 0x4F, 0xF3, 0xEC, 0xF9, 0xBD, 0x11, 
	0xA2, 0x9A, 0xF1, 0x6C, 0x33, 0xBD, 0x09, 0xAF, 
	0xB2, 0xD7, 0x4D, 0x53, 0x4E, 0x02, 0x7C, 0x19, 
	0x24, 0x0D, 0x59, 0x5A, 0x68, 0xEB, 0xB3, 0x05, 
	0xAC, 0xC4, 0x4A, 0xB3, 0x8A, 0xB8, 0x20, 0xC6, 
	0xD4, 0x26, 0x56, 0x0C, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x52, 0x6F, 0x6F, 0x74, 0x2D, 0x43, 0x41, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x43, 0x50, 0x30, 0x30, 
	0x30, 0x30, 0x30, 0x30, 0x30, 0x62, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x13, 0x7A, 0x08, 0x0B, 
	0xA6, 0x89, 0xC5, 0x90, 0xFD, 0x0B, 0x2F, 0x0D, 
	0x4F, 0x56, 0xB6, 0x32, 0xFB, 0x93, 0x4E, 0xD0, 
	0x73, 0x95, 0x17, 0xB3, 0x3A, 0x79, 0xDE, 0x04, 
	0x0E, 0xE9, 0x2D, 0xC3, 0x1D, 0x37, 0xC7, 0xF7, 
	0x3B, 0xF0, 0x4B, 0xD3, 0xE4, 0x4E, 0x20, 0xAB, 
	0x5A, 0x6F, 0xEA, 0xF5, 0x98, 0x4C, 0xC1, 0xF6, 
	0x06, 0x2E, 0x9A, 0x9F, 0xE5, 0x6C, 0x32, 0x85, 
	0xDC, 0x6F, 0x25, 0xDD, 0xD5, 0xD0, 0xBF, 0x9F, 
	0xE2, 0xEF, 0xE8, 0x35, 0xDF, 0x26, 0x34, 0xED, 
	0x93, 0x7F, 0xAB, 0x02, 0x14, 0xD1, 0x04, 0x80, 
	0x9C, 0xF7, 0x4B, 0x86, 0x0E, 0x6B, 0x04, 0x83, 
	0xF4, 0xCD, 0x2D, 0xAB, 0x2A, 0x96, 0x02, 0xBC, 
	0x56, 0xF0, 0xD6, 0xBD, 0x94, 0x6A, 0xED, 0x6E, 
	0x0B, 0xE4, 0xF0, 0x8F, 0x26, 0x68, 0x6B, 0xD0, 
	0x9E, 0xF7, 0xDB, 0x32, 0x5F, 0x82, 0xB1, 0x8F, 
	0x6A, 0xF2, 0xED, 0x52, 0x5B, 0xFD, 0x82, 0x8B, 
	0x65, 0x3F, 0xEE, 0x6E, 0xCE, 0x40, 0x0D, 0x5A, 
	0x48, 0xFF, 0xE2, 0x2D, 0x53, 0x8B, 0xB5, 0x33, 
	0x5B, 0x41, 0x53, 0x34, 0x2D, 0x43, 0x35, 0xAC, 
	0xF5, 0x90, 0xD0, 0xD3, 0x0A, 0xE2, 0x04, 0x3C, 
	0x7F, 0x5A, 0xD2, 0x14, 0xFC, 0x9C, 0x0F, 0xE6, 
	0xFA, 0x40, 0xA5, 0xC8, 0x65, 0x06, 0xCA, 0x63, 
	0x69, 0xBC, 0xEE, 0x44, 0xA3, 0x2D, 0x9E, 0x69, 
	0x5C, 0xF0, 0x0B, 0x4F, 0xD7, 0x9A, 0xDB, 0x56, 
	0x8D, 0x14, 0x9C, 0x20, 0x28, 0xA1, 0x4C, 0x9D, 
	0x71, 0xB8, 0x50, 0xCA, 0x36, 0x5B, 0x37, 0xF7, 
	0x0B, 0x65, 0x77, 0x91, 0xFC, 0x5D, 0x72, 0x8C, 
	0x4E, 0x18, 0xFD, 0x22, 0x55, 0x7C, 0x40, 0x62, 
	0xD7, 0x47, 0x71, 0x53, 0x3C, 0x70, 0x17, 0x9D, 
	0x3D, 0xAE, 0x8F, 0x92, 0xB1, 0x17, 0xE4, 0x5C, 
	0xB3, 0x32, 0xF3, 0xB3, 0xC2, 0xA2, 0x2E, 0x70, 
	0x5C, 0xFE, 0xC6, 0x6F, 0x6D, 0xA3, 0x77, 0x2B, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};