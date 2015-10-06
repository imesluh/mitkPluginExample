/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/


#ifndef de_unihannover_pickerexample_Activator_h
#define de_unihannover_pickerexample_Activator_h

#include <ctkPluginActivator.h>

namespace mitk {

class de_unihannover_pickerexample_Activator :
  public QObject, public ctkPluginActivator
{
  Q_OBJECT
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
  Q_PLUGIN_METADATA(IID "de_unihannover_pickerexample")
#endif
  Q_INTERFACES(ctkPluginActivator)

public:

  void start(ctkPluginContext* context);
  void stop(ctkPluginContext* context);

}; // de_unihannover_pickerexample_Activator

}

#endif // de_unihannover_pickerexample_Activator_h
