/* MD4.H - header file for MD4C.C
 */

/* Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
   rights reserved.

   License to copy and use this software is granted provided that it
   is identified as the "RSA Data Security, Inc. MD4 Message-Digest
   Algorithm" in all material mentioning or referencing this software
   or this function.

   License is also granted to make and use derivative works provided
   that such works are identified as "derived from the RSA Data
   Security, Inc. MD4 Message-Digest Algorithm" in all material
   mentioning or referencing the derived work.  
                                                                    
   RSA Data Security, Inc. makes no representations concerning either
   the merchantability of this software or the suitability of this
   software for any particular purpose. It is provided "as is"
   without express or implied warranty of any kind.  
                                                                    
   These notices must be retained in any copies of any part of this
   documentation and/or software.  
 */

/* MD4 context. */
typedef struct {
  U32 state[4];                                   /* state (ABCD) */
  U32 count[2];        /* number of bits, modulo 2^64 (lsb first) */
  U8 buffer[64];                         /* input buffer */
} MD4_CTX;

Rtt_EXPORT void MD4Init( MD4_CTX* );
Rtt_EXPORT void MD4Update( MD4_CTX*, const U8 *, unsigned int );
Rtt_EXPORT void MD4Final( U8 [16], MD4_CTX* );

Rtt_EXPORT void MD4Encode( U8* output, const U32* input, unsigned int len );
Rtt_EXPORT void MD4Decode( U32* output, const U8* input, unsigned int len );
