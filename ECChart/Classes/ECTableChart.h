//
//  ECTableChart.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import "ECChart.h"

@interface ECTableChart : ECChart

/**
 *  Table name, if it is empty, does not display a table name
 */
@property (nonatomic, copy) NSString * tableTitleString;

/**
 *  Table header row height, default 50
 */
@property (nonatomic, assign) CGFloat tableChartTitleItemsHeight;


/**
 *  Table header text font size (default 15), color (default depth)
 */
@property (nonatomic, strong) UIFont * tableTitleFont;
@property (nonatomic, strong) UIColor * tableTitleColor;


/**
 *  Table line color
 */
@property (nonatomic, strong) UIColor  * lineColor;


/**
 *  Data Source Arrays
 */
@property (nonatomic, strong) NSArray * dataArr;


/**
 *  Width of each column
 */
@property (nonatomic, strong) NSArray * colWidthArr;

/**
 *  The smallest line is high, the default is 50
 */
@property (nonatomic, assign) CGFloat minHeightItems;


/**
 *  Table data display color
 */
@property (nonatomic, strong) UIColor * bodyTextColor;


/**
 *  The column header name, the first column horizontal statement, need to use | segmentation
 */
@property (nonatomic, strong) NSArray * colTitleArr;

/**
 *  Anyway, the ranks of name statement, if it is necessary to fill out a two data
 */
@property (nonatomic, strong) NSArray * rowAndColTitleArr;


/**
 *  Offset value of start point
 */
@property (nonatomic, assign) CGFloat beginSpace;


/**
 *  According to the current data source to determine the desired table view
 */
- (CGFloat)heightFromThisDataSource;


@end
