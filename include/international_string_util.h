#ifndef GUARD_INTERNATIONAL_STRING_UTIL_H
#define GUARD_INTERNATIONAL_STRING_UTIL_H

#include "list_menu.h"
#include "menu.h"

void ConvertInternationalPlayerName(u8 *src);
void TVShowConvertInternationalString(u8 *dest, const u8 *src, int language);
int GetStringCenterAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringRightAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringCenterAlignXOffsetWithLetterSpacing(int fontId, const u8 *str,
                                                 int totalWidth,
                                                 int letterSpacing);
int GetStringWidthDifference(int fontId, const u8 *str, int totalWidth,
                             int letterSpacing);
int GetMaxWidthInMenuTable(const struct MenuAction *actions, int numActions);
int GetMaxWidthInSubsetOfMenuTable(const struct MenuAction *actions,
                                   const u8 *actionIds, int numActions);
int Intl_GetListMenuWidth(const struct ListMenuTemplate *listMenu);
void CopyMonCategoryText(int dexNum, u8 *dest);
u8 *GetStringClearToWidth(u8 *dest, int fontId, const u8 *str,
                          int totalStringWidth);
void PadNameString(u8 *dest, u8 padChar);
void ConvertInternationalPlayerNameStripChar(u8 *, u8);
void ConvertInternationalContestantName(u8 *);
int GetNicknameLanguage(u8 *);
void FillWindowTilesByRow(int windowId, int columnStart, int rowStart,
                          int numFillTiles, int numRows);

#endif // GUARD_INTERNATIONAL_STRING_UTIL_H
