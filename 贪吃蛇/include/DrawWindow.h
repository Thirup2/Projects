#ifndef SNAKE_DRAWWINDOW_H
#define SNAKE_DRAWWINDOW_H

#ifdef WIN32
#ifdef DrawWindow_EXPORTS
#define DW_API _declspec(dllexport)
#else
#define DW_API _declspec(dllimport)
#endif
#define DW_CALL __stdcall
#elif __linux__
#define DW_API
#define DW_CALL
#endif

#ifdef __cplusplus
extern "C" {
#endif

// 函数接口
DW_API void DW_CALL LoadWindow(void);

#ifdef __cplusplus
}
#endif

#endif //SNAKE_DRAWWINDOW_H
