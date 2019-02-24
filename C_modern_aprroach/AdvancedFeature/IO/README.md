### 输入输出

#### 流的概念
流意味着任何输入的源和任意输出的目的地
流的访问通过文件指针（file pointer）实现，FILE*

标准流：
stdin 标准输入
stdout  标准输出
stderr  标准错误

文本文件和二进制文件
文本文件中，字节表示字符，可以检查和编辑文件，例如C程序
二进制文件，字节可以表示其他数据，例如可执行c程序

文件操作

```
FILE * fopen( const char * filename, const char *mode);

filename是文件名，包含路径名；mode表示打开模式，说明打算执行的动作

mode有：r 读、w 写、a 追加、r+ 读写 从头开始、w+ 读写，文件存在就截去、a+ 读写，文件存在就追加 ；当是二进制文件，用 b 做后缀

int fclose( FILE *stream); 关闭文件，成功返回0，失败返回EOF


```

临时文件
```
FILE * tmpfile(void); 创建一个临时文件，如果创建失败返回NULL

char * tmpnam(char *s); 创建一个临时文件名，如果参数s是NULL，这返回文件名所在字符串地址，如果s是字符串，则把文件名保存到字符串中
```

文件缓冲

```

int fflush(FILE *stream); 当程序往文件写输出时，数据先放在缓冲区，等缓冲区满了或关闭文件时，缓冲区会自动清洗。我们可以调用fflush，提前刷新和stream关联缓冲区

void setvbuf(FILE * stream, char * buf, int mode, size_t size);可以自定义缓冲区
第一个参数是需要缓冲的文件指针，第二个是缓冲区的字节数组指针，第三个mode是指缓冲区的类型：_IOFBF 满缓冲、_IOLBF 行缓冲、_IONBF 无缓冲直接写；第四个是缓冲区字节的数量

char buf[N];
setvbuf(stream, buf, _IOFBF, N); 将buf作为stream的满缓冲

注意⚠️：必须在打开stream之后，调用任何stream操作之前，进行setvbuf的操作；

```

```
int remove(const char *filename); 删除文件
int rename(const char* old, const char * new); 重命名
```

格式化输入于输出

```
int fprintf(FILE *stream,const cahr *format,...);
第一个参数表示输出的stream文件指针

int printf(const char *format ,...);

而printf没有fprintf的第一个参数，它是默认输出到stdout标准输出流里

其实两个是一个函数


int fscanf(FILE* stream, const char *format,...);
向输入流读取数据，用format表示输入的格式

int scanf(const char * format);

scanf始终从stdin标准输入中读取

如果读取失败，返回EOF
```

字符输入与输出

```
int fputc(int c, FILE* stream);  //往stream写入一个字符

int putc(int c, FILE *stream);  //往stream写入一个字符，通常作为宏实现

int putchar(int c); //往stdout写入一个字符



int fgetc(FILE *stream);
int getc(FILE *stream);
int getchar(void);
int ungetc(int c, FILE *stream); 将一个字符回退到stream中
```

