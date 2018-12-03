//
//  YCColorExec.m
//  YCBaseValue
//
//  Created by DJnet on 2017/7/20.
//  Copyright © 2017年 YueChao An. All rights reserved.
//

#import "YCColorExec.h"
#import <UIColor+YCCategory.h>

inline UIColor* YCRandomColor() {
    return YCRGBColor((arc4random_uniform(255)), (arc4random_uniform(255)), (arc4random_uniform(255)));
}

inline UIColor* YCRGBColor(CGFloat r, CGFloat g, CGFloat b) {
    return [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0];
}

UIColor* YCHexColor(NSString* hex) {
    return [UIColor yc_colorWithHex: hex];
}

