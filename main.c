/*
*   Created by Coltyn Gatton on 3/9/18
*
*    Description: This program simulates L1 cache.
*
*/

#include <stdio.h>
#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>

// Cache Size
#define CacheSize_Exp       15
#define CacheSize_Nbr       (1 << CacheSize_Exp)

// Address Size
#define AddressSize_Exp     32

// Cache Associativity
#define CacheAssociativity_Exp      3
#define CacheAssociativity          (1 << CacheAssociativity_Exp)

//	The cache block size exponent, capacity, and mask
#define		BlockSize_Exp		6
#define		BlockSize_Nbr		( 1 << BlockSize_Exp )
#define		BlockSize_Mask		( BlockSize_Nbr - 1 )

//	The number of lines in the cache and the mask
#define		Lines_Exp			( (CacheSize_Exp) - (CacheAssociativity_Exp + BlockSize_Exp) )
#define		Lines_Nbr			( 1 << Lines_Exp )
#define		Lines_Mask			( Lines_Nbr - 1 )

//	Tag size exponent and mask
#define		Tag_Exp				( AddressSize_Exp - BlockSize_Exp - Lines_Exp )
#define		Tag_Nbr				( 1 << Tag_Exp )
#define		Tag_Mask			( Tag_Nbr - 1 )


// ==========================================================================
// Report Parameters






// ==========================================================================
// Main Function

int main (int argc, const char * argv[]) {

    // BlockValid Structure
    typedef struct BlockValid {

    };

    // CacheLineState Structure
    typedef struct CacheLineState {

    };

    // CacheTag Structure
    typedef struct CacheTag {

    };


    typedef struct RoundRobin {

    };


    // Open File
    FILE *ptr_firstIndFile;

    ptr_firstIndFile=fopen("AddressTrace_FirstIndex.bin","rb");
    if (!ptr_firstIndFile)
    {
        printf("Unable to open file!");
        return 1;
    }
    else{
        printf("Opened file\n");

    }
    fclose(ptr_firstIndFile);
    return 0;
}