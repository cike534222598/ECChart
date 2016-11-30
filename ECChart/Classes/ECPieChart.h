//
//  ECPieChart.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECChart.h"

@interface ECPieChart : ECChart

/**
 *  Need to draw the specific values。Elements can be either NSString or NSNumber type
 */
@property (nonatomic, strong) NSArray * valueArr;


/**
 *  Description of each segment of a pie graph
 */
@property (nonatomic, strong) NSArray * descArr;


/**
 *  An array of colors for each section of the pie
 */
@property (nonatomic, strong) NSArray * colorArr;


/**
 *  The length of the outward shift when the pie chart hits
 */
@property (assign , nonatomic) CGFloat positionChangeLengthWhenClick;

@end
