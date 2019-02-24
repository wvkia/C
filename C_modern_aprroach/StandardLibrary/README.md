如何获取命令行参数

当通过命令行 demo name.dat dates.data后
```

int main(int argc,char *argv[]){
    ...
}


```
main函数有两个参数获取命令行参数

argc表示参数的数量，argv表示参数的字符串表示，所以上面那个命令得到的结果是

argc 是3，3个参数；分别是

argc  0             1               2
      demo          name.dat        dates.data

而argv[3]是空指针


