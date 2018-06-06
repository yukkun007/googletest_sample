/* Copyright 2017 yukkun007 */
#ifndef SRC_COMPANY_CORE_HOGE_SUB_FOO_H_
#define SRC_COMPANY_CORE_HOGE_SUB_FOO_H_

#ifdef DLL_EXPORTS
#define DLL_EXPORT  __declspec(dllexport)
#else
#define DLL_EXPORT  __declspec(dllimport)
#endif

namespace company {
namespace hoge {
namespace sub {

class DLL_EXPORT Foo {
  public:
    Foo();
    int num_;
};

} // namespace sub
} // namespace hoge
} // namespace company

#endif // SRC_COMPANY_CORE_HOGE_SUB_FOO_H_