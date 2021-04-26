# 2021.02.03

- modify 使用md/mdd代替mt/mtd运行时

# 2021.01.13

- fixed win7下最大化最小化时，libcef3网页无法直接滚动鼠标

# 2020.12.02

> 本分支对cef进行了升级，目前是libcef [chromium80,3987版本](http://opensource.spotify.com/cefbuilds/index.html)
> 并且添加了mp4的支持，可以在www.html5test.com验证，使用别人编译的库：https://download.csdn.net/download/ldmlrx/12285397
> 解决了multi_browser内存泄漏的问题（关闭1个tab，内存不释放，特别是如果这个tab里面包含视频的话，还会在后台播放😂）