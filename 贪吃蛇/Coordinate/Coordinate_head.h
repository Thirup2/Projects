/* 坐标类型头文件 */
#ifndef _COORDINATE_HEAD_H_
#define _COORDINATE_HEAD_H_

/* 包含头文件 */

/* 坐标类型定义 */
struct coordinate
{
    int x;
    int y;
};
typedef struct coordinate Coordinate;
typedef Coordinate *PtrCoordinate;
typedef const Coordinate *cPtrCoordinate;

/* 坐标类型函数接口 */

#endif