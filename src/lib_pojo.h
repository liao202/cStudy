/*
 * lib_pojo.h
 *
 *  Created on: 2020年7月28日
 *      Author: timmyliao
 */

#ifndef LIB_POJO_H_
#define LIB_POJO_H_
/*
 * library.c
 *
 *  Created on: 2020年7月28日
 *      Author: timmyliao
 */


/**
 * 读者
 */
typedef struct Reader{
  char id[20];
  char name[50];
} Reader;

/**
 * 管理员
 */
typedef struct Manager{
  char id[20];
  char name[50];
} Manager;

/**
 * 图书
 */
typedef struct Book{
  char id[20];
  char title[50];
} Book;

/**
 * 读者图书关系
 */
typedef struct ReaderBookRef{
  char rId[20];
  char bId[50];
} ReaderBookRef;

/**
 * 借书记录
 */
typedef struct BorrowFlow{
  char rId[20];
  char bId[50];
} BorrowFlow;




#endif /* LIB_POJO_H_ */
