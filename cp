

##cp命令
 + 用来将一个或多个源文件或者目录复制到指定的目的文件或目录。
 + 它可以将单个源文件复制成一个指定文件名的具体的文件或一个已经存在的目录下。  
 + cp命令还支持同时复制多个文件，当一次复制多个文件时，目标文件参数必须是一个已经存在的目录，否则将出现错误。  
 
 

>#### 语法 ####

```
cp(选项)(参数)
```  

> #### 选项 ####
> 
```
-a：此参数的效果和同时指定"-dpR"参数相同；
-d：当复制符号连接时，把目标文件或目录也建立为符号连接，并指向与源文件或目录连接的原始文件或目录；
-f：强行复制文件或目录，不论目标文件或目录是否已存在；
-i：覆盖既有文件之前先询问用户；
-l：对源文件建立硬连接，而非复制文件；
-p：保留源文件或目录的属性；
-R/r：递归处理，将指定目录下的所有文件与子目录一并处理；
-s：对源文件建立符号连接，而非复制文件；
-u：使用这项参数后只会在源文件的更改时间较目标文件更新时或是名称相互对应的目标文件并不存在时，才复制文件；
-S：在备份文件时，用指定的后缀“SUFFIX”代替文件的默认后缀；
-b：覆盖已存在的文件目标前将目标文件备份；
-v：详细显示命令执行的操作。
```
>#### 参数 ####

 - 源文件：制定源文件列表。
默认情况下，cp命令不能复制目录，
如果要复制目录，则必须使用` -R` 选项；  
 - 目标文件：指定目标文件。
当“源文件”为多个文件时，要求“目标文件”为指定的目录。  

> #### 实例####

1. 如果把一个文件复制到一个目标文件中，       
而目标文件已经存在，那么，该目标文件的内容将被破坏。  
此命令中所有参数既可以是绝对路径名，  
也可以是相对路径名。  
通常会用到点`.`或点点`..`的形式。  
例如，下面的命令将指定文件复制到当前目录下：
```
cp ../mary/homework/assign .  
```
- 所有目标文件指定的目录必须是己经存在的，  
- cp命令不能创建目录。  
- 如果没有文件复制的权限，则系统会显示出错信息。

+ 将文件`file`复制到目录`/usr/men/tmp`下，并改名为`file1`
```
cp file /usr/men/tmp/file1
```  

+ 将目录/usr/men下的所有文件及其子目录复制到目录`/usr/zh中`
```
cp -r /usr/men /usr/zh
```

交互式地将目录`/usr/men`中的,  
以`m`打头的所有`.c`文件复制到目录`/usr/zh`中
```
cp -i /usr/men m*.c /usr/zh
```
> ####技巧####  

- 我们在Linux下使用cp命令复制文件时候， 
有时候会需要覆盖一些同名文件，  
覆盖文件的时候都会有提示：要不停的按Y来确定执行覆盖。  
文件数量不多还好，但是要是几百个估计按Y都要吐血了，于是折腾来半天总结了一个方法：
```
cp aaa/* /bbb
```

- 复制目录`aaa`下所有到`/bbb`目录下，  
这时如果`/bbb`目录下有和`aaa`同名的文件，  
需要按`Y`来确认,  并且会略过`aaa`目录下的子目录。
```
cp -r aaa/* /bbb
```
- 这次依然需要按Y来确认操作，但是没有忽略子目录。
```
cp -r -a aaa/* /bbb
```
- 依然需要按`Y`来确认操作，并且把`aaa`目录以及子目录和文件属性也传递到了`/bbb`。
```
\cp -r -a aaa/* /bbb
```
- 成功，没有提示按`Y`、传递了目录属性、没有略过目录。


----------


留作备用 all copy from http://man.linuxde.net/[cp](http://note.youdao.com/)
