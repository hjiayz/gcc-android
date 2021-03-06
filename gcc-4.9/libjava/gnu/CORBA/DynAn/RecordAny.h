
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_DynAn_RecordAny__
#define __gnu_CORBA_DynAn_RecordAny__

#pragma interface

#include <gnu/CORBA/DynAn/DivideableAny.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace DynAn
      {
          class RecordAny;
          class gnuDynAnyFactory;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class ORB;
          class TCKind;
          class TypeCode;
      }
      namespace DynamicAny
      {
          class DynAny;
          class NameDynAnyPair;
          class NameValuePair;
      }
    }
  }
}

class gnu::CORBA::DynAn::RecordAny : public ::gnu::CORBA::DynAn::DivideableAny
{

public:
  RecordAny(::org::omg::CORBA::TypeCode *, ::org::omg::CORBA::TypeCode *, ::gnu::CORBA::DynAn::gnuDynAnyFactory *, ::org::omg::CORBA::ORB *);
  virtual ::org::omg::CORBA::TCKind * current_member_kind();
  virtual ::java::lang::String * current_member_name();
  virtual JArray< ::org::omg::DynamicAny::NameDynAnyPair * > * gnu_get_members_as_dyn_any();
  virtual JArray< ::org::omg::DynamicAny::NameValuePair * > * gnu_get_members();
  virtual void set_members_as_dyn_any(JArray< ::org::omg::DynamicAny::NameDynAnyPair * > *);
private:
  void checkName(::java::lang::String *, jint);
  void checkType(::org::omg::CORBA::TypeCode *, jint);
public:
  virtual void set_members(JArray< ::org::omg::DynamicAny::NameValuePair * > *);
  virtual void assign(::org::omg::DynamicAny::DynAny *);
  virtual ::org::omg::DynamicAny::DynAny * copy();
public: // actually protected
  virtual ::gnu::CORBA::DynAn::RecordAny * newInstance(::org::omg::CORBA::TypeCode *, ::org::omg::CORBA::TypeCode *, ::gnu::CORBA::DynAn::gnuDynAnyFactory *, ::org::omg::CORBA::ORB *) = 0;
public:
  virtual ::org::omg::CORBA::Any * to_any();
  virtual void from_any(::org::omg::CORBA::Any *);
private:
  static const jlong serialVersionUID = 1LL;
public: // actually package-private
  JArray< ::java::lang::String * > * __attribute__((aligned(__alignof__( ::gnu::CORBA::DynAn::DivideableAny)))) fNames;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_DynAn_RecordAny__
