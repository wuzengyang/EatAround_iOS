//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by Zengyang Wu on 8/30/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpNetworking.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;


@end
