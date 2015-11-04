// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __KUKACommanderTypes_hh__
#define __KUKACommanderTypes_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE orogen

_CORBA_MODULE_BEG

  _CORBA_MODULE Corba

  _CORBA_MODULE_BEG

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_vector__double_;

    class vector__double__var;

    class vector__double_ : public _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 >  {
    public:
      typedef vector__double__var _var_type;
      inline vector__double_() {}
      inline vector__double_(const vector__double_& _s)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 > (_s) {}

      inline vector__double_(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 > (_max) {}
      inline vector__double_(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Double* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 > (_max, _len, _val, _rel) {}

    

      inline vector__double_& operator = (const vector__double_& _s) {
        _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 > ::operator=(_s);
        return *this;
      }
    };

    class vector__double__out;

    class vector__double__var {
    public:
      inline vector__double__var() : _pd_seq(0) {}
      inline vector__double__var(vector__double_* _s) : _pd_seq(_s) {}
      inline vector__double__var(const vector__double__var& _s) {
        if( _s._pd_seq )  _pd_seq = new vector__double_(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~vector__double__var() { if( _pd_seq )  delete _pd_seq; }
        
      inline vector__double__var& operator = (vector__double_* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline vector__double__var& operator = (const vector__double__var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new vector__double_;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Double& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline vector__double_* operator -> () { return _pd_seq; }
      inline const vector__double_* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator vector__double_& () const { return *_pd_seq; }
#else
      inline operator const vector__double_& () const { return *_pd_seq; }
      inline operator vector__double_& () { return *_pd_seq; }
#endif
        
      inline const vector__double_& in() const { return *_pd_seq; }
      inline vector__double_&       inout()    { return *_pd_seq; }
      inline vector__double_*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline vector__double_* _retn() { vector__double_* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class vector__double__out;
      
    private:
      vector__double_* _pd_seq;
    };

    class vector__double__out {
    public:
      inline vector__double__out(vector__double_*& _s) : _data(_s) { _data = 0; }
      inline vector__double__out(vector__double__var& _s)
        : _data(_s._pd_seq) { _s = (vector__double_*) 0; }
      inline vector__double__out(const vector__double__out& _s) : _data(_s._data) {}
      inline vector__double__out& operator = (const vector__double__out& _s) {
        _data = _s._data;
        return *this;
      }
      inline vector__double__out& operator = (vector__double_* _s) {
        _data = _s;
        return *this;
      }
      inline operator vector__double_*&()  { return _data; }
      inline vector__double_*& ptr()       { return _data; }
      inline vector__double_* operator->() { return _data; }

      inline ::CORBA::Double& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      vector__double_*& _data;

    private:
      vector__double__out();
      vector__double__out& operator=(const vector__double__var&);
    };

    struct KUKACommanderData {
      typedef _CORBA_ConstrType_Variable_Var<KUKACommanderData> _var_type;

      
      vector__double_ samples;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef KUKACommanderData::_var_type KUKACommanderData_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< KUKACommanderData,KUKACommanderData_var > KUKACommanderData_out;

    _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_KUKACommanderData;

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE Corba
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_orogen
_CORBA_MODULE_BEG

  _CORBA_MODULE Corba
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const orogen::Corba::vector__double_& _s);
void operator<<=(::CORBA::Any& _a, orogen::Corba::vector__double_* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::Corba::vector__double_*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::Corba::vector__double_*& _sp);

extern void operator<<=(::CORBA::Any& _a, const orogen::Corba::KUKACommanderData& _s);
extern void operator<<=(::CORBA::Any& _a, orogen::Corba::KUKACommanderData* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, orogen::Corba::KUKACommanderData*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const orogen::Corba::KUKACommanderData*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_KUKACommanderTypes
#endif

#endif  // __KUKACommanderTypes_hh__

