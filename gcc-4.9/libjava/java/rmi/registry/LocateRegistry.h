
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_registry_LocateRegistry__
#define __java_rmi_registry_LocateRegistry__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace rmi
    {
      namespace registry
      {
          class LocateRegistry;
          class Registry;
      }
      namespace server
      {
          class RMIClientSocketFactory;
          class RMIServerSocketFactory;
      }
    }
  }
}

class java::rmi::registry::LocateRegistry : public ::java::lang::Object
{

  LocateRegistry();
public:
  static ::java::rmi::registry::Registry * getRegistry();
  static ::java::rmi::registry::Registry * getRegistry(jint);
  static ::java::rmi::registry::Registry * getRegistry(::java::lang::String *);
  static ::java::rmi::registry::Registry * getRegistry(::java::lang::String *, jint);
  static ::java::rmi::registry::Registry * getRegistry(::java::lang::String *, jint, ::java::rmi::server::RMIClientSocketFactory *);
  static ::java::rmi::registry::Registry * createRegistry(jint);
  static ::java::rmi::registry::Registry * createRegistry(jint, ::java::rmi::server::RMIClientSocketFactory *, ::java::rmi::server::RMIServerSocketFactory *);
  static ::java::lang::Class class$;
};

#endif // __java_rmi_registry_LocateRegistry__
