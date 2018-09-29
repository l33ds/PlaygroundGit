/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 09 16:26:09 2004
 */
/* Compiler settings for F:\Limbl\Develope\CodeProject\TEventHandler\EventFiringObject\EventFiringObject.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __EventFiringObject_h__
#define __EventFiringObject_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IEventFiringObject_FWD_DEFINED__
#define __IEventFiringObject_FWD_DEFINED__
typedef interface IEventFiringObject IEventFiringObject;
#endif 	/* __IEventFiringObject_FWD_DEFINED__ */


#ifndef ___IEventFiringObjectEvents_FWD_DEFINED__
#define ___IEventFiringObjectEvents_FWD_DEFINED__
typedef interface _IEventFiringObjectEvents _IEventFiringObjectEvents;
#endif 	/* ___IEventFiringObjectEvents_FWD_DEFINED__ */


#ifndef __EventFiringObject_FWD_DEFINED__
#define __EventFiringObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class EventFiringObject EventFiringObject;
#else
typedef struct EventFiringObject EventFiringObject;
#endif /* __cplusplus */

#endif 	/* __EventFiringObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IEventFiringObject_INTERFACE_DEFINED__
#define __IEventFiringObject_INTERFACE_DEFINED__

/* interface IEventFiringObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IEventFiringObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E396CC0-A266-481E-B6B4-0CB564DAA3BC")
    IEventFiringObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TestFunction( 
            /* [in] */ long lValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEventFiringObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEventFiringObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEventFiringObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEventFiringObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IEventFiringObject __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IEventFiringObject __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IEventFiringObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IEventFiringObject __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TestFunction )( 
            IEventFiringObject __RPC_FAR * This,
            /* [in] */ long lValue);
        
        END_INTERFACE
    } IEventFiringObjectVtbl;

    interface IEventFiringObject
    {
        CONST_VTBL struct IEventFiringObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventFiringObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEventFiringObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEventFiringObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEventFiringObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IEventFiringObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IEventFiringObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IEventFiringObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IEventFiringObject_TestFunction(This,lValue)	\
    (This)->lpVtbl -> TestFunction(This,lValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IEventFiringObject_TestFunction_Proxy( 
    IEventFiringObject __RPC_FAR * This,
    /* [in] */ long lValue);


void __RPC_STUB IEventFiringObject_TestFunction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEventFiringObject_INTERFACE_DEFINED__ */



#ifndef __EVENTFIRINGOBJECTLib_LIBRARY_DEFINED__
#define __EVENTFIRINGOBJECTLib_LIBRARY_DEFINED__

/* library EVENTFIRINGOBJECTLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_EVENTFIRINGOBJECTLib;

#ifndef ___IEventFiringObjectEvents_DISPINTERFACE_DEFINED__
#define ___IEventFiringObjectEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IEventFiringObjectEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IEventFiringObjectEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("32F2B52C-1C07-43BC-879B-04C70A7FA148")
    _IEventFiringObjectEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IEventFiringObjectEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IEventFiringObjectEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IEventFiringObjectEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IEventFiringObjectEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IEventFiringObjectEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IEventFiringObjectEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IEventFiringObjectEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IEventFiringObjectEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IEventFiringObjectEventsVtbl;

    interface _IEventFiringObjectEvents
    {
        CONST_VTBL struct _IEventFiringObjectEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IEventFiringObjectEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IEventFiringObjectEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IEventFiringObjectEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IEventFiringObjectEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IEventFiringObjectEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IEventFiringObjectEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IEventFiringObjectEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IEventFiringObjectEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_EventFiringObject;

#ifdef __cplusplus

class DECLSPEC_UUID("A17BC235-A924-4FFE-8D96-22068CEA9959")
EventFiringObject;
#endif
#endif /* __EVENTFIRINGOBJECTLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
