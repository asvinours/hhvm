#ifndef HPHP_EXT_STD_H
#define HPHP_EXT_STD_H

#include "hphp/runtime/base/base-includes.h"

namespace HPHP {
/////////////////////////////////////////////////////////////////////////////

class StandardExtension : public Extension {
 public:
  StandardExtension() : Extension("standard") {}

  void moduleInit() override {
    initErrorFunc();
    initClassobj();
    initOptions();
    initVariable();
  }

 private:
  void initErrorFunc();
  void initClassobj();
  void initOptions();
  void initVariable();
};

/////////////////////////////////////////////////////////////////////////////
} // namespace HPHP

#endif // HPHP_EXT_STD_H
