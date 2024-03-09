/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __MSDAORAGUIDS_DEFINED__
#define __MSDAORAGUIDS_DEFINED__

#ifdef DBINITCONSTANTS

EXTERN_C const CLSID CLSID_MSDAORA = {0xE8CC4CBE,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};
EXTERN_C const CLSID CLSID_MSDAORA_ERROR = {0xE8CC4CBF,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};
EXTERN_C const CLSID CLSID_MSDAORA8 = {0x7f06a373,0xdd6a,0x43db,{0xb4,0xe0,0x1f,0xc1,0x21,0xe5,0xe6,0x2b}};
EXTERN_C const CLSID CLSID_MSDAORA8_ERROR = {0x7f06a374,0xdd6a,0x43db,{0xb4,0xe0,0x1f,0xc1,0x21,0xe5,0xe6,0x2b}};
#else
EXTERN_C const CLSID CLSID_MSDAORA;
EXTERN_C const CLSID CLSID_MSDAORA_ERROR;
EXTERN_C const CLSID CLSID_MSDAORA8;
EXTERN_C const CLSID CLSID_MSDAORA8_ERROR;
#endif

class MSDAORA;
class MSDAORA_ERROR;
class MSDAORA8;
class MSDAORA8_ERROR;

#ifdef DBINITCONSTANTS
extern const GUID OLEDBDECLSPEC DBPROPSET_MSDAORA_ROWSET = {0xE8CC4CBD,0xFDFF,0x11D0,{0xB8,0x65,0x00,0xA0,0xC9,0x08,0x1C,0x1D}};
extern const GUID OLEDBDECLSPEC DBPROPSET_MSDAORA8_ROWSET = {0x7f06a375,0xdd6a,0x43db,{0xb4,0xe0,0x1f,0xc1,0x21,0xe5,0xe6,0x2b}};
#else
extern const GUID DBPROPSET_MSDAORA_ROWSET;
extern const GUID DBPROPSET_MSDAORA8_ROWSET;
#endif

#define DBPROP_MSDAORA_DETERMINEKEYCOLUMNS 1
#define DBPROP_MSDAORA8_DETERMINEKEYCOLUMNS 2
#endif
