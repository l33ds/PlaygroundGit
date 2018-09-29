/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 09 16:26:09 2004
 */
/* Compiler settings for F:\Limbl\Develope\CodeProject\TEventHandler\EventFiringObject\EventFiringObject.idl:
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

const IID IID_IEventFiringObject = {0x8E396CC0,0xA266,0x481E,{0xB6,0xB4,0x0C,0xB5,0x64,0xDA,0xA3,0xBC}};


const IID LIBID_EVENTFIRINGOBJECTLib = {0x0B199966,0x76EA,0x479F,{0x88,0x1D,0xED,0x7C,0xB5,0xF3,0x45,0x7B}};


const IID DIID__IEventFiringObjectEvents = {0x32F2B52C,0x1C07,0x43BC,{0x87,0x9B,0x04,0xC7,0x0A,0x7F,0xA1,0x48}};


const CLSID CLSID_EventFiringObject = {0xA17BC235,0xA924,0x4FFE,{0x8D,0x96,0x22,0x06,0x8C,0xEA,0x99,0x59}};


#ifdef __cplusplus
}
#endif

