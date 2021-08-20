#ifndef __HELLOWORLD_MODULES_H__
#define __HELLOWORLD_MODULES_H__

EFIAPI EFI_STATUS EfiTouchScreenInit(VOID);
EFIAPI EFI_STATUS GopDisplayInit(VOID);
EFIAPI EFI_STATUS FrontpageEntry(lv_obj_t *tbSysInfo);

void create_title_with_text(lv_obj_t *parent, const char *text);
void create_label_with_text(lv_obj_t *parent, const char *text);

#endif