// Include python without Qt conflicts on slots
#pragma push_macro("slots")
#undef slots
#include "Python.h"
#pragma pop_macro("slots")