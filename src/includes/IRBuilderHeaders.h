/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the LGPLv3 License.
*/

#ifndef   IRBUILDERHEADERS_H
#define   IRBUILDERHEADERS_H

#include "IRBuilderFactory.h"
#include "NullIRBuilder.h"

#ifndef LIGHT_VERSION
  #include "AdcIRBuilder.h"
  #include "AddIRBuilder.h"
  #include "AndIRBuilder.h"
  #include "AndnpdIRBuilder.h"
  #include "AndnpsIRBuilder.h"
  #include "AndpdIRBuilder.h"
  #include "AndpsIRBuilder.h"
  #include "BswapIRBuilder.h"
  #include "CallIRBuilder.h"
  #include "CbwIRBuilder.h"
  #include "CdqeIRBuilder.h"
  #include "ClcIRBuilder.h"
  #include "CldIRBuilder.h"
  #include "CmcIRBuilder.h"
  #include "CmovbIRBuilder.h"
  #include "CmovbeIRBuilder.h"
  #include "CmovlIRBuilder.h"
  #include "CmovleIRBuilder.h"
  #include "CmovnbIRBuilder.h"
  #include "CmovnbeIRBuilder.h"
  #include "CmovnlIRBuilder.h"
  #include "CmovnleIRBuilder.h"
  #include "CmovnoIRBuilder.h"
  #include "CmovnpIRBuilder.h"
  #include "CmovnsIRBuilder.h"
  #include "CmovnzIRBuilder.h"
  #include "CmovoIRBuilder.h"
  #include "CmovpIRBuilder.h"
  #include "CmovsIRBuilder.h"
  #include "CmovzIRBuilder.h"
  #include "CmpIRBuilder.h"
  #include "CqoIRBuilder.h"
  #include "CwdeIRBuilder.h"
  #include "DecIRBuilder.h"
  #include "DivIRBuilder.h"
  #include "IdivIRBuilder.h"
  #include "ImulIRBuilder.h"
  #include "IncIRBuilder.h"
  #include "JbIRBuilder.h"
  #include "JbeIRBuilder.h"
  #include "JlIRBuilder.h"
  #include "JleIRBuilder.h"
  #include "JmpIRBuilder.h"
  #include "JnbIRBuilder.h"
  #include "JnbeIRBuilder.h"
  #include "JnlIRBuilder.h"
  #include "JnleIRBuilder.h"
  #include "JnoIRBuilder.h"
  #include "JnpIRBuilder.h"
  #include "JnsIRBuilder.h"
  #include "JnzIRBuilder.h"
  #include "JoIRBuilder.h"
  #include "JpIRBuilder.h"
  #include "JsIRBuilder.h"
  #include "JzIRBuilder.h"
  #include "LeaIRBuilder.h"
  #include "LeaveIRBuilder.h"
  #include "MovIRBuilder.h"
  #include "MovapdIRBuilder.h"
  #include "MovapsIRBuilder.h"
  #include "MovdqaIRBuilder.h"
  #include "MovdquIRBuilder.h"
  #include "MovhlpsIRBuilder.h"
  #include "MovhpdIRBuilder.h"
  #include "MovhpsIRBuilder.h"
  #include "MovlhpsIRBuilder.h"
  #include "MovlpdIRBuilder.h"
  #include "MovlpsIRBuilder.h"
  #include "MovsxIRBuilder.h"
  #include "MovzxIRBuilder.h"
  #include "MulIRBuilder.h"
  #include "NegIRBuilder.h"
  #include "NotIRBuilder.h"
  #include "OrIRBuilder.h"
  #include "OrpdIRBuilder.h"
  #include "OrpsIRBuilder.h"
  #include "PopIRBuilder.h"
  #include "PushIRBuilder.h"
  #include "PxorIRBuilder.h"
  #include "RclIRBuilder.h"
  #include "RetIRBuilder.h"
  #include "RolIRBuilder.h"
  #include "RcrIRBuilder.h"
  #include "RorIRBuilder.h"
  #include "SarIRBuilder.h"
  #include "SbbIRBuilder.h"
  #include "SetbIRBuilder.h"
  #include "SetbeIRBuilder.h"
  #include "SetlIRBuilder.h"
  #include "SetleIRBuilder.h"
  #include "SetnbIRBuilder.h"
  #include "SetnbeIRBuilder.h"
  #include "SetnlIRBuilder.h"
  #include "SetnleIRBuilder.h"
  #include "SetnoIRBuilder.h"
  #include "SetnpIRBuilder.h"
  #include "SetnsIRBuilder.h"
  #include "SetnzIRBuilder.h"
  #include "SetoIRBuilder.h"
  #include "SetpIRBuilder.h"
  #include "SetsIRBuilder.h"
  #include "SetzIRBuilder.h"
  #include "ShlIRBuilder.h"
  #include "ShrIRBuilder.h"
  #include "StcIRBuilder.h"
  #include "StdIRBuilder.h"
  #include "SubIRBuilder.h"
  #include "TestIRBuilder.h"
  #include "XaddIRBuilder.h"
  #include "XchgIRBuilder.h"
  #include "XorIRBuilder.h"
  #include "XorpdIRBuilder.h"
  #include "XorpsIRBuilder.h"
#endif /* LIGHT VERSION */

#endif     /* !__IRBUILDERHEADERS_H__ */
