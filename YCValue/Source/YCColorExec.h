//
//  YCColorExec.h
//  YCBaseValue
//
//  Created by DJnet on 2017/7/20.
//  Copyright © 2017年 YueChao An. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// 返回随机色
extern UIColor* YCRandomColor();
// 根据RGB设置颜色
extern UIColor* YCRGBColor(CGFloat r, CGFloat g, CGFloat b);
// 通过hex设置颜色
extern UIColor* YCHexColor(NSString* hex);
