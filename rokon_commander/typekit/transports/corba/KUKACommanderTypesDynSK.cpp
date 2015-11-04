// This file is generated by omniidl (C++ backend) - omniORB_4_1. Do not edit.

#include "KUKACommanderTypesC.h"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_1_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::TypeCode_ptr _0RL_tc_orogen_mCorba_mvector____double__ = CORBA::TypeCode::PR_alias_tc("IDL:orogen/Corba/vector__double_:1.0", "vector__double_", CORBA::TypeCode::PR_sequence_tc(0, CORBA::TypeCode::PR_double_tc(), &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace orogen { namespace Corba { 
  const ::CORBA::TypeCode_ptr _tc_vector__double_ = _0RL_tc_orogen_mCorba_mvector____double__;
} } 
#else
const ::CORBA::TypeCode_ptr orogen::Corba::_tc_vector__double_ = _0RL_tc_orogen_mCorba_mvector____double__;
#endif

static CORBA::PR_structMember _0RL_structmember_orogen_mCorba_mKUKACommanderData[] = {
  {"samples", _0RL_tc_orogen_mCorba_mvector____double__}
};

#ifdef _0RL_tc_orogen_mCorba_mKUKACommanderData
#  undef _0RL_tc_orogen_mCorba_mKUKACommanderData
#endif
static CORBA::TypeCode_ptr _0RL_tc_orogen_mCorba_mKUKACommanderData = CORBA::TypeCode::PR_struct_tc("IDL:orogen/Corba/KUKACommanderData:1.0", "KUKACommanderData", _0RL_structmember_orogen_mCorba_mKUKACommanderData, 1, &_0RL_tcTrack);

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace orogen { namespace Corba { 
  const ::CORBA::TypeCode_ptr _tc_KUKACommanderData = _0RL_tc_orogen_mCorba_mKUKACommanderData;
} } 
#else
const ::CORBA::TypeCode_ptr orogen::Corba::_tc_KUKACommanderData = _0RL_tc_orogen_mCorba_mKUKACommanderData;
#endif


static void _0RL_orogen_mCorba_mvector____double___marshal_fn(cdrStream& _s, void* _v)
{
  orogen::Corba::vector__double_* _p = (orogen::Corba::vector__double_*)_v;
  *_p >>= _s;
}
static void _0RL_orogen_mCorba_mvector____double___unmarshal_fn(cdrStream& _s, void*& _v)
{
  orogen::Corba::vector__double_* _p = new orogen::Corba::vector__double_;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_orogen_mCorba_mvector____double___destructor_fn(void* _v)
{
  orogen::Corba::vector__double_* _p = (orogen::Corba::vector__double_*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const orogen::Corba::vector__double_& _s)
{
  orogen::Corba::vector__double_* _p = new orogen::Corba::vector__double_(_s);
  _a.PR_insert(_0RL_tc_orogen_mCorba_mvector____double__,
               _0RL_orogen_mCorba_mvector____double___marshal_fn,
               _0RL_orogen_mCorba_mvector____double___destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, orogen::Corba::vector__double_* _sp)
{
  _a.PR_insert(_0RL_tc_orogen_mCorba_mvector____double__,
               _0RL_orogen_mCorba_mvector____double___marshal_fn,
               _0RL_orogen_mCorba_mvector____double___destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, orogen::Corba::vector__double_*& _sp)
{
  return _a >>= (const orogen::Corba::vector__double_*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const orogen::Corba::vector__double_*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_orogen_mCorba_mvector____double__,
                    _0RL_orogen_mCorba_mvector____double___unmarshal_fn,
                    _0RL_orogen_mCorba_mvector____double___marshal_fn,
                    _0RL_orogen_mCorba_mvector____double___destructor_fn,
                    _v)) {
    _sp = (const orogen::Corba::vector__double_*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_orogen_mCorba_mKUKACommanderData_marshal_fn(cdrStream& _s, void* _v)
{
  orogen::Corba::KUKACommanderData* _p = (orogen::Corba::KUKACommanderData*)_v;
  *_p >>= _s;
}
static void _0RL_orogen_mCorba_mKUKACommanderData_unmarshal_fn(cdrStream& _s, void*& _v)
{
  orogen::Corba::KUKACommanderData* _p = new orogen::Corba::KUKACommanderData;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_orogen_mCorba_mKUKACommanderData_destructor_fn(void* _v)
{
  orogen::Corba::KUKACommanderData* _p = (orogen::Corba::KUKACommanderData*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const orogen::Corba::KUKACommanderData& _s)
{
  orogen::Corba::KUKACommanderData* _p = new orogen::Corba::KUKACommanderData(_s);
  _a.PR_insert(_0RL_tc_orogen_mCorba_mKUKACommanderData,
               _0RL_orogen_mCorba_mKUKACommanderData_marshal_fn,
               _0RL_orogen_mCorba_mKUKACommanderData_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, orogen::Corba::KUKACommanderData* _sp)
{
  _a.PR_insert(_0RL_tc_orogen_mCorba_mKUKACommanderData,
               _0RL_orogen_mCorba_mKUKACommanderData_marshal_fn,
               _0RL_orogen_mCorba_mKUKACommanderData_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, orogen::Corba::KUKACommanderData*& _sp)
{
  return _a >>= (const orogen::Corba::KUKACommanderData*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const orogen::Corba::KUKACommanderData*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_orogen_mCorba_mKUKACommanderData,
                    _0RL_orogen_mCorba_mKUKACommanderData_unmarshal_fn,
                    _0RL_orogen_mCorba_mKUKACommanderData_marshal_fn,
                    _0RL_orogen_mCorba_mKUKACommanderData_destructor_fn,
                    _v)) {
    _sp = (const orogen::Corba::KUKACommanderData*)_v;
    return 1;
  }
  return 0;
}
