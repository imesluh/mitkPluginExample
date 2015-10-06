project(de_unihannover_pickerexample)

mitk_create_plugin(
  EXPORT_DIRECTIVE PICKEREXAMPLE_EXPORT
  EXPORTED_INCLUDE_SUFFIXES src
  MODULE_DEPENDS MitkQtWidgetsExt
)
