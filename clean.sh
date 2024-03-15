#!/bin/bash
echo "begin clean"
# 此脚本删除当前目录下所有 bin 文件夹。

# 获取当前工作目录。
current_directory=$(pwd)

# 查找当前目录下所有 bin 文件夹。
bin_folders=$(find $current_directory -type d -name "bin")

# 删除所有 bin 文件夹。
for bin_folder in $bin_folders; do
  rm -rf $bin_folder
done

# 查找当前目录下所有 build 文件夹。
build_folders=$(find $current_directory -type d -name "build")

# 删除所有 build 文件夹。
for build_folder in $build_folders; do
  rm -rf $build_folder
done
# 向用户打印一条消息，指示脚本已完成运行。
echo "complete"