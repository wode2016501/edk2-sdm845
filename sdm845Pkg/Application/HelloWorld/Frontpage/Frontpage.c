#include "../helloworld.h"

#include "../Modules.h"

EFIAPI EFI_STATUS FrontpageEntry(lv_obj_t *tbSysInfo)
{
  EFI_STATUS Status    = EFI_SUCCESS;
  CHAR8      TempStr8[1024];
  CHAR16     TempStr[1024];

  if (tbSysInfo == NULL) {
    Status = EFI_INVALID_PARAMETER;
    goto exit;
  }

  UnicodeSPrint(
      TempStr, sizeof(TempStr), L"Firmware release: no release yet \n");

  UnicodeStrToAsciiStrS(TempStr, TempStr8, sizeof(TempStr8));
  create_label_with_text(tbSysInfo, TempStr8);

  create_label_with_text(tbSysInfo, "\n\n");
  create_title_with_text(tbSysInfo, "Hardware Information \n\n");

  create_label_with_text(
      tbSysInfo, "Failed to do everything. Nothing has been implemented. \n\n");

exit:
  return Status;
}
