//
//  YelpDataStore.h
//  SummerYelpMock
//
//  Created by Zengyang Wu on 9/3/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;

@interface YelpDataStore : NSObject

@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end
