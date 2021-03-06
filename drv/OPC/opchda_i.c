/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Apr 10 09:56:29 2002
 */
/* Compiler settings for opchda.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IOPCHDA_Browser = {0x1F1217B1,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_Server = {0x1F1217B0,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_SyncRead = {0x1F1217B2,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_SyncUpdate = {0x1F1217B3,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_SyncAnnotations = {0x1F1217B4,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_AsyncRead = {0x1F1217B5,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_AsyncUpdate = {0x1F1217B6,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_AsyncAnnotations = {0x1F1217B7,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_Playback = {0x1F1217B8,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID IID_IOPCHDA_DataCallback = {0x1F1217B9,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


const IID LIBID_OPCHDA = {0x1F1217BA,0xDEE0,0x11d2,{0xA5,0xE5,0x00,0x00,0x86,0x33,0x93,0x99}};


#ifdef __cplusplus
}
#endif

