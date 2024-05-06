/*
 * @Author: Johnathan 2440877322@qq.com
 * @Date: 2024-04-27 21:36:19
 * @LastEditors: Johnathan 2440877322@qq.com
 * @LastEditTime: 2024-04-29 18:09:05
 * @FilePath: /CppWrapGan/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "wrap.h"

int main(){
    // std::string comment = "source /home/jiangz/jz/gan/CppWrapGan/setup.bash";
    // Wrap cwp(comment);
    // cwp.run();
    InfiniteGenerateWrap gen;
    gen.run();

    return 0;
}