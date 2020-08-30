#include "paint.h"

static void OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
    switch (id)
    {
    case ID_CUT:
        // TODO:
        break;
    case ID_COPY:
        // TODO:
        break;
    case ID_PASTE:
        // TODO:
        break;
    case ID_DELETE:
        // TODO:
        break;
    case ID_SELECT_ALL:
        // TODO:
        break;
    case ID_SELECT:
        // TODO:
        break;
    case ID_PENCIL:
        // TODO:
        break;
    }
}

LRESULT CALLBACK
CanvasWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        HANDLE_MSG(hwnd, WM_COMMAND, OnCommand);
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}
