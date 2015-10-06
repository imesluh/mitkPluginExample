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


#include "de_unihannover_pickerexample_Activator.h"

#include <QtPlugin>

#include "PickerExample.h"

namespace mitk {

void de_unihannover_pickerexample_Activator::start(ctkPluginContext* context)
{
  BERRY_REGISTER_EXTENSION_CLASS(PickerExample, context)
}

void de_unihannover_pickerexample_Activator::stop(ctkPluginContext* context)
{
  Q_UNUSED(context)
}

}

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
  Q_EXPORT_PLUGIN2(de_unihannover_pickerexample, mitk::de_unihannover_pickerexample_Activator)
#endif
