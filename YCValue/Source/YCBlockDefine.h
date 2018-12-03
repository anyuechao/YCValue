//
//  YCBlockDefine.h
//  YCBaseValue
//
//  Created by DJnet on 2017/7/20.
//  Copyright © 2017年 YueChao An. All rights reserved.
//

#ifndef YCBlockDefine_h
#define YCBlockDefine_h
//无参数无返回值
typedef void (^__nullable YC_NoArgs_Block)(void);
//有1个参数
typedef void (^__nullable YC_HaveArgs_BaseBlock)(id _Nullable );
//有多个参数
typedef void (^__nullable YC_HaveArgs_NormalBlock)(id _Nullable,id _Nullable);
//有返回值无参数
typedef id _Nullable (^__nullable YC_NoArgs_HaveRet_Block)(void);
//有返回值有1个参数
typedef id _Nullable (^__nullable YC_HaveArgs_HaveRet_BaseBlock)(id _Nullable );
//有返回值有多个参数
typedef id _Nullable (^__nullable YC_HaveArgs_HaveRet_NormalBlock)(id _Nullable,id _Nullable);

#endif /* YCBlockDefine_h */
