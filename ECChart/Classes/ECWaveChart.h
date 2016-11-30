//
//  ECWaveChart.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import "ECChart.h"

typedef NS_ENUM(NSInteger,ECWaveChartType){
    
    ECWaveChartUpType = 0,
    ECWaveChartUpAndDownType
    
};

@interface ECWaveChart : ECChart

/*         X轴刻度数据          */
@property (nonatomic, strong) NSArray * xLineDataArr;

/*         值数据数组          */
@property (nonatomic, strong) NSArray * valueDataArr;

@property (nonatomic, strong) UIColor * xAndYLineColor;

- (instancetype)initWithFrame:(CGRect)frame andType:(ECWaveChartType)waveChartType;

@end
