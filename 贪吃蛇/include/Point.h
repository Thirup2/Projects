/* 坐标点类接口头文件 */
#ifndef POINT_H_
#define POINT_H_

/* 包含头文件 */

/* 系统兼容配置 */
#ifdef _WIN32
#ifdef EXPORT
#define POINT_API _declspec(dllexport)
#else
#define POINT_API _declspec(dllimport)
#endif
#define STD_CALL __stdcall
#elif __linux__
#define POINT_API
#define STD_CALL
#endif

/* 语言兼容配置：前始 */
#ifdef __cplusplus
extern "C" {
#endif
/* 语言兼容配置：前终 */

/* 坐标点类型定义 */
typedef enum
{
    true, false
}bool;

struct point
{
    unsigned long x;
    unsigned long y;
};
typedef struct point Point;
typedef Point *PtrPoint;
typedef const Point *cPtrPoint;

/* 坐标点接口声明 */
/*
 * 操作：显示点
 * 参数：点指针
 * 返回：
 * 1. 若设置成功返回 true
 * 2. 否则返回 false
*/
bool SetPoint(PtrPoint point);

/*
 * 操作：取消显示点
 * 参数：点指针
 * 返回：
 * 1. 若取消成功返回 true
 * 2. 否则返回 false
*/
bool ClearPoint(PtrPoint point);

/* 语言兼容配置：后始 */
#ifdef __cplusplus
}
#endif
/* 语言兼容配置：后终 */

#endif