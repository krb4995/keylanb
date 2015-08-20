#include "image_def.h"

#define SOFT_IMAGE_ERROR_FILE_OPEN 0x02

#define SOFT_JPEG_OK 0x0
#define SOFT_JPEG_ERROR_MEMORY 0x1
#define SOFT_JPEG_ERROR_DECODING 0x04
#define SOFT_JPEG_ERROR_CORRUPT_DATA 0x08

#define JPEG_MODE_PROGRESSIVE 0
#define JPEG_MODE_NON_PROGRESSIVE 1

typedef struct JPEG_INFO {
	int nColorComponents;
	int mode;
} JPEG_INFO;

int readJpegHeader(FILE *jpegFile, JPEG_INFO *jpegInfo);
int softDecodeJpeg(FILE *jpegFile, IMAGE *jpeg);

#define SOFT_PNG_OK 0x0
#define SOFT_PNG_ERROR_MEMORY 0x1
#define SOFT_PNG_ERROR_DECODING 0x04
#define SOFT_PNG_ERROR_INIT 0x08
#define SOFT_PNG_ERROR_CREATE_STRUCT 0x10

int softDecodePng(FILE *pngFile, IMAGE* png); 

#define SOFT_BMP_OK 0x0
#define SOFT_BMP_ERROR_MEMORY 0x1
#define SOFT_BMP_ERROR_DECODING 0x04
#define SOFT_BMP_ERROR_ANALYSING 0x08

int softDecodeBMP(FILE *bmpFile, IMAGE* bmpImage);

/* Get Image from Url */
char* getImageFromUrl(const char *url, size_t *size);
