//
//  YelpNetworking.h
//  SummerYelpMock
//
//  Created by Zengyang Wu on 8/27/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"


@import CoreLocation;

typedef void (^RestaurantCompletionBlock)(NSArray <YelpDataModel *>* dataModelArray);

@interface YelpNetworking : NSObject

+ (YelpNetworking *)sharedInstance;

- (void)fetchRestaurantsBasedOnLocation:(CLLocation *)location term:(NSString *)term completionBlock:(RestaurantCompletionBlock)completionBlock;

@end
