//
//  ECLineChart.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECChart.h"

/**
 *  Line chart type, has been abandoned
 */
typedef  NS_ENUM(NSInteger,ECLineChartType){
    
    ECChartLineEveryValueForEveryX=0, /*        Default         */
    ECChartLineValueNotForEveryX
};


/**
 *  Distribution type of line graph
 */
typedef NS_ENUM(NSInteger,ECLineChartQuadrantType){
    
    /**
     *  The line chart is distributed in the first quadrant.
     */
    ECLineChartQuadrantTypeFirstQuardrant,
    
    /**
     *  The line chart is distributed in the first two quadrant
     */
    ECLineChartQuadrantTypeFirstAndSecondQuardrant,
    
    /**
     *  The line chart is distributed in the first four quadrant
     */
    ECLineChartQuadrantTypeFirstAndFouthQuardrant,
    
    /**
     *  The line graph is distributed in the whole quadrant
     */
    ECLineChartQuadrantTypeAllQuardrant
    
};

/****************************华丽的分割线***********************************/

@interface ECLineChart : ECChart

/**
 *  X axis scale data of a broken line graph, the proposed use of NSNumber or the number of strings
 */
@property (nonatomic, strong) NSArray * xLineDataArr;


/**
 *  Y axis scale data of a broken line graph, the proposed use of NSNumber or the number of strings
 */
@property (nonatomic, strong) NSArray * yLineDataArr;


/**
 *  An array of values that are about to be drawn.
 */
@property (nonatomic, strong) NSArray * valueArr;


/**
 *  The type of broken line graph has been abandoned.
 */
@property (assign , nonatomic) ECLineChartType  lineType ;


/**
 *  The quadrant of the specified line chart
 */
@property (assign, nonatomic) ECLineChartQuadrantType  lineChartQuadrantType;


/**
 *  Line width (the value of non drawn path width, only refers to the X, Y axis scale line width)
 */
@property (assign, nonatomic) CGFloat lineWidth;


/**
 *  To draw the line color of the target
 */
@property (nonatomic, strong) NSArray * valueLineColorArr;


/**
 *  X, Y axis line color
 */
@property (nonatomic, strong) UIColor * xAndYLineColor;


/**
 *  Color for each value draw point
 */
@property (nonatomic, strong) NSArray * pointColorArr;


/**
 *  Y, X axis scale numerical color
 */
@property (nonatomic, strong) UIColor * xAndYNumberColor;


/**
 *  Draw dotted line color
 */
@property (nonatomic, strong) NSArray * positionLineColorArr;



/**
 *  Draw the text color of the information.
 */
@property (nonatomic, strong) NSArray * pointNumberColorArr;



/**
 *  Value path is required to draw points
 */
@property (assign,  nonatomic) BOOL hasPoint;



/**
 *  Draw path line width
 */
@property (nonatomic, assign) CGFloat animationPathWidth;


/**
 *  Drawing path is the curve, the default NO
 */
@property (nonatomic, assign) BOOL pathCurve;


/**
 *  Whether to fill the contents of the drawing path, the default NO
 */
@property (nonatomic, assign) BOOL contentFill;


/**
 *  Draw path fill color, default is grey
 */
@property (nonatomic, strong) NSArray * contentFillColorArr;



/**
 *  Custom initialization method
 *
 *  @param frame         frame
 *  @param lineChartType Abandoned
 *
 */
- (instancetype)initWithFrame:(CGRect)frame
            andLineChartType:(ECLineChartType)lineChartType;

@end
