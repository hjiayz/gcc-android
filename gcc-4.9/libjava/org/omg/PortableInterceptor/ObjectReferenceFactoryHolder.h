
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_ObjectReferenceFactoryHolder__
#define __org_omg_PortableInterceptor_ObjectReferenceFactoryHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class ObjectReferenceFactory;
          class ObjectReferenceFactoryHolder;
      }
    }
  }
}

class org::omg::PortableInterceptor::ObjectReferenceFactoryHolder : public ::java::lang::Object
{

public:
  ObjectReferenceFactoryHolder();
  ObjectReferenceFactoryHolder(::org::omg::PortableInterceptor::ObjectReferenceFactory *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  ::org::omg::PortableInterceptor::ObjectReferenceFactory * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_ObjectReferenceFactoryHolder__
