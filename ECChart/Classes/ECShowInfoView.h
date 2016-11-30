//
//  ECShowInfoView.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ECShowInfoView : UIView

@property (copy, nonatomic) NSString * showContentString;


- (void)updateFrameTo:(CGRect)frame andBGColor:(UIColor *)bgColor andShowContentString:(NSString *)contentString;

@end
