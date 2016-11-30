//
//  ECRingChart.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import "ECChart.h"

#define k_Width_Scale  (self.frame.size.width / [UIScreen mainScreen].bounds.size.width)

@interface ECRingChart : ECChart

/**
 *  Data source Array
 */
@property (nonatomic, strong) NSArray * valueDataArr;

/**
 *  An array of colors in the loop graph
 */
@property (nonatomic, strong) NSArray * fillColorArray;

/**
 *  Ring Chart width
 */
@property (nonatomic, assign) CGFloat ringWidth;

@end
