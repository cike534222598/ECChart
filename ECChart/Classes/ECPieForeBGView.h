//
//  ECPieForeBGView.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  Each click of the pie chart callback block
 */
typedef void(^selectBlock)(CGFloat angle,CGPoint p);

@interface ECPieForeBGView : UIView

/**
 *  Current pie chart callback block
 */
@property (copy, nonatomic) selectBlock select;

@end
