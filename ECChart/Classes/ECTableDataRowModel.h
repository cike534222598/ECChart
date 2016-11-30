//
//  ECTableDataRowModel.h
//  ECChart
//
//  Created by 微知 on 16/11/30.
//  Copyright © 2016年 Jame. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ECTableDataRowModel : NSObject

/**
 *  The maximum number of columns in the model.
 */
@property (nonatomic, assign) NSInteger maxCount;


/**
 *  Data Source Array
 */
@property (nonatomic, strong) NSArray * dataArr;

@end
